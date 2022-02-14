
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
struct parse_data {char* (* writer ) (struct parse_data const*,struct wpa_ssid*) ;int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 struct parse_data* VAR_2 ;
 char* FUNC_3 (struct parse_data const*,struct wpa_ssid*) ;
 int FUNC_4 (int ,char*,char const*) ;

char * FUNC_5(struct wpa_ssid *VAR_3, const char *VAR_4)
{
 size_t VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  const struct parse_data *VAR_6 = &VAR_2[VAR_5];
  if (FUNC_2(VAR_4, VAR_6->name) == 0) {
   char *VAR_7 = VAR_6->writer(VAR_6, VAR_3);

   if (VAR_7 && FUNC_0(VAR_7)) {
    FUNC_4(VAR_0,
        "Found newline in value for %s; not returning it",
        VAR_4);
    FUNC_1(VAR_7);
    VAR_7 = ((void*)0);
   }

   return VAR_7;
  }
 }

 return ((void*)0);
}
