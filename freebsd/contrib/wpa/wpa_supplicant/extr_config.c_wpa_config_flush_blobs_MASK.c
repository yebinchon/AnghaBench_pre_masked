
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {struct wpa_config_blob* next; } ;
struct wpa_config {struct wpa_config_blob* blobs; } ;


 int FUNC_0 (struct wpa_config_blob*) ;

void FUNC_1(struct wpa_config *VAR_0)
{

 struct wpa_config_blob *VAR_1, *VAR_2;

 VAR_1 = VAR_0->blobs;
 VAR_0->blobs = ((void*)0);
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

}
