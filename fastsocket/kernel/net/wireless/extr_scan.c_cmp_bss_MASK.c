
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cfg80211_bss_ies {int len; int data; } ;
struct cfg80211_bss {scalar_t__ const* bssid; int capability; int ies; TYPE_1__* channel; } ;
typedef enum bss_compare_mode { ____Placeholder_bss_compare_mode } bss_compare_mode ;
struct TYPE_2__ {int center_freq; } ;





 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__ const*,scalar_t__ const*,scalar_t__ const) ;
 struct cfg80211_bss_ies* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cfg80211_bss *VAR_3,
     struct cfg80211_bss *VAR_4,
     enum bss_compare_mode VAR_5)
{
 const struct cfg80211_bss_ies *VAR_6, *VAR_7;
 const u8 *VAR_8 = ((void*)0);
 const u8 *VAR_9 = ((void*)0);
 int VAR_10, VAR_11;

 if (VAR_3->channel != VAR_4->channel)
  return VAR_4->channel->center_freq - VAR_3->channel->center_freq;

 VAR_6 = FUNC_3(VAR_3->ies);
 if (!VAR_6)
  return -1;
 VAR_7 = FUNC_3(VAR_4->ies);
 if (!VAR_7)
  return 1;

 if (FUNC_0(VAR_3->capability))
  VAR_8 = FUNC_1(VAR_1,
           VAR_6->data, VAR_6->len);
 if (FUNC_0(VAR_4->capability))
  VAR_9 = FUNC_1(VAR_1,
           VAR_7->data, VAR_7->len);
 if (VAR_8 && VAR_9) {
  int VAR_12;

  if (VAR_8[1] == VAR_9[1])
   VAR_12 = FUNC_2(VAR_8 + 2, VAR_9 + 2, VAR_8[1]);
  else
   VAR_12 = VAR_9[1] - VAR_8[1];

  VAR_8 = FUNC_1(VAR_0,
           VAR_6->data, VAR_6->len);
  VAR_9 = FUNC_1(VAR_0,
           VAR_7->data, VAR_7->len);
  if (VAR_8 && VAR_9) {
   if (VAR_12)
    return VAR_12;
   if (VAR_8[1] != VAR_9[1])
    return VAR_9[1] - VAR_8[1];
   return FUNC_2(VAR_8 + 2, VAR_9 + 2, VAR_8[1]);
  }
 }





 VAR_11 = FUNC_2(VAR_3->bssid, VAR_4->bssid, sizeof(VAR_3->bssid));
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_1(VAR_2, VAR_6->data, VAR_6->len);
 VAR_9 = FUNC_1(VAR_2, VAR_7->data, VAR_7->len);

 if (!VAR_8 && !VAR_9)
  return 0;
 if (!VAR_8)
  return -1;
 if (!VAR_9)
  return 1;

 switch (VAR_5) {
 case 129:
  return VAR_9[1];
 case 128:
 default:

  if (VAR_8[1] != VAR_9[1])
   return VAR_9[1] - VAR_8[1];
  return FUNC_2(VAR_8 + 2, VAR_9 + 2, VAR_8[1]);
 case 130:
  if (VAR_8[1] != VAR_9[1])
   return VAR_9[1] - VAR_8[1];

  for (VAR_10 = 0; VAR_10 < VAR_9[1]; VAR_10++)
   if (VAR_9[VAR_10 + 2])
    return -1;
  return 0;
 }
}
