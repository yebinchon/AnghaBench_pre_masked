
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vfpf_vport_update_activate_tlv {int active_tx; int update_tx; int active_rx; int update_rx; } ;
struct ecore_sp_vport_update_params {int vport_active_tx_flg; int update_vport_active_tx_flg; int vport_active_rx_flg; int update_vport_active_rx_flg; } ;
struct ecore_iov_vf_mbx {int req_virt; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ecore_hwfn*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ecore_hwfn *VAR_2,
         struct ecore_sp_vport_update_params *VAR_3,
         struct ecore_iov_vf_mbx *VAR_4, u16 *VAR_5)
{
 struct vfpf_vport_update_activate_tlv *VAR_6;
 u16 VAR_7 = VAR_0;

 VAR_6 = (struct vfpf_vport_update_activate_tlv *)
      FUNC_0(VAR_2, VAR_4->req_virt,
            VAR_7);
 if (!VAR_6)
  return;

 VAR_3->update_vport_active_rx_flg = VAR_6->update_rx;
 VAR_3->vport_active_rx_flg = VAR_6->active_rx;
 VAR_3->update_vport_active_tx_flg = VAR_6->update_tx;
 VAR_3->vport_active_tx_flg = VAR_6->active_tx;
 *VAR_5 |= 1 << VAR_1;
}
