
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_authenticator {int pmksa; } ;


 int FUNC_0 (int ,char*,size_t) ;

int FUNC_1(struct wpa_authenticator *VAR_0, char *VAR_1,
   size_t VAR_2)
{
 if (!VAR_0 || !VAR_0->pmksa)
  return 0;
 return FUNC_0(VAR_0->pmksa, VAR_1, VAR_2);
}
