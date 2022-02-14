
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_rdma_qp {int iwarp_state; int icid; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum ecore_iwarp_qp_state { ____Placeholder_ecore_iwarp_qp_state } ecore_iwarp_qp_state ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int qp_lock; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ,char*) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_rdma_qp*) ;
 int * VAR_3 ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_4,
        struct ecore_rdma_qp *VAR_5,
        enum ecore_iwarp_qp_state VAR_6,
        bool VAR_7)
{
 enum ecore_iwarp_qp_state VAR_8;
 enum _ecore_status_t VAR_9 = 0;
 bool VAR_10 = 0;




 FUNC_1(&VAR_4->p_rdma_info->iwarp.qp_lock);
 VAR_8 = VAR_5->iwarp_state;

 if (VAR_8 == VAR_6) {
  FUNC_2(&VAR_4->p_rdma_info->iwarp.qp_lock);
  return VAR_2;
 }

 switch (VAR_8) {
 case 130:
  switch (VAR_6) {
  case 129:
   VAR_5->iwarp_state = 129;
   break;
  case 131:
   VAR_5->iwarp_state = 131;
   if (!VAR_7)
    VAR_10 = 1;
   break;
  default:
   break;
  }
  break;
 case 129:
  switch (VAR_6) {
  case 132:
   if (!VAR_7)
    VAR_10 = 1;

   VAR_5->iwarp_state = 132;
   break;
  case 131:
   if (!VAR_7)
    VAR_10 = 1;
   VAR_5->iwarp_state = 131;
   break;
  default:
   break;
  }
  break;
 case 131:
  switch (VAR_6) {
  case 130:

   VAR_5->iwarp_state = VAR_6;
   break;
  case 132:

   break;
  default:
   VAR_9 = VAR_0;
  }
  break;
 case 128:
 case 132:
  VAR_5->iwarp_state = VAR_6;
  break;
 default:
  break;
 }

 FUNC_0(VAR_4, VAR_1, "QP(0x%x) %s --> %s %s\n",
     VAR_5->icid,
     VAR_3[VAR_8],
     VAR_3[VAR_5->iwarp_state],
     VAR_7 ? "internal" : " ");

 FUNC_2(&VAR_4->p_rdma_info->iwarp.qp_lock);

 if (VAR_10)
  FUNC_3(VAR_4, VAR_5);

 return VAR_9;
}
