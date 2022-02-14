
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_config {size_t num_bss; struct hostapd_bss_config** bss; struct hostapd_bss_config* last_bss; int * driver; } ;
struct hostapd_bss_config {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (struct hostapd_config*,int) ;
 struct hostapd_config* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct hostapd_config*,struct hostapd_bss_config*,char*,char*,int) ;
 int FUNC_6 (struct hostapd_config*) ;
 int FUNC_7 (struct hostapd_bss_config*,int) ;
 char* FUNC_8 (char*,char) ;
 int ** VAR_1 ;
 int FUNC_9 (int ,char*,...) ;

struct hostapd_config * FUNC_10(const char *VAR_2)
{
 struct hostapd_config *VAR_3;
 FILE *VAR_4;
 char VAR_5[4096], *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 size_t VAR_9;

 VAR_4 = FUNC_2(VAR_2, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_9(VAR_0, "Could not open configuration file '%s' "
      "for reading.", VAR_2);
  return ((void*)0);
 }

 VAR_3 = FUNC_4();
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }


 VAR_3->driver = VAR_1[0];
 if (VAR_3->driver == ((void*)0)) {
  FUNC_9(VAR_0, "No driver wrappers registered!");
  FUNC_6(VAR_3);
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_3->last_bss = VAR_3->bss[0];

 while (FUNC_1(VAR_5, sizeof(VAR_5), VAR_4)) {
  struct hostapd_bss_config *VAR_10;

  VAR_10 = VAR_3->last_bss;
  VAR_7++;

  if (VAR_5[0] == '#')
   continue;
  VAR_6 = VAR_5;
  while (*VAR_6 != '\0') {
   if (*VAR_6 == '\n') {
    *VAR_6 = '\0';
    break;
   }
   VAR_6++;
  }
  if (VAR_5[0] == '\0')
   continue;

  VAR_6 = FUNC_8(VAR_5, '=');
  if (VAR_6 == ((void*)0)) {
   FUNC_9(VAR_0, "Line %d: invalid line '%s'",
       VAR_7, VAR_5);
   VAR_8++;
   continue;
  }
  *VAR_6 = '\0';
  VAR_6++;
  VAR_8 += FUNC_5(VAR_3, VAR_10, VAR_5, VAR_6, VAR_7);
 }

 FUNC_0(VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_3->num_bss; VAR_9++)
  FUNC_7(VAR_3->bss[VAR_9], 1);

 if (FUNC_3(VAR_3, 1))
  VAR_8++;


 if (VAR_8) {
  FUNC_9(VAR_0, "%d errors found in configuration file "
      "'%s'", VAR_8, VAR_2);
  FUNC_6(VAR_3);
  VAR_3 = ((void*)0);
 }


 return VAR_3;
}
