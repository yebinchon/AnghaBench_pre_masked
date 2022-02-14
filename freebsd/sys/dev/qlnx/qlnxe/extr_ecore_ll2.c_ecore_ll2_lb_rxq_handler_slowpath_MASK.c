
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ooo_opaque {scalar_t__ ooo_opcode; int cid; } ;
struct ecore_hwfn {int p_ooo_info; } ;
struct core_rx_slow_path_cqe {scalar_t__ ramrod_cmd_id; int opaque_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(struct ecore_hwfn *VAR_2,
      struct core_rx_slow_path_cqe *VAR_3)
{
 struct ooo_opaque *VAR_4;
 u32 VAR_5;

 if (VAR_3->ramrod_cmd_id != VAR_0)
  return 0;

 VAR_4 = (struct ooo_opaque *)&VAR_3->opaque_data;
 if (VAR_4->ooo_opcode != VAR_1)
  return 0;


 VAR_5 = FUNC_0(VAR_4->cid);
 FUNC_1(VAR_2->p_ooo_info, VAR_5);

 return 1;
}
