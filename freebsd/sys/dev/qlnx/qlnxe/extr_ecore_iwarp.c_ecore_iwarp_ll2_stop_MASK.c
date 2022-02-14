
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_iwarp_info {scalar_t__ ll2_syn_handle; scalar_t__ ll2_ooo_handle; scalar_t__ ll2_mpa_handle; int mac_addr; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; int p_dev; } ;
struct TYPE_2__ {struct ecore_iwarp_info iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ecore_hwfn *VAR_1)
{
 struct ecore_iwarp_info *VAR_2 = &VAR_1->p_rdma_info->iwarp;
 int VAR_3 = 0;

 if (VAR_2->ll2_syn_handle != VAR_0) {

  VAR_3 = FUNC_2(VAR_1,
          VAR_2->ll2_syn_handle);
  if (VAR_3)
   FUNC_0(VAR_1, "Failed to terminate syn connection\n");

  FUNC_1(VAR_1,
          VAR_2->ll2_syn_handle);
  VAR_2->ll2_syn_handle = VAR_0;
 }

 if (VAR_2->ll2_ooo_handle != VAR_0) {
  VAR_3 = FUNC_2(VAR_1,
          VAR_2->ll2_ooo_handle);
  if (VAR_3)
   FUNC_0(VAR_1, "Failed to terminate ooo connection\n");

  FUNC_1(VAR_1,
          VAR_2->ll2_ooo_handle);
  VAR_2->ll2_ooo_handle = VAR_0;
 }

 if (VAR_2->ll2_mpa_handle != VAR_0) {
  VAR_3 = FUNC_2(VAR_1,
          VAR_2->ll2_mpa_handle);
  if (VAR_3)
   FUNC_0(VAR_1, "Failed to terminate mpa connection\n");

  FUNC_1(VAR_1,
          VAR_2->ll2_mpa_handle);
  VAR_2->ll2_mpa_handle = VAR_0;
 }

 FUNC_3(VAR_1->p_dev, 0,
        VAR_1->p_rdma_info->iwarp.mac_addr);

 return VAR_3;
}
