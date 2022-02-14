
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vfpf_update_tunn_param_tlv {int dummy; } ;
struct ecore_tunn_update_udp_port {int port; scalar_t__ b_update_port; } ;
struct ecore_tunn_update_type {int dummy; } ;
typedef enum ecore_tunn_clss { ____Placeholder_ecore_tunn_clss } ecore_tunn_clss ;


 int FUNC_0 (struct vfpf_update_tunn_param_tlv*,struct ecore_tunn_update_type*,int,int*) ;

__attribute__((used)) static void
FUNC_1(struct vfpf_update_tunn_param_tlv *VAR_0,
      struct ecore_tunn_update_type *VAR_1,
      enum ecore_tunn_clss VAR_2, u8 *VAR_3,
      struct ecore_tunn_update_udp_port *VAR_4,
      u8 *VAR_5, u16 *VAR_6)
{
 if (VAR_4->b_update_port) {
  *VAR_5 = 1;
  *VAR_6 = VAR_4->port;
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
