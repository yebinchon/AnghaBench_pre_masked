
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ ird; scalar_t__ ord; int private_data_len; scalar_t__ private_data; } ;
struct ecore_iwarp_ep {scalar_t__ mpa_rev; int rtr_type; scalar_t__ state; int tcp_cid; TYPE_4__* ep_buffer_virt; TYPE_3__ cm_info; TYPE_5__* qp; int cb_context; struct ecore_iwarp_ep* listener; } ;
struct ecore_iwarp_accept_in {scalar_t__ ord; int ird; int private_data_len; TYPE_5__* qp; int private_data; int cb_context; scalar_t__ ep_context; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_10__ {struct ecore_iwarp_ep* ep; int icid; } ;
struct TYPE_9__ {scalar_t__ out_pdata; } ;
struct TYPE_6__ {int ep_list; } ;
struct TYPE_7__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int*,int ,int) ;
 struct ecore_iwarp_ep* VAR_10 ;
 int FUNC_4 (struct ecore_hwfn*,TYPE_5__*,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,int *,struct ecore_iwarp_ep*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_iwarp_ep*,int*) ;
 int FUNC_8 (struct ecore_hwfn*,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;

enum _ecore_status_t
FUNC_10(void *VAR_11,
     struct ecore_iwarp_accept_in *VAR_12)
{
 struct ecore_hwfn *VAR_13 = (struct ecore_hwfn *)VAR_11;
 struct ecore_iwarp_ep *VAR_14;
 u8 VAR_15 = 0;
 enum _ecore_status_t VAR_16;

 VAR_14 = (struct ecore_iwarp_ep *)VAR_12->ep_context;
 if (!VAR_14) {
  FUNC_0(VAR_13, "Ep Context receive in accept is NULL\n");
  return VAR_1;
 }

 FUNC_2(VAR_13, VAR_7, "QP(0x%x) EP(0x%x)\n",
     VAR_12->qp->icid, VAR_14->tcp_cid);

 if ((VAR_12->ord > VAR_5) ||
     (VAR_12->ird > VAR_4)) {
  FUNC_2(VAR_13, VAR_7,
      "QP(0x%x) EP(0x%x) ERROR: Invalid ord(0x%x)/ird(0x%x)\n",
      VAR_12->qp->icid, VAR_14->tcp_cid,
      VAR_12->ord, VAR_12->ord);
  return VAR_1;
 }


 if (VAR_12->qp->ep == VAR_10) {

  FUNC_8(VAR_13, 0);
 } else {
  FUNC_2(VAR_13, VAR_7,
      "Note re-use of QP for different connect\n");

  FUNC_9(VAR_13, VAR_12->qp->ep);
 }

 FUNC_5(VAR_13,
        &VAR_13->p_rdma_info->iwarp.ep_list,
        VAR_14);
 VAR_14->listener = VAR_10;
 VAR_14->cb_context = VAR_12->cb_context;
 VAR_14->qp = VAR_12->qp;
 VAR_14->qp->ep = VAR_14;

 if (VAR_14->mpa_rev == VAR_8) {




  if (VAR_12->ord > VAR_14->cm_info.ird) {
   VAR_12->ord = VAR_14->cm_info.ird;
  }




  if ((VAR_14->rtr_type & VAR_9) &&
      (VAR_12->ird == 0))
   VAR_12->ird = 1;
 }


 VAR_14->cm_info.ord = VAR_12->ord;
 VAR_14->cm_info.ird = VAR_12->ird;

 FUNC_7(VAR_13, VAR_14, &VAR_15);

 VAR_14->cm_info.private_data = VAR_14->ep_buffer_virt->out_pdata;
 VAR_14->cm_info.private_data_len =
  VAR_12->private_data_len + VAR_15;

 FUNC_3((u8 *)VAR_14->ep_buffer_virt->out_pdata + VAR_15,
      VAR_12->private_data,
      VAR_12->private_data_len);

 if (VAR_14->state == VAR_2) {
  FUNC_1(VAR_13, 0,
     "(0x%x) Accept called on EP in CLOSED state\n",
     VAR_14->tcp_cid);
  VAR_14->tcp_cid = VAR_3;
  FUNC_9(VAR_13, VAR_14);
  return VAR_0;
 }

 VAR_16 = FUNC_6(VAR_13, VAR_14);
 if (VAR_16) {
  FUNC_4(VAR_13,
          VAR_12->qp,
          VAR_6,
          1);
 }

 return VAR_16;
}
