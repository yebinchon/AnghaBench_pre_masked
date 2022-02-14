
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_query_qp_out_params {int state; int draining; } ;
struct ecore_rdma_qp {int cur_state; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_rdma_qp*,struct ecore_rdma_query_qp_out_params*,int *) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_rdma_qp*,struct ecore_rdma_query_qp_out_params*) ;

enum _ecore_status_t FUNC_2(
 struct ecore_hwfn *VAR_1,
 struct ecore_rdma_qp *VAR_2,
 struct ecore_rdma_query_qp_out_params *VAR_3)
{
 enum _ecore_status_t VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3,
        &VAR_3->draining);
 if (VAR_4)
  return VAR_4;

 VAR_3->state = VAR_2->cur_state;

 return VAR_0;
}
