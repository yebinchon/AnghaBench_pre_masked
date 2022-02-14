
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dhcp_sock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct hostapd_data *VAR_0)
{
 if (VAR_0->dhcp_sock >= 0) {
  FUNC_1(VAR_0->dhcp_sock);
  FUNC_0(VAR_0->dhcp_sock);
  VAR_0->dhcp_sock = -1;
 }
}
