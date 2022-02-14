
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int cap; int vht_mcs; scalar_t__ vht_supported; } ;
struct TYPE_3__ {int ampdu_density; int ampdu_factor; int cap; int mcs; scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; TYPE_2__ vht_cap; TYPE_1__ ht_cap; } ;
struct ieee80211_rate {int flags; int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_11,
          struct ieee80211_supported_band *VAR_12)
{
 struct nlattr *VAR_13, *VAR_14;
 struct ieee80211_rate *VAR_15;
 int VAR_16;


 if (VAR_12->ht_cap.ht_supported &&
     (FUNC_2(VAR_11, VAR_5,
       sizeof(VAR_12->ht_cap.mcs),
       &VAR_12->ht_cap.mcs) ||
      FUNC_4(VAR_11, VAR_4,
    VAR_12->ht_cap.cap) ||
      FUNC_6(VAR_11, VAR_3,
   VAR_12->ht_cap.ampdu_factor) ||
      FUNC_6(VAR_11, VAR_2,
   VAR_12->ht_cap.ampdu_density)))
  return -VAR_0;


 if (VAR_12->vht_cap.vht_supported &&
     (FUNC_2(VAR_11, VAR_8,
       sizeof(VAR_12->vht_cap.vht_mcs),
       &VAR_12->vht_cap.vht_mcs) ||
      FUNC_5(VAR_11, VAR_7,
    VAR_12->vht_cap.cap)))
  return -VAR_0;


 VAR_13 = FUNC_1(VAR_11, VAR_6);
 if (!VAR_13)
  return -VAR_0;

 for (VAR_16 = 0; VAR_16 < VAR_12->n_bitrates; VAR_16++) {
  VAR_14 = FUNC_1(VAR_11, VAR_16);
  if (!VAR_14)
   return -VAR_0;

  VAR_15 = &VAR_12->bitrates[VAR_16];
  if (FUNC_5(VAR_11, VAR_10,
    VAR_15->bitrate))
   return -VAR_0;
  if ((VAR_15->flags & VAR_1) &&
      FUNC_3(VAR_11,
     VAR_9))
   return -VAR_0;

  FUNC_0(VAR_11, VAR_14);
 }

 FUNC_0(VAR_11, VAR_13);

 return 0;
}
