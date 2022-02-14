
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {struct wpa_config_blob* next; int name; } ;
struct wpa_config {struct wpa_config_blob* blobs; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct wpa_config_blob*) ;

int FUNC_2(struct wpa_config *VAR_0, const char *VAR_1)
{
 struct wpa_config_blob *VAR_2 = VAR_0->blobs, *VAR_3 = ((void*)0);

 while (VAR_2) {
  if (FUNC_0(VAR_2->name, VAR_1) == 0) {
   if (VAR_3)
    VAR_3->next = VAR_2->next;
   else
    VAR_0->blobs = VAR_2->next;
   FUNC_1(VAR_2);
   return 0;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }

 return -1;
}
