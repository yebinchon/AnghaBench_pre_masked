
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int req; int resp; } ;
struct ecore_rdma_qp {scalar_t__ cur_state; TYPE_1__ cq_prod; int qp_idx; } ;
struct ecore_rdma_modify_qp_in_params {int modify_flags; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum ecore_roce_qp_state { ____Placeholder_ecore_roce_qp_state } ecore_roce_qp_state ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_rdma_qp*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_rdma_qp*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_rdma_qp*,scalar_t__*,int *) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_rdma_qp*,scalar_t__*,int *) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_rdma_qp*,int,int,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_rdma_qp*,int,int ) ;
 int FUNC_8 (struct ecore_hwfn*,int ) ;

enum _ecore_status_t
FUNC_9(struct ecore_hwfn *VAR_9,
       struct ecore_rdma_qp *VAR_10,
       enum ecore_roce_qp_state VAR_11,
       struct ecore_rdma_modify_qp_in_params *VAR_12)
{
 u32 VAR_13 = 0, VAR_14 = 0;
 enum _ecore_status_t VAR_15 = VAR_8;




 if (((VAR_11 == VAR_3) ||
      (VAR_11 == VAR_4)) &&
     (VAR_10->cur_state == VAR_5))
 {



  VAR_15 = FUNC_8(VAR_9, VAR_10->qp_idx);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_3(VAR_9, VAR_10);
  return VAR_15;

 } else if ((VAR_11 == VAR_5) &&
     (VAR_10->cur_state == VAR_6))
 {

  VAR_15 = FUNC_2(VAR_9, VAR_10);
  if (VAR_15 != VAR_8)
   return VAR_15;


  VAR_15 = FUNC_7(VAR_9, VAR_10, 0,
          VAR_12->modify_flags);
  return VAR_15;

 } else if ((VAR_11 == VAR_6) &&
     (VAR_10->cur_state == VAR_6))
 {

  VAR_15 = FUNC_7(VAR_9, VAR_10, 0,
          VAR_12->modify_flags);
  if (VAR_15 != VAR_8)
   return VAR_15;

  VAR_15 = FUNC_6(VAR_9, VAR_10, 0, 0,
          VAR_12->modify_flags);
  return VAR_15;

 } else if ((VAR_11 == VAR_6) &&
     (VAR_10->cur_state == VAR_7))
 {

  VAR_15 = FUNC_6(VAR_9, VAR_10, 1, 0,
          VAR_12->modify_flags);
  return VAR_15;

 } else if ((VAR_11 == VAR_7) &&
     (VAR_10->cur_state == VAR_7))
 {

  VAR_15 = FUNC_7(VAR_9, VAR_10, 0,
          VAR_12->modify_flags);
  if (VAR_15 != VAR_8)
   return VAR_15;

  VAR_15 = FUNC_6(VAR_9, VAR_10, 0, 0,
          VAR_12->modify_flags);
  return VAR_15;

 } else if ((VAR_11 == VAR_7) &&
   (VAR_10->cur_state == VAR_6))
 {

  VAR_15 = FUNC_7(VAR_9, VAR_10, 0,
          VAR_12->modify_flags);
  if (VAR_15 != VAR_8)
   return VAR_15;

  VAR_15 = FUNC_6(VAR_9, VAR_10, 0, 0,
          VAR_12->modify_flags);

  return VAR_15;
 } else if (VAR_10->cur_state == VAR_2) {

  VAR_15 = FUNC_7(VAR_9, VAR_10, 1,
          VAR_12->modify_flags);
  if (VAR_15 != VAR_8)
   return VAR_15;

  VAR_15 = FUNC_6(VAR_9, VAR_10, 0, 1,
          VAR_12->modify_flags);
  return VAR_15;

 } else if (VAR_10->cur_state == VAR_4) {



  VAR_15 = FUNC_5(VAR_9, VAR_10,
       &VAR_13,
       &VAR_10->cq_prod.resp);

  if (VAR_15 != VAR_8)
   return VAR_15;

  VAR_15 = FUNC_4(VAR_9, VAR_10,
       &VAR_14,
       &VAR_10->cq_prod.req);


  if (VAR_15 != VAR_8)
   return VAR_15;

  if (VAR_13 != VAR_14) {
   FUNC_0(VAR_9,
      1,
      "number of invalidate memory windows is different from bounded ones\n");
   return VAR_0;
  }
 } else {
  FUNC_1(VAR_9, VAR_1, "ECORE_SUCCESS\n");
 }

 return VAR_15;
}
