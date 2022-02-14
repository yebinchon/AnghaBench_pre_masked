
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct vfpf_qid_tlv {scalar_t__ qid; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ vfdev_info; } ;
struct ecore_iov_vf_mbx {int req_virt; } ;
struct ecore_vf_info {int relative_vf_id; TYPE_2__ acquire; struct ecore_iov_vf_mbx vf_mbx; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct vfpf_qid_tlv* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct ecore_hwfn *VAR_8,
          struct ecore_vf_info *VAR_9, bool VAR_10)
{
 struct ecore_iov_vf_mbx *VAR_11 = &VAR_9->vf_mbx;
 struct vfpf_qid_tlv *VAR_12;


 if (!(VAR_9->acquire.vfdev_info.capabilities &
       VAR_7)) {
  if (VAR_10)
   return VAR_2;
  else
   return VAR_1;
 }

 VAR_12 = (struct vfpf_qid_tlv *)
      FUNC_1(VAR_8, VAR_11->req_virt,
            VAR_0);
 if (VAR_12 == VAR_6) {
  FUNC_0(VAR_8, VAR_4,
      "VF[%2x]: Failed to provide qid\n",
      VAR_9->relative_vf_id);

  return VAR_3;
 }

 if (VAR_12->qid >= VAR_5) {
  FUNC_0(VAR_8, VAR_4,
      "VF[%02x]: Provided qid out-of-bounds %02x\n",
      VAR_9->relative_vf_id, VAR_12->qid);
  return VAR_3;
 }

 return VAR_12->qid;
}
