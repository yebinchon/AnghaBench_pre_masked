
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_eap_user {struct hostapd_eap_user* next; } ;


 int FUNC_0 (struct hostapd_eap_user*) ;

void FUNC_1(struct hostapd_eap_user *VAR_0)
{
 struct hostapd_eap_user *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
