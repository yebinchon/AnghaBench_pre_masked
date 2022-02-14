
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_tunn_update_udp_port {int port; scalar_t__ b_update_port; } ;
struct ecore_tunn_update_type {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,struct ecore_tunn_update_type*) ;

__attribute__((used)) static void
FUNC_2(u8 *VAR_0,
         struct ecore_tunn_update_type *VAR_1,
         u8 *VAR_2, __le16 *VAR_3,
         struct ecore_tunn_update_udp_port *VAR_4)
{
 FUNC_1(VAR_0, VAR_1);
 if (VAR_4->b_update_port) {
  *VAR_2 = 1;
  *VAR_3 = FUNC_0(VAR_4->port);
 }
}
