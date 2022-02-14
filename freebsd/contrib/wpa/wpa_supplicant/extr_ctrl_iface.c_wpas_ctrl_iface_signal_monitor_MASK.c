
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ bgscan_priv; scalar_t__ bgscan; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct wpa_supplicant*,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_1,
       const char *VAR_2)
{
 const char *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;

 if (VAR_1->bgscan && VAR_1->bgscan_priv) {
  FUNC_3(VAR_0,
      "Reject SIGNAL_MONITOR command - bgscan is active");
  return -1;
 }
 VAR_3 = FUNC_1(VAR_2, "THRESHOLD=");
 if (VAR_3)
  VAR_4 = FUNC_0(VAR_3 + 10);
 VAR_3 = FUNC_1(VAR_2, "HYSTERESIS=");
 if (VAR_3)
  VAR_5 = FUNC_0(VAR_3 + 11);
 return FUNC_2(VAR_1, VAR_4, VAR_5);
}
