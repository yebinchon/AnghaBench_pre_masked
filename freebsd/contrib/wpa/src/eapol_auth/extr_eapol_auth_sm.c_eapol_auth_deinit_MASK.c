
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_authenticator {struct eapol_authenticator* default_wep_key; int conf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct eapol_authenticator*) ;

void FUNC_2(struct eapol_authenticator *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(&VAR_0->conf);
 FUNC_1(VAR_0->default_wep_key);
 FUNC_1(VAR_0);
}
