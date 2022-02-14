
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {struct wpa_config_blob* next; int name; } ;
struct wpa_config {struct wpa_config_blob* blobs; } ;


 int FUNC_0 (struct wpa_config*,int ) ;

void FUNC_1(struct wpa_config *VAR_0,
    struct wpa_config_blob *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->name);
 VAR_1->next = VAR_0->blobs;
 VAR_0->blobs = VAR_1;
}
