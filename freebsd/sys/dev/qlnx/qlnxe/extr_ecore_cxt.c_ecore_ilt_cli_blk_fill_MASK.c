
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int val; } ;
struct ecore_ilt_client_cfg {TYPE_1__ p_size; } ;
struct ecore_ilt_cli_blk {int total_size; int real_size_in_page; int start_line; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_ilt_client_cfg *VAR_0,
       struct ecore_ilt_cli_blk *VAR_1,
       u32 VAR_2,
       u32 VAR_3,
       u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_0->p_size.val);


 if (VAR_1->total_size)
  return;

 VAR_1->total_size = VAR_3;
 VAR_1->real_size_in_page = 0;
 if (VAR_4)
  VAR_1->real_size_in_page = (VAR_5 / VAR_4) * VAR_4;
 VAR_1->start_line = VAR_2;
}
