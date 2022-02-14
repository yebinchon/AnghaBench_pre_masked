
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int wait_channel_update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct hostapd_iface *VAR_4 = VAR_2;

 if (!VAR_4->wait_channel_update) {
  FUNC_1(VAR_1, "Channel list update timeout, but interface was not waiting for it");
  return;
 }





 FUNC_1(VAR_0, "Channel list update timeout - try to continue anyway");
 FUNC_0(VAR_4);
}
