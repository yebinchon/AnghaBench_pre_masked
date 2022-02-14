
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int rdma_prs_search_reg; scalar_t__ b_rdma_enabled_in_prs; TYPE_1__* p_rdma_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 struct ecore_ptt* FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_3)
{
 struct ecore_ptt *VAR_4;

 if (FUNC_0(VAR_3->p_dev))
  return VAR_1;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return VAR_0;




 if (VAR_3->p_rdma_info &&
     VAR_3->p_rdma_info->active &&
     VAR_3->b_rdma_enabled_in_prs)
  FUNC_3(VAR_3, VAR_4, VAR_3->rdma_prs_search_reg, 0x1);


 FUNC_3(VAR_3, VAR_4,
   VAR_2, 0x0);
 FUNC_2(VAR_3, VAR_4);

 return VAR_1;
}
