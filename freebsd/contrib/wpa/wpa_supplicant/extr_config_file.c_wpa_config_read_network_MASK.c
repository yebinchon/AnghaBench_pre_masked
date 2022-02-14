
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int id; int psk_list; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 struct wpa_ssid* FUNC_3 (int) ;
 int FUNC_4 (struct wpa_ssid*) ;
 scalar_t__ FUNC_5 (char*,int,int *,int*,char**) ;
 scalar_t__ FUNC_6 (struct wpa_ssid*,char*,char*,int) ;
 int FUNC_7 (struct wpa_ssid*) ;
 scalar_t__ FUNC_8 (struct wpa_ssid*,int) ;
 int FUNC_9 (int ,char*,int,...) ;

__attribute__((used)) static struct wpa_ssid * FUNC_10(FILE *VAR_2, int *VAR_3, int VAR_4)
{
 struct wpa_ssid *VAR_5;
 int VAR_6 = 0, VAR_7 = 0;
 char VAR_8[2000], *VAR_9, *VAR_10;

 FUNC_9(VAR_1, "Line: %d - start of a new network block",
     *VAR_3);
 VAR_5 = FUNC_3(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_5->psk_list);
 VAR_5->id = VAR_4;

 FUNC_7(VAR_5);

 while (FUNC_5(VAR_8, sizeof(VAR_8), VAR_2, VAR_3, &VAR_9)) {
  if (FUNC_2(VAR_9, "}") == 0) {
   VAR_7 = 1;
   break;
  }

  VAR_10 = FUNC_1(VAR_9, '=');
  if (VAR_10 == ((void*)0)) {
   FUNC_9(VAR_0, "Line %d: Invalid SSID line "
       "'%s'.", *VAR_3, VAR_9);
   VAR_6++;
   continue;
  }

  *VAR_10++ = '\0';
  if (*VAR_10 == '"') {
   if (FUNC_1(VAR_10 + 1, '"') == ((void*)0)) {
    FUNC_9(VAR_0, "Line %d: invalid "
        "quotation '%s'.", *VAR_3, VAR_10);
    VAR_6++;
    continue;
   }
  }

  if (FUNC_6(VAR_5, VAR_9, VAR_10, *VAR_3) < 0)
   VAR_6++;
 }

 if (!VAR_7) {
  FUNC_9(VAR_0, "Line %d: network block was not "
      "terminated properly.", *VAR_3);
  VAR_6++;
 }

 VAR_6 += FUNC_8(VAR_5, *VAR_3);

 if (VAR_6) {
  FUNC_4(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
