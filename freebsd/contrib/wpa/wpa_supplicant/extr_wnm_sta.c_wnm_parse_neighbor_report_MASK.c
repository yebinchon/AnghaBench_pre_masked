
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct neighbor_report {int regulatory_class; int channel_number; int phy_type; int freq; int bssid_info; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct wpa_supplicant*,int,int) ;
 int FUNC_3 (struct neighbor_report*,int,int,int const*) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_2,
          const u8 *VAR_3, u8 VAR_4,
          struct neighbor_report *VAR_5)
{
 u8 VAR_6 = VAR_4;

 if (VAR_6 < 13) {
  FUNC_4(VAR_1, "WNM: Too short neighbor report");
  return;
 }

 FUNC_1(VAR_5->bssid, VAR_3, VAR_0);
 VAR_5->bssid_info = FUNC_0(VAR_3 + VAR_0);
 VAR_5->regulatory_class = *(VAR_3 + 10);
 VAR_5->channel_number = *(VAR_3 + 11);
 VAR_5->phy_type = *(VAR_3 + 12);

 VAR_3 += 13;
 VAR_6 -= 13;

 while (VAR_6 >= 2) {
  u8 VAR_7, VAR_8;

  VAR_7 = *VAR_3++;
  VAR_8 = *VAR_3++;
  FUNC_4(VAR_1, "WNM: Subelement id=%u len=%u", VAR_7, VAR_8);
  VAR_6 -= 2;
  if (VAR_8 > VAR_6) {
   FUNC_4(VAR_1,
       "WNM: Truncated neighbor report subelement");
   break;
  }
  FUNC_3(VAR_5, VAR_7, VAR_8, VAR_3);
  VAR_6 -= VAR_8;
  VAR_3 += VAR_8;
 }

 VAR_5->freq = FUNC_2(VAR_2, VAR_5->regulatory_class,
         VAR_5->channel_number);
}
