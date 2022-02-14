
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {struct wpa_group* next; scalar_t__ changed; int GTKReKey; } ;
struct TYPE_2__ {scalar_t__ wpa_group_rekey; } ;
struct wpa_authenticator {TYPE_1__ conf; struct wpa_group* group; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,void (*) (void*,void*),struct wpa_authenticator*,int *) ;
 int FUNC_1 (struct wpa_authenticator*,int *,int ,char*) ;
 int FUNC_2 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_3 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_4 (struct wpa_authenticator*,struct wpa_group*) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, void *VAR_4)
{
 struct wpa_authenticator *VAR_5 = VAR_3;
 struct wpa_group *VAR_6, *VAR_7;

 FUNC_1(VAR_5, ((void*)0), VAR_1, "rekeying GTK");
 VAR_6 = VAR_5->group;
 while (VAR_6) {
  FUNC_2(VAR_5, VAR_6);

  VAR_6->GTKReKey = VAR_2;
  do {
   VAR_6->changed = VAR_0;
   FUNC_4(VAR_5, VAR_6);
  } while (VAR_6->changed);

  VAR_7 = VAR_6->next;
  FUNC_3(VAR_5, VAR_6);
  VAR_6 = VAR_7;
 }

 if (VAR_5->conf.wpa_group_rekey) {
  FUNC_0(VAR_5->conf.wpa_group_rekey,
           0, FUNC_5, VAR_5, ((void*)0));
 }
}
