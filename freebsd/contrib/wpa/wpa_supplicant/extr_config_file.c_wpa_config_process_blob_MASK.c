
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {int dummy; } ;
struct wpa_config {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 struct wpa_config_blob* FUNC_1 (int *,int*,char*) ;
 int FUNC_2 (struct wpa_config*,struct wpa_config_blob*) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct wpa_config *VAR_1, FILE *VAR_2,
       int *VAR_3, char *VAR_4)
{
 char *VAR_5;
 struct wpa_config_blob *VAR_6;

 VAR_5 = FUNC_0(VAR_4, '=');
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_0, "Line %d: no blob name terminator",
      *VAR_3);
  return -1;
 }
 *VAR_5 = '\0';

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "Line %d: failed to read blob %s",
      *VAR_3, VAR_4);
  return -1;
 }
 FUNC_2(VAR_1, VAR_6);
 return 0;
}
