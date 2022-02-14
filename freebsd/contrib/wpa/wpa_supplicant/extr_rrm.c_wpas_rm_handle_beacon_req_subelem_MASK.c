
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct beacon_rep_data {int ssid_len; int report_detail; int last_indication; int eids; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_4,
          struct beacon_rep_data *VAR_5,
          u8 VAR_6, u8 VAR_7, const u8 *VAR_8)
{
 u8 VAR_9, VAR_10;

 switch (VAR_6) {
 case 128:
  if (!VAR_7) {
   FUNC_3(VAR_2,
       "SSID subelement with zero length - wildcard SSID");
   break;
  }

  if (VAR_7 > VAR_3) {
   FUNC_3(VAR_2,
       "Invalid SSID subelement length: %u", VAR_7);
   return -1;
  }

  VAR_5->ssid_len = VAR_7;
  FUNC_2(VAR_5->ssid, VAR_8, VAR_5->ssid_len);
  break;
 case 131:
  if (VAR_7 != 2) {
   FUNC_3(VAR_2,
       "Invalid reporting information subelement length: %u",
       VAR_7);
   return -1;
  }

  VAR_9 = VAR_8[0];
  if (VAR_9 != 0) {
   FUNC_3(VAR_2,
       "reporting information=%u is not supported",
       VAR_9);
   return 0;
  }
  break;
 case 132:
  if (VAR_7 != 1) {
   FUNC_3(VAR_2,
       "Invalid reporting detail subelement length: %u",
       VAR_7);
   return -1;
  }

  VAR_5->report_detail = VAR_8[0];
  if (VAR_5->report_detail >
      VAR_0) {
   FUNC_3(VAR_2, "Invalid reporting detail: %u",
       VAR_8[0]);
   return -1;
  }

  break;
 case 129:
  if (VAR_5->report_detail !=
      VAR_1) {
   FUNC_3(VAR_2,
       "Beacon request: request subelement is present but report detail is %u",
       VAR_5->report_detail);
   return -1;
  }

  if (!VAR_7) {
   FUNC_3(VAR_2,
       "Invalid request subelement length: %u",
       VAR_7);
   return -1;
  }

  if (VAR_5->eids) {
   FUNC_3(VAR_2,
       "Beacon Request: Request subelement appears more than once");
   return -1;
  }

  VAR_5->eids = FUNC_0(255);
  if (!VAR_5->eids) {
   FUNC_3(VAR_2, "Failed to allocate EIDs bitmap");
   return -1;
  }

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
   FUNC_1(VAR_5->eids, VAR_8[VAR_10]);
  break;
 case 133:

  break;
 case 130:
  if (VAR_7 != 1) {
   FUNC_3(VAR_2,
       "Beacon request: Invalid last indication request subelement length: %u",
       VAR_7);
   return -1;
  }

  VAR_5->last_indication = VAR_8[0];
  break;
 default:
  FUNC_3(VAR_2,
      "Beacon request: Unknown subelement id %u", VAR_6);
  break;
 }

 return 1;
}
