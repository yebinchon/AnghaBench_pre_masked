
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {int dummy; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct wpa_supplicant*,int,int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,char*,int) ;
 int FUNC_4 (struct wpa_supplicant*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int const*,int) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(struct wpa_supplicant *VAR_6,
         const u8 *VAR_7, const u8 *VAR_8,
         int VAR_9)
{
 const u8 *VAR_10, *VAR_11, *VAR_12;
 u8 VAR_13, VAR_14;

 VAR_10 = VAR_8;
 VAR_11 = VAR_8 + VAR_9;

 while (VAR_11 - VAR_10 > 1) {
  VAR_13 = *VAR_10++;
  VAR_14 = *VAR_10++;
  FUNC_8(VAR_3, "WNM: WFA subelement %u len %u",
      VAR_13, VAR_14);
  if (VAR_14 > VAR_11 - VAR_10) {
   FUNC_8(VAR_3, "WNM: Not enough room for "
       "subelement");
   break;
  }
  VAR_12 = VAR_10 + VAR_14;
  if (VAR_14 < 4) {
   VAR_10 = VAR_12;
   continue;
  }
  FUNC_8(VAR_3, "WNM: Subelement OUI %06x type %u",
      FUNC_0(VAR_10), VAR_10[3]);
  VAR_10 = VAR_12;
 }
}
