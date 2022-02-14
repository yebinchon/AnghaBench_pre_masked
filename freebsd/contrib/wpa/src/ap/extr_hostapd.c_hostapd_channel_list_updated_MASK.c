
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int wait_channel_update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hostapd_iface*,int *) ;
 int FUNC_1 (struct hostapd_iface*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct hostapd_iface *VAR_3, int VAR_4)
{
 if (!VAR_3->wait_channel_update || VAR_4 != VAR_1)
  return;

 FUNC_2(VAR_0, "Channel list updated - continue setup");
 FUNC_0(VAR_2, VAR_3, ((void*)0));
 FUNC_1(VAR_3);
}
