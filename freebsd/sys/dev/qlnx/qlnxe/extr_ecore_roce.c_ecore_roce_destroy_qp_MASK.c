
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ resp; scalar_t__ req; } ;
struct ecore_rdma_qp {scalar_t__ cur_state; int qp_idx; TYPE_1__ cq_prod; } ;
struct ecore_rdma_destroy_qp_out_params {scalar_t__ sq_cq_prod; scalar_t__ rq_cq_prod; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_hwfn*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_rdma_qp*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_rdma_qp*,scalar_t__*,scalar_t__*) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_5,
        struct ecore_rdma_qp *VAR_6,
        struct ecore_rdma_destroy_qp_out_params *VAR_7)
{
 u32 VAR_8 = VAR_6->cq_prod.resp, VAR_9 = VAR_6->cq_prod.req;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 enum _ecore_status_t VAR_12;





 if ((VAR_6->cur_state != VAR_3) &&
     (VAR_6->cur_state != VAR_1) &&
     (VAR_6->cur_state != VAR_2))
 {
  FUNC_0(VAR_5,
     1,
     "QP must be in error, reset or init state before destroying it\n");
  return VAR_0;
 }

 if (VAR_6->cur_state != VAR_3) {
  VAR_12 = FUNC_3(VAR_5,
       VAR_6,
       &VAR_10,
       &VAR_8);
  if (VAR_12 != VAR_4)
   return VAR_12;


  VAR_12 = FUNC_2(VAR_5, VAR_6,
       &VAR_11,
       &VAR_9);
  if (VAR_12 != VAR_4)
   return VAR_12;


  if (VAR_10 != VAR_11) {
   FUNC_0(VAR_5,
      1,
      "number of invalidate memory windows is different from bounded ones\n");
   return VAR_0;
  }
 }

 FUNC_1(VAR_5, VAR_6->qp_idx);

 VAR_7->rq_cq_prod = VAR_8;
 VAR_7->sq_cq_prod = VAR_9;

 return VAR_4;
}
