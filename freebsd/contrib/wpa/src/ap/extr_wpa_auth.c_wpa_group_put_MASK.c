
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {scalar_t__ references; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int FUNC_0 (struct wpa_authenticator*,struct wpa_group*) ;

__attribute__((used)) static void FUNC_1(struct wpa_authenticator *VAR_0,
     struct wpa_group *VAR_1)
{

 if (VAR_0->group == VAR_1)
  return;

 VAR_1->references--;
 if (VAR_1->references)
  return;
 FUNC_0(VAR_0, VAR_1);
}
