
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_qid_tlv {int qid; } ;
struct TYPE_3__ {int capabilities; } ;
struct TYPE_4__ {TYPE_1__ pfdev_info; } ;
struct ecore_vf_iov {int offset; TYPE_2__ acquire_resp; } ;
struct ecore_queue_cid {int qid_usage_idx; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfpf_qid_tlv* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_2,
    struct ecore_queue_cid *VAR_3)
{
 struct ecore_vf_iov *VAR_4 = VAR_2->vf_iov_info;
 struct vfpf_qid_tlv *VAR_5;


 if (!(VAR_4->acquire_resp.pfdev_info.capabilities &
       VAR_1))
  return;

 VAR_5 = FUNC_0(&VAR_4->offset,
      VAR_0, sizeof(*VAR_5));
 VAR_5->qid = VAR_3->qid_usage_idx;
}
