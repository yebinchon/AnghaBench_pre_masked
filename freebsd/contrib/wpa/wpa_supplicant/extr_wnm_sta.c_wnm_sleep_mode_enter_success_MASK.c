
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,int ,int const*,int,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int ,int ,int *,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_3,
      const u8 *VAR_4,
      const u8 *VAR_5)
{
 FUNC_1(VAR_3, VAR_1,
    VAR_3->bssid, ((void*)0), ((void*)0));



 if (VAR_4 && VAR_5 &&
     VAR_5 - VAR_4 >= 0) {
  u16 VAR_6;
  VAR_6 = (VAR_5 + VAR_5[1] + 2) -
   VAR_4;
  FUNC_2(VAR_0, "TFS Resp IE(s) found");

  if (FUNC_0(VAR_3, VAR_3->bssid,
         VAR_4,
         VAR_6,
         VAR_2))
   FUNC_2(VAR_0, "WNM: Fail to set TFS Resp IE");
 }
}
