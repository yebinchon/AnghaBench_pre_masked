
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
struct parse_data {int (* parser ) (struct parse_data const*,struct wpa_ssid*,int,char const*) ;int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 struct parse_data* VAR_2 ;
 int FUNC_1 (struct parse_data const*,struct wpa_ssid*,int,char const*) ;
 int FUNC_2 (int ,char*,int,char const*,...) ;

int FUNC_3(struct wpa_ssid *VAR_3, const char *VAR_4, const char *VAR_5,
     int VAR_6)
{
 size_t VAR_7;
 int VAR_8 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return -1;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  const struct parse_data *VAR_9 = &VAR_2[VAR_7];
  if (FUNC_0(VAR_4, VAR_9->name) != 0)
   continue;

  VAR_8 = VAR_9->parser(VAR_9, VAR_3, VAR_6, VAR_5);
  if (VAR_8 < 0) {
   if (VAR_6) {
    FUNC_2(VAR_0, "Line %d: failed to "
        "parse %s '%s'.", VAR_6, VAR_4, VAR_5);
   }
   VAR_8 = -1;
  }
  break;
 }
 if (VAR_7 == VAR_1) {
  if (VAR_6) {
   FUNC_2(VAR_0, "Line %d: unknown network field "
       "'%s'.", VAR_6, VAR_4);
  }
  VAR_8 = -1;
 }

 return VAR_8;
}
