
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_config_blob {size_t len; int * data; int * name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *,size_t) ;
 int * FUNC_1 (size_t) ;
 char* FUNC_2 (char*,char) ;
 int * FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 struct wpa_config_blob* FUNC_5 (int) ;
 int FUNC_6 (struct wpa_config_blob*) ;
 int FUNC_7 (int ,struct wpa_config_blob*) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(struct wpa_supplicant *VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;
 struct wpa_config_blob *VAR_4;
 size_t VAR_5;

 VAR_2 = FUNC_2(VAR_2, ' ');
 if (VAR_2 == ((void*)0))
  return -1;
 *VAR_2++ = '\0';
 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5 & 1)
  return -1;

 FUNC_8(VAR_0, "CTRL: Set blob '%s'", VAR_3);
 VAR_4 = FUNC_5(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_4->name = FUNC_3(VAR_3);
 VAR_4->data = FUNC_1(VAR_5 / 2);
 if (VAR_4->name == ((void*)0) || VAR_4->data == ((void*)0)) {
  FUNC_6(VAR_4);
  return -1;
 }

 if (FUNC_0(VAR_2, VAR_4->data, VAR_5 / 2) < 0) {
  FUNC_8(VAR_0, "CTRL: Invalid blob hex data");
  FUNC_6(VAR_4);
  return -1;
 }
 VAR_4->len = VAR_5 / 2;

 FUNC_7(VAR_1->conf, VAR_4);

 return 0;
}
