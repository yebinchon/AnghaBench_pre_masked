
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relative_rssi_set; int relative_rssi; } ;
struct wpa_supplicant {TYPE_1__ srp; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(struct wpa_supplicant *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1, "disable") == 0) {
  VAR_0->srp.relative_rssi_set = 0;
  return 0;
 }

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0 || VAR_2 > 100)
  return -1;
 VAR_0->srp.relative_rssi = VAR_2;
 VAR_0->srp.relative_rssi_set = 1;
 return 0;
}
