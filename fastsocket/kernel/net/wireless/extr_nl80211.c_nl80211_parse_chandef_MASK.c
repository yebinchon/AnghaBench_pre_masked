
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct genl_info {scalar_t__* attrs; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct cfg80211_chan_def {void* center_freq2; void* center_freq1; void* width; TYPE_1__* chan; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;




 void* VAR_7 ;
 int FUNC_0 (struct cfg80211_chan_def*,TYPE_1__*,int) ;
 int FUNC_1 (int *,struct cfg80211_chan_def*,int) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 TYPE_1__* FUNC_3 (int *,void*) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cfg80211_registered_device *VAR_8,
     struct genl_info *VAR_9,
     struct cfg80211_chan_def *VAR_10)
{
 u32 VAR_11;

 if (!VAR_9->attrs[VAR_6])
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_9->attrs[VAR_6]);

 VAR_10->chan = FUNC_3(&VAR_8->wiphy, VAR_11);
 VAR_10->width = VAR_7;
 VAR_10->center_freq1 = VAR_11;
 VAR_10->center_freq2 = 0;


 if (!VAR_10->chan || VAR_10->chan->flags & VAR_1)
  return -VAR_0;

 if (VAR_9->attrs[VAR_5]) {
  enum nl80211_channel_type VAR_12;

  VAR_12 = FUNC_4(
    VAR_9->attrs[VAR_5]);

  switch (VAR_12) {
  case 128:
  case 131:
  case 129:
  case 130:
   FUNC_0(VAR_10, VAR_10->chan,
      VAR_12);
   break;
  default:
   return -VAR_0;
  }
 } else if (VAR_9->attrs[VAR_4]) {
  VAR_10->width =
   FUNC_4(VAR_9->attrs[VAR_4]);
  if (VAR_9->attrs[VAR_2])
   VAR_10->center_freq1 =
    FUNC_4(
     VAR_9->attrs[VAR_2]);
  if (VAR_9->attrs[VAR_3])
   VAR_10->center_freq2 =
    FUNC_4(
     VAR_9->attrs[VAR_3]);
 }

 if (!FUNC_2(VAR_10))
  return -VAR_0;

 if (!FUNC_1(&VAR_8->wiphy, VAR_10,
         VAR_1))
  return -VAR_0;

 return 0;
}
