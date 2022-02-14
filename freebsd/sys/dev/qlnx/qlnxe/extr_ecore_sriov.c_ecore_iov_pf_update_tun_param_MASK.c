
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct vfpf_update_tunn_param_tlv {int dummy; } ;
struct ecore_tunn_update_udp_port {int b_update_port; int port; } ;
struct ecore_tunn_update_type {int dummy; } ;
typedef enum ecore_tunn_mode { ____Placeholder_ecore_tunn_mode } ecore_tunn_mode ;


 int FUNC_0 (struct vfpf_update_tunn_param_tlv*,struct ecore_tunn_update_type*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct vfpf_update_tunn_param_tlv *VAR_0,
         struct ecore_tunn_update_type *VAR_1,
         struct ecore_tunn_update_udp_port *VAR_2,
         enum ecore_tunn_mode VAR_3,
         u8 VAR_4, u8 VAR_5, u16 VAR_6)
{
 if (VAR_5) {
  VAR_2->b_update_port = 1;
  VAR_2->port = VAR_6;
 }

 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
}
