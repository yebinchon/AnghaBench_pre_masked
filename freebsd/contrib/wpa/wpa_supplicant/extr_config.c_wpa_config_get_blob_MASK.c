
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct wpa_config_blob {struct wpa_config_blob const* next; int name; } const wpa_config_blob ;
struct wpa_config {struct wpa_config_blob const* blobs; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

const struct wpa_config_blob * FUNC_1(struct wpa_config *VAR_0,
         const char *VAR_1)
{
 struct wpa_config_blob *VAR_2 = VAR_0->blobs;

 while (VAR_2) {
  if (FUNC_0(VAR_2->name, VAR_1) == 0)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }
 return ((void*)0);
}
