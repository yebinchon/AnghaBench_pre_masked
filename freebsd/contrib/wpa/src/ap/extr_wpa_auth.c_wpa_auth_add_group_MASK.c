
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {struct wpa_group* next; } ;
struct wpa_authenticator {TYPE_1__* group; } ;
struct TYPE_2__ {struct wpa_group* next; } ;


 int VAR_0 ;
 struct wpa_group* FUNC_0 (struct wpa_authenticator*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static struct wpa_group *
FUNC_2(struct wpa_authenticator *VAR_1, int VAR_2)
{
 struct wpa_group *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_1->group == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_0, "WPA: Add group state machine for VLAN-ID %d",
     VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->next = VAR_1->group->next;
 VAR_1->group->next = VAR_3;

 return VAR_3;
}
