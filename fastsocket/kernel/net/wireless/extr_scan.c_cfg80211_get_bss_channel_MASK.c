
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_ht_operation {int primary_chan; } ;
struct ieee80211_channel {int flags; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int,int ) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,int ) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_3(struct wiphy *VAR_3, const u8 *VAR_4, size_t VAR_5,
    struct ieee80211_channel *VAR_6)
{
 const u8 *VAR_7;
 u32 VAR_8;
 int VAR_9 = -1;

 VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_5);
 if (VAR_7 && VAR_7[1] == 1) {
  VAR_9 = VAR_7[2];
 } else {
  VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_5);
  if (VAR_7 && VAR_7[1] >= sizeof(struct ieee80211_ht_operation)) {
   struct ieee80211_ht_operation *VAR_10 = (void *)(VAR_7 + 2);

   VAR_9 = VAR_10->primary_chan;
  }
 }

 if (VAR_9 < 0)
  return VAR_6;

 VAR_8 = FUNC_1(VAR_9, VAR_6->band);
 VAR_6 = FUNC_2(VAR_3, VAR_8);
 if (!VAR_6)
  return ((void*)0);
 if (VAR_6->flags & VAR_0)
  return ((void*)0);
 return VAR_6;
}
