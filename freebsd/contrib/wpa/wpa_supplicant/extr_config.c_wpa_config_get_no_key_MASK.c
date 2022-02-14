
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
struct parse_data {char* (* writer ) (struct parse_data const*,struct wpa_ssid*) ;scalar_t__ key_data; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 char* FUNC_2 (char*) ;
 struct parse_data* VAR_2 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct parse_data const*,struct wpa_ssid*) ;
 int FUNC_5 (int ,char*) ;

char * FUNC_6(struct wpa_ssid *VAR_3, const char *VAR_4)
{
 size_t VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  const struct parse_data *VAR_6 = &VAR_2[VAR_5];
  if (FUNC_1(VAR_4, VAR_6->name) == 0) {
   char *VAR_7 = VAR_6->writer(VAR_6, VAR_3);
   if (VAR_6->key_data) {
    if (VAR_7 && VAR_7[0]) {
     FUNC_5(VAR_0, "Do not allow "
         "key_data field to be "
         "exposed");
     FUNC_3(VAR_7);
     return FUNC_2("*");
    }

    FUNC_0(VAR_7);
    return ((void*)0);
   }
   return VAR_7;
  }
 }

 return ((void*)0);
}
