
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int b_rdma_enabled_in_prs; int rdma_prs_search_reg; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t
FUNC_1(struct ecore_hwfn *VAR_1, struct ecore_ptt *VAR_2)
{
 VAR_1->rdma_prs_search_reg = VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_1->rdma_prs_search_reg, 1);
 VAR_1->b_rdma_enabled_in_prs = 1;

 return 0;
}
