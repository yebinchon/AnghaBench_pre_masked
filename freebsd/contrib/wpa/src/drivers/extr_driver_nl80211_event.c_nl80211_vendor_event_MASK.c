
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpa_driver_nl80211_data {int first_bss; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct wpa_driver_nl80211_data*,int,int *,size_t) ;
 int * FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 size_t FUNC_4 (struct nlattr*) ;
 int FUNC_5 (int ,char*,int *,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct wpa_driver_nl80211_data *VAR_6,
     struct nlattr **VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11;
 u8 *VAR_12 = ((void*)0);
 size_t VAR_13 = 0;

 if (!VAR_7[VAR_3] ||
     !VAR_7[VAR_4])
  return;

 VAR_8 = FUNC_3(VAR_7[VAR_3]);
 VAR_9 = FUNC_3(VAR_7[VAR_4]);

 if (VAR_7[VAR_5])
  VAR_10 = FUNC_3(VAR_7[VAR_5]);

 FUNC_6(VAR_0, "nl80211: Vendor event: wiphy=%u vendor_id=0x%x subcmd=%u",
     VAR_10, VAR_8, VAR_9);

 if (VAR_7[VAR_2]) {
  VAR_12 = FUNC_2(VAR_7[VAR_2]);
  VAR_13 = FUNC_4(VAR_7[VAR_2]);
  FUNC_5(VAR_1, "nl80211: Vendor data", VAR_12, VAR_13);
 }

 VAR_11 = FUNC_0(VAR_6->first_bss);
 if (VAR_11 >= 0 && VAR_11 != (int) VAR_10) {
  FUNC_6(VAR_0, "nl80211: Ignore vendor event for foreign wiphy %u (own: %d)",
      VAR_10, VAR_11);
  return;
 }

 switch (VAR_8) {
 case 128:
  FUNC_1(VAR_6, VAR_9, VAR_12, VAR_13);
  break;
 default:
  FUNC_6(VAR_0, "nl80211: Ignore unsupported vendor event");
  break;
 }
}
