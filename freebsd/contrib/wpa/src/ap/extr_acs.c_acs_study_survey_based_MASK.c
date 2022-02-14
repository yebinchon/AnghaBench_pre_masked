
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int chans_surveyed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 int FUNC_1 (struct hostapd_iface*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_iface *VAR_2)
{
 FUNC_2(VAR_0, "ACS: Trying survey-based ACS");

 if (!VAR_2->chans_surveyed) {
  FUNC_2(VAR_1, "ACS: Unable to collect survey data");
  return -1;
 }

 if (!FUNC_1(VAR_2)) {
  FUNC_2(VAR_1, "ACS: Surveys have insufficient data");
  return -1;
 }

 FUNC_0(VAR_2);
 return 0;
}
