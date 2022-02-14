
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int * sock_dhcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 (struct hostapd_data*,int ,int ) ;

int FUNC_3(struct hostapd_data *VAR_4)
{
 VAR_4->sock_dhcp = FUNC_2(VAR_4, VAR_3,
      VAR_0);
 if (VAR_4->sock_dhcp == ((void*)0)) {
  FUNC_1(VAR_1,
      "dhcp_snoop: Failed to initialize L2 packet processing for DHCP packet: %s",
      FUNC_0(VAR_2));
  return -1;
 }

 return 0;
}
