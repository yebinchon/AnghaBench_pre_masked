
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int p2p_sd_over_ctrl_iface; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int *) ;

DBusMessage * FUNC_2(
 DBusMessage *VAR_0, struct wpa_supplicant *VAR_1)
{
 DBusMessageIter VAR_2;
 int VAR_3 = 0;

 FUNC_1(VAR_0, &VAR_2);
 FUNC_0(&VAR_2, &VAR_3);

 VAR_1->p2p_sd_over_ctrl_iface = VAR_3;

 return ((void*)0);

}
