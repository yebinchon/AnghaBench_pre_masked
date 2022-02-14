
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int references; } ;
struct wpa_authenticator {struct wpa_group* group; } ;



__attribute__((used)) static void FUNC_0(struct wpa_authenticator *VAR_0,
     struct wpa_group *VAR_1)
{

 if (VAR_0->group == VAR_1)
  return;

 VAR_1->references++;
}
