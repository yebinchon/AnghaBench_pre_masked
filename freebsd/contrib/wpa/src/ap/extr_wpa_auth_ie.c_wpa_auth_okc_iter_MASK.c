
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_authenticator {int pmksa; } ;
struct wpa_auth_okc_iter_data {scalar_t__ pmksa; int pmkid; int spa; int aa; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_authenticator *VAR_0, void *VAR_1)
{
 struct wpa_auth_okc_iter_data *VAR_2 = VAR_1;
 VAR_2->pmksa = FUNC_0(VAR_0->pmksa, VAR_2->aa, VAR_2->spa,
       VAR_2->pmkid);
 if (VAR_2->pmksa)
  return 1;
 return 0;
}
