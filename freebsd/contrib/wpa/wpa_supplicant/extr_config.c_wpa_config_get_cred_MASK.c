
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_cred {int id; struct wpa_cred* next; } ;
struct wpa_config {struct wpa_cred* cred; } ;



struct wpa_cred * FUNC_0(struct wpa_config *VAR_0, int VAR_1)
{
 struct wpa_cred *VAR_2;

 VAR_2 = VAR_0->cred;
 while (VAR_2) {
  if (VAR_1 == VAR_2->id)
   break;
  VAR_2 = VAR_2->next;
 }

 return VAR_2;
}
