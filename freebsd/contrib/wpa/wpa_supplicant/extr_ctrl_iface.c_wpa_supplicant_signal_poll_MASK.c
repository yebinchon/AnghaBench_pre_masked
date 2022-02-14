
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_signal_info {int current_txrate; scalar_t__ chanwidth; scalar_t__ center_frq1; scalar_t__ center_frq2; scalar_t__ avg_signal; scalar_t__ avg_beacon_signal; int frequency; int current_noise; int current_signal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_signal_info*) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_1, char *VAR_2,
          size_t VAR_3)
{
 struct wpa_signal_info VAR_4;
 int VAR_5;
 char *VAR_6, *VAR_7;

 VAR_5 = FUNC_3(VAR_1, &VAR_4);
 if (VAR_5)
  return -1;

 VAR_6 = VAR_2;
 VAR_7 = VAR_2 + VAR_3;

 VAR_5 = FUNC_1(VAR_6, VAR_7 - VAR_6, "RSSI=%d\nLINKSPEED=%d\n"
     "NOISE=%d\nFREQUENCY=%u\n",
     VAR_4.current_signal, VAR_4.current_txrate / 1000,
     VAR_4.current_noise, VAR_4.frequency);
 if (FUNC_2(VAR_7 - VAR_6, VAR_5))
  return -1;
 VAR_6 += VAR_5;

 if (VAR_4.chanwidth != VAR_0) {
  VAR_5 = FUNC_1(VAR_6, VAR_7 - VAR_6, "WIDTH=%s\n",
      FUNC_0(VAR_4.chanwidth));
  if (FUNC_2(VAR_7 - VAR_6, VAR_5))
   return -1;
  VAR_6 += VAR_5;
 }

 if (VAR_4.center_frq1 > 0) {
  VAR_5 = FUNC_1(VAR_6, VAR_7 - VAR_6, "CENTER_FRQ1=%d\n",
      VAR_4.center_frq1);
  if (FUNC_2(VAR_7 - VAR_6, VAR_5))
   return -1;
  VAR_6 += VAR_5;
 }

 if (VAR_4.center_frq2 > 0) {
  VAR_5 = FUNC_1(VAR_6, VAR_7 - VAR_6, "CENTER_FRQ2=%d\n",
      VAR_4.center_frq2);
  if (FUNC_2(VAR_7 - VAR_6, VAR_5))
   return -1;
  VAR_6 += VAR_5;
 }

 if (VAR_4.avg_signal) {
  VAR_5 = FUNC_1(VAR_6, VAR_7 - VAR_6,
      "AVG_RSSI=%d\n", VAR_4.avg_signal);
  if (FUNC_2(VAR_7 - VAR_6, VAR_5))
   return -1;
  VAR_6 += VAR_5;
 }

 if (VAR_4.avg_beacon_signal) {
  VAR_5 = FUNC_1(VAR_6, VAR_7 - VAR_6,
      "AVG_BEACON_RSSI=%d\n", VAR_4.avg_beacon_signal);
  if (FUNC_2(VAR_7 - VAR_6, VAR_5))
   return -1;
  VAR_6 += VAR_5;
 }

 return VAR_6 - VAR_2;
}
