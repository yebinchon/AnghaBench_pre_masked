
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_iwarp_reject_in {int private_data_len; int private_data; int cb_context; scalar_t__ ep_context; } ;
struct TYPE_3__ {int private_data_len; scalar_t__ private_data; } ;
struct ecore_iwarp_ep {scalar_t__ state; int tcp_cid; TYPE_2__* ep_buffer_virt; TYPE_1__ cm_info; int qp; int cb_context; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {scalar_t__ out_pdata; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int*,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_iwarp_ep*,int*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;

enum _ecore_status_t
FUNC_7(void *VAR_6,
     struct ecore_iwarp_reject_in *VAR_7)
{
 struct ecore_hwfn *VAR_8 = (struct ecore_hwfn *)VAR_6;
 struct ecore_iwarp_ep *VAR_9;
 u8 VAR_10 = 0;
 enum _ecore_status_t VAR_11;

 VAR_9 = (struct ecore_iwarp_ep *)VAR_7->ep_context;
 if (!VAR_9) {
  FUNC_0(VAR_8, "Ep Context receive in reject is NULL\n");
  return VAR_1;
 }

 FUNC_2(VAR_8, VAR_4, "EP(0x%x)\n", VAR_9->tcp_cid);

 VAR_9->cb_context = VAR_7->cb_context;
 VAR_9->qp = VAR_5;

 FUNC_5(VAR_8, VAR_9, &VAR_10);

 VAR_9->cm_info.private_data = VAR_9->ep_buffer_virt->out_pdata;
 VAR_9->cm_info.private_data_len =
  VAR_7->private_data_len + VAR_10;

 FUNC_3((u8 *)VAR_9->ep_buffer_virt->out_pdata + VAR_10,
      VAR_7->private_data,
      VAR_7->private_data_len);

 if (VAR_9->state == VAR_2) {
  FUNC_1(VAR_8, 0,
     "(0x%x) Reject called on EP in CLOSED state\n",
     VAR_9->tcp_cid);
  VAR_9->tcp_cid = VAR_3;
  FUNC_6(VAR_8, VAR_9);
  return VAR_0;
 }

 VAR_11 = FUNC_4(VAR_8, VAR_9);
 return VAR_11;
}
