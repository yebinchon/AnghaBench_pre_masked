
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {int len; int data; struct wpa_config_blob* name; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wpa_config_blob*) ;

void FUNC_2(struct wpa_config_blob *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->name);
  FUNC_0(VAR_0->data, VAR_0->len);
  FUNC_1(VAR_0);
 }
}
