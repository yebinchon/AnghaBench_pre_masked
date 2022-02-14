
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sta_info {int sta; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;
struct TYPE_2__ {int (* release_buffered_frames ) (int *,int *,int ,int,int,int) ;} ;


 int FUNC_0 (int *,int *,int ,int,int,int) ;
 int FUNC_1 (struct ieee80211_local*,int *,int ,int,int,int) ;
 int FUNC_2 (struct ieee80211_local*) ;

__attribute__((used)) static inline void
FUNC_3(struct ieee80211_local *VAR_0,
       struct sta_info *VAR_1, u16 VAR_2, int VAR_3,
       enum ieee80211_frame_release_type VAR_4,
       bool VAR_5)
{
 FUNC_1(VAR_0, &VAR_1->sta, VAR_2, VAR_3,
       VAR_4, VAR_5);
 if (VAR_0->ops->release_buffered_frames)
  VAR_0->ops->release_buffered_frames(&VAR_0->hw, &VAR_1->sta, VAR_2,
          VAR_3, VAR_4,
          VAR_5);
 FUNC_2(VAR_0);
}
