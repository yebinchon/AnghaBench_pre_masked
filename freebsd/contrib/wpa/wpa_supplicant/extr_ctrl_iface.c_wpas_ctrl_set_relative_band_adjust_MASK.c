
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relative_adjust_rssi; int relative_adjust_band; } ;
struct wpa_supplicant {TYPE_1__ srp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_2,
           const char *VAR_3)
{
 char *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(VAR_3, ':');
 if (!VAR_4)
  return -1;
 VAR_4++;
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < -100 || VAR_5 > 100)
  return -1;

 if (FUNC_2(VAR_3, "2G", 2) == 0)
  VAR_2->srp.relative_adjust_band = VAR_0;
 else if (FUNC_2(VAR_3, "5G", 2) == 0)
  VAR_2->srp.relative_adjust_band = VAR_1;
 else
  return -1;

 VAR_2->srp.relative_adjust_rssi = VAR_5;

 return 0;
}
