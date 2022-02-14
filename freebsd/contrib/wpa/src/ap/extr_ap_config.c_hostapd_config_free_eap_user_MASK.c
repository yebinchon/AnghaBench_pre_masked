
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_eap_user {int salt_len; int salt; int password_len; int password; struct hostapd_eap_user* identity; int accept_attr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hostapd_eap_user*) ;

void FUNC_3(struct hostapd_eap_user *VAR_0)
{
 FUNC_1(VAR_0->accept_attr);
 FUNC_2(VAR_0->identity);
 FUNC_0(VAR_0->password, VAR_0->password_len);
 FUNC_0(VAR_0->salt, VAR_0->salt_len);
 FUNC_2(VAR_0);
}
