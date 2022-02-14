
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_cred {int id; struct wpa_cred* next; } ;
struct wpa_config {struct wpa_cred* cred; } ;


 int FUNC_0 (struct wpa_cred*) ;

int FUNC_1(struct wpa_config *VAR_0, int VAR_1)
{
 struct wpa_cred *VAR_2, *VAR_3 = ((void*)0);

 VAR_2 = VAR_0->cred;
 while (VAR_2) {
  if (VAR_1 == VAR_2->id)
   break;
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }

 if (VAR_2 == ((void*)0))
  return -1;

 if (VAR_3)
  VAR_3->next = VAR_2->next;
 else
  VAR_0->cred = VAR_2->next;

 FUNC_0(VAR_2);
 return 0;
}
