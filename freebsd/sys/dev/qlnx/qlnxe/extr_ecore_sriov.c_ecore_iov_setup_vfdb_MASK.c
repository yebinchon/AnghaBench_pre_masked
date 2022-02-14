
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef size_t u8 ;
typedef int u32 ;
struct TYPE_9__ {int size; struct ecore_bulletin_content* p_virt; void* phys; } ;
struct TYPE_7__ {int request_size; int mbx_state; } ;
struct TYPE_8__ {TYPE_2__ sw_mbx; void* reply_phys; union pfvf_tlvs* reply_virt; void* req_phys; union vfpf_tlvs* req_virt; } ;
struct ecore_vf_info {int b_init; size_t relative_vf_id; int abs_vf_id; int opaque_fid; int num_vlan_filters; int num_mac_filters; int concrete_fid; TYPE_4__ bulletin; int state; TYPE_3__ vf_mbx; } ;
struct ecore_pf_iov {struct ecore_vf_info* vfs_array; void* bulletins_phys; struct ecore_bulletin_content* p_bulletins; void* mbx_reply_phys_addr; union pfvf_tlvs* mbx_reply_virt_addr; void* mbx_msg_phys_addr; union vfpf_tlvs* mbx_msg_virt_addr; } ;
struct TYPE_10__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_5__ hw_info; struct ecore_pf_iov* pf_iov_info; TYPE_1__* p_dev; } ;
struct ecore_hw_sriov_info {size_t total_vfs; int first_vf_in_pf; } ;
struct ecore_bulletin_content {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_6__ {struct ecore_hw_sriov_info* p_iov_info; } ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_vf_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ecore_hwfn*,int) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_4)
{
 struct ecore_hw_sriov_info *VAR_5 = VAR_4->p_dev->p_iov_info;
 struct ecore_pf_iov *VAR_6 = VAR_4->pf_iov_info;
 struct ecore_bulletin_content *VAR_7;
 dma_addr_t VAR_8, VAR_9, VAR_10;
 union pfvf_tlvs *VAR_11;
 union vfpf_tlvs *VAR_12;
 u8 VAR_13 = 0;

 FUNC_1(VAR_6->vfs_array, 0, sizeof(VAR_6->vfs_array));

 VAR_12 = VAR_6->mbx_msg_virt_addr;
 VAR_8 = VAR_6->mbx_msg_phys_addr;
 VAR_11 = VAR_6->mbx_reply_virt_addr;
 VAR_9 = VAR_6->mbx_reply_phys_addr;
 VAR_7 = VAR_6->p_bulletins;
 VAR_10 = VAR_6->bulletins_phys;
 if (!VAR_12 || !VAR_11 || !VAR_7) {
  FUNC_0(VAR_4, "ecore_iov_setup_vfdb called without allocating mem first\n");
  return;
 }

 for (VAR_13 = 0; VAR_13 < VAR_5->total_vfs; VAR_13++) {
  struct ecore_vf_info *VAR_14 = &VAR_6->vfs_array[VAR_13];
  u32 VAR_15;

  VAR_14->vf_mbx.req_virt = VAR_12 + VAR_13;
  VAR_14->vf_mbx.req_phys = VAR_8 + VAR_13 * sizeof(union vfpf_tlvs);
  VAR_14->vf_mbx.reply_virt = VAR_11 + VAR_13;
  VAR_14->vf_mbx.reply_phys = VAR_9 + VAR_13 * sizeof(union pfvf_tlvs);





  VAR_14->state = VAR_3;
  VAR_14->b_init = 0;

  VAR_14->bulletin.phys = VAR_13 *
        sizeof(struct ecore_bulletin_content) +
        VAR_10;
  VAR_14->bulletin.p_virt = VAR_7 + VAR_13;
  VAR_14->bulletin.size = sizeof(struct ecore_bulletin_content);

  VAR_14->relative_vf_id = VAR_13;
  VAR_14->abs_vf_id = VAR_13 + VAR_5->first_vf_in_pf;
  VAR_15 = FUNC_2(VAR_4, VAR_14->abs_vf_id);
  VAR_14->concrete_fid = VAR_15;

  VAR_14->opaque_fid = (VAR_4->hw_info.opaque_fid & 0xff) |
     (VAR_14->abs_vf_id << 8);

  VAR_14->num_mac_filters = VAR_0;
  VAR_14->num_vlan_filters = VAR_1;
 }
}
