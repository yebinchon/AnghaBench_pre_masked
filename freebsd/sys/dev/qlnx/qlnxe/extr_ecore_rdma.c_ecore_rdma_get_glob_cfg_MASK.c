
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_rdma_glob_cfg {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int glob_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_rdma_glob_cfg*,int *,int) ;

enum _ecore_status_t
FUNC_1(struct ecore_hwfn *VAR_1,
   struct ecore_rdma_glob_cfg *VAR_2)
{
 FUNC_0(VAR_2, &VAR_1->p_rdma_info->glob_cfg,
      sizeof(struct ecore_rdma_glob_cfg));

 return VAR_0;
}
