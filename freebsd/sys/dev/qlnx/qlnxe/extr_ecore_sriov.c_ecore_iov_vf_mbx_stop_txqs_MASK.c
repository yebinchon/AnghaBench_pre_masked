
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct vfpf_stop_txqs_tlv {int num_txqs; int tx_qid; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct ecore_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct ecore_vf_info {int relative_vf_id; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {struct vfpf_stop_txqs_tlv stop_txqs; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_vf_info*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_vf_info*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_vf_info*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_7,
           struct ecore_ptt *VAR_8,
           struct ecore_vf_info *VAR_9)
{
 u16 VAR_10 = sizeof(struct pfvf_def_resp_tlv);
 struct ecore_iov_vf_mbx *VAR_11 = &VAR_9->vf_mbx;
 u8 VAR_12 = VAR_4;
 struct vfpf_stop_txqs_tlv *VAR_13;
 u8 VAR_14;
 enum _ecore_status_t VAR_15;





 VAR_13 = &VAR_11->req_virt->stop_txqs;
 if (VAR_13->num_txqs != 1) {
  FUNC_0(VAR_7, VAR_2,
      "Odd; VF[%d] tried stopping multiple Tx queues\n",
      VAR_9->relative_vf_id);
  VAR_12 = VAR_5;
  goto out;
 }


 VAR_14 = FUNC_2(VAR_7, VAR_9, 1);
 if (VAR_14 == VAR_1)
  goto out;

 VAR_15 = FUNC_3(VAR_7, VAR_9, VAR_13->tx_qid,
        VAR_14);
 if (VAR_15 == VAR_3)
  VAR_12 = VAR_6;

out:
 FUNC_1(VAR_7, VAR_8, VAR_9, VAR_0,
          VAR_10, VAR_12);
}
