
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpa_driver_nl80211_data {size_t num_filter_ssids; TYPE_1__* filter_ssids; } ;
struct TYPE_2__ {scalar_t__ const ssid_len; int ssid; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (scalar_t__ const*,size_t,int ) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int ,scalar_t__ const) ;

__attribute__((used)) static int FUNC_2(struct wpa_driver_nl80211_data *VAR_1,
     const u8 *VAR_2, size_t VAR_3)
{
 const u8 *VAR_4;
 size_t VAR_5;

 if (VAR_1->filter_ssids == ((void*)0))
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if (VAR_4 == ((void*)0))
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_filter_ssids; VAR_5++) {
  if (VAR_4[1] == VAR_1->filter_ssids[VAR_5].ssid_len &&
      FUNC_1(VAR_4 + 2, VAR_1->filter_ssids[VAR_5].ssid, VAR_4[1]) ==
      0)
   return 0;
 }

 return 1;
}
