
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vfpf_update_tunn_param_tlv {int tun_mode_update_mask; int tunn_mode; } ;
struct ecore_tunn_update_type {int tun_cls; scalar_t__ b_mode_enabled; scalar_t__ b_update_mode; } ;
typedef enum ecore_tunn_clss { ____Placeholder_ecore_tunn_clss } ecore_tunn_clss ;



__attribute__((used)) static void
FUNC_0(struct vfpf_update_tunn_param_tlv *VAR_0,
        struct ecore_tunn_update_type *VAR_1,
        enum ecore_tunn_clss VAR_2, u8 *VAR_3)
{
 if (VAR_1->b_update_mode) {
  VAR_0->tun_mode_update_mask |= (1 << VAR_2);

  if (VAR_1->b_mode_enabled)
   VAR_0->tunn_mode |= (1 << VAR_2);
 }

 *VAR_3 = VAR_1->tun_cls;
}
