
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_cred {int id; struct wpa_cred* next; int sim_num; } ;
struct wpa_config {struct wpa_cred* cred; } ;


 int VAR_0 ;
 struct wpa_cred* FUNC_0 (int) ;

struct wpa_cred * FUNC_1(struct wpa_config *VAR_1)
{
 int VAR_2;
 struct wpa_cred *VAR_3, *VAR_4 = ((void*)0);

 VAR_2 = -1;
 VAR_3 = VAR_1->cred;
 while (VAR_3) {
  if (VAR_3->id > VAR_2)
   VAR_2 = VAR_3->id;
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }
 VAR_2++;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->id = VAR_2;
 VAR_3->sim_num = VAR_0;
 if (VAR_4)
  VAR_4->next = VAR_3;
 else
  VAR_1->cred = VAR_3;

 return VAR_3;
}
