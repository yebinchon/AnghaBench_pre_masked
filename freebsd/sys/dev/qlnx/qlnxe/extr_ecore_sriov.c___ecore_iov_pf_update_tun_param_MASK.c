
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vfpf_update_tunn_param_tlv {int tun_mode_update_mask; int tunn_mode; } ;
struct ecore_tunn_update_type {int b_update_mode; int b_mode_enabled; int tun_cls; } ;
typedef enum ecore_tunn_mode { ____Placeholder_ecore_tunn_mode } ecore_tunn_mode ;



__attribute__((used)) static void
FUNC_0(struct vfpf_update_tunn_param_tlv *VAR_0,
    struct ecore_tunn_update_type *VAR_1,
    enum ecore_tunn_mode VAR_2, u8 VAR_3)
{
 if (VAR_0->tun_mode_update_mask & (1 << VAR_2)) {
  VAR_1->b_update_mode = 1;

  if (VAR_0->tunn_mode & (1 << VAR_2))
   VAR_1->b_mode_enabled = 1;
 }

 VAR_1->tun_cls = VAR_3;
}
