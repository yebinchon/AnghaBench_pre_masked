
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_authenticator {scalar_t__ pmksa; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct wpa_authenticator *VAR_0)
{
 if (VAR_0 && VAR_0->pmksa)
  FUNC_0(VAR_0->pmksa);
}
