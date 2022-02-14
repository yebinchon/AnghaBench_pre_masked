
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_ssid_value {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 char* FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,struct wpa_ssid_value*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid_value*,int,int,int ,struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_2,
          char *VAR_3)
{
 struct wpa_ssid_value VAR_4, *VAR_5 = ((void*)0);
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 char *VAR_9;

 VAR_9 = FUNC_1(VAR_3, "ssid=");
 if (VAR_9) {
  if (FUNC_2(VAR_9 + 5, &VAR_4)) {
   FUNC_3(VAR_0,
       "CTRL: Send Neighbor Report: bad SSID");
   return -1;
  }

  VAR_5 = &VAR_4;





  VAR_3 = FUNC_0(VAR_9 + 6, VAR_9[5] == '"' ? '"' : ' ');
  if (VAR_3)
   VAR_3++;

 }

 if (VAR_3 && FUNC_1(VAR_3, "lci"))
  VAR_7 = 1;

 if (VAR_3 && FUNC_1(VAR_3, "civic"))
  VAR_8 = 1;

 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_7, VAR_8,
       VAR_1,
       VAR_2);

 return VAR_6;
}
