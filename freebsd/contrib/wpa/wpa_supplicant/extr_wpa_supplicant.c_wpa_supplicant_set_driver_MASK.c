
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,int) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_2,
         const char *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 const char *VAR_6, *VAR_7 = VAR_3;

 if (VAR_2 == ((void*)0))
  return -1;

 if (VAR_1[0] == ((void*)0)) {
  FUNC_4(VAR_2, VAR_0, "No driver interfaces build into "
   "wpa_supplicant");
  return -1;
 }

 if (VAR_3 == ((void*)0)) {

  return FUNC_3(VAR_2, 0);
 }

 do {
  VAR_6 = FUNC_0(VAR_7, ',');
  if (VAR_6)
   VAR_5 = VAR_6 - VAR_7;
  else
   VAR_5 = FUNC_1(VAR_7);

  for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++) {
   if (FUNC_1(VAR_1[VAR_4]->name) == VAR_5 &&
       FUNC_2(VAR_7, VAR_1[VAR_4]->name, VAR_5) ==
       0) {

    if (FUNC_3(VAR_2, VAR_4) == 0)
     return 0;
   }
  }

  VAR_7 = VAR_6 + 1;
 } while (VAR_6);

 FUNC_4(VAR_2, VAR_0, "Unsupported driver '%s'", VAR_3);
 return -1;
}
