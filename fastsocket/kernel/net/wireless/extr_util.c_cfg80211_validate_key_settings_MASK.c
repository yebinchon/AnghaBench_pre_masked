
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct key_params {int cipher; int seq_len; scalar_t__ seq; int key_len; } ;
struct TYPE_2__ {int flags; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(struct cfg80211_registered_device *VAR_7,
       struct key_params *VAR_8, int VAR_9,
       bool VAR_10, const u8 *VAR_11)
{
 if (VAR_9 > 5)
  return -VAR_0;

 if (!VAR_10 && VAR_11 && !(VAR_7->wiphy.flags & VAR_1))
  return -VAR_0;

 if (VAR_10 && !VAR_11)
  return -VAR_0;
 if (VAR_10 && VAR_9 &&
     ((VAR_8->cipher == 130) ||
      (VAR_8->cipher == 131) ||
      (VAR_8->cipher == 132)))
  return -VAR_0;

 switch (VAR_8->cipher) {
 case 128:
  if (VAR_8->key_len != VAR_6)
   return -VAR_0;
  break;
 case 130:
  if (VAR_8->key_len != VAR_4)
   return -VAR_0;
  break;
 case 131:
  if (VAR_8->key_len != VAR_3)
   return -VAR_0;
  break;
 case 129:
  if (VAR_8->key_len != VAR_5)
   return -VAR_0;
  break;
 case 132:
  if (VAR_8->key_len != VAR_2)
   return -VAR_0;
  break;
 default:







  break;
 }

 if (VAR_8->seq) {
  switch (VAR_8->cipher) {
  case 128:
  case 129:

   return -VAR_0;
  case 130:
  case 131:
  case 132:
   if (VAR_8->seq_len != 6)
    return -VAR_0;
   break;
  }
 }

 if (!FUNC_0(&VAR_7->wiphy, VAR_8->cipher))
  return -VAR_0;

 return 0;
}
