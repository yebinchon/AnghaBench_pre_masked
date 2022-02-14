
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int p2p_started; int wiphy; struct wireless_dev* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int p2p_started; int wiphy; struct net_device* netdev; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct wireless_dev** user_ptr; int attrs; } ;
struct cfg80211_registered_device {int p2p_started; int wiphy; struct cfg80211_registered_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wireless_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct wireless_dev*) ;
 struct wireless_dev* FUNC_2 (int ,int ) ;
 struct wireless_dev* FUNC_3 (int ,struct genl_info*) ;
 int FUNC_4 (struct wireless_dev*) ;
 int VAR_7 ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct genl_info*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct wireless_dev*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct wireless_dev* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct genl_ops *VAR_8, struct sk_buff *VAR_9,
       struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11;
 struct wireless_dev *VAR_12;
 struct net_device *VAR_13;
 bool VAR_14 = VAR_8->internal_flags & VAR_4;

 if (VAR_14)
  FUNC_10();

 if (VAR_8->internal_flags & VAR_6) {
  VAR_11 = FUNC_3(FUNC_6(VAR_10), VAR_10);
  if (FUNC_0(VAR_11)) {
   if (VAR_14)
    FUNC_11();
   return FUNC_1(VAR_11);
  }
  VAR_10->user_ptr[0] = VAR_11;
 } else if (VAR_8->internal_flags & VAR_3 ||
     VAR_8->internal_flags & VAR_5) {
  FUNC_7(&VAR_7);
  VAR_12 = FUNC_2(FUNC_6(VAR_10),
        VAR_10->attrs);
  if (FUNC_0(VAR_12)) {
   FUNC_8(&VAR_7);
   if (VAR_14)
    FUNC_11();
   return FUNC_1(VAR_12);
  }

  VAR_13 = VAR_12->netdev;
  VAR_11 = FUNC_12(VAR_12->wiphy);

  if (VAR_8->internal_flags & VAR_3) {
   if (!VAR_13) {
    FUNC_8(&VAR_7);
    if (VAR_14)
     FUNC_11();
    return -VAR_0;
   }

   VAR_10->user_ptr[1] = VAR_13;
  } else {
   VAR_10->user_ptr[1] = VAR_12;
  }

  if (VAR_13) {
   if (VAR_8->internal_flags & VAR_2 &&
       !FUNC_9(VAR_13)) {
    FUNC_8(&VAR_7);
    if (VAR_14)
     FUNC_11();
    return -VAR_1;
   }

   FUNC_5(VAR_13);
  } else if (VAR_8->internal_flags & VAR_2) {
   if (!VAR_12->p2p_started) {
    FUNC_8(&VAR_7);
    if (VAR_14)
     FUNC_11();
    return -VAR_1;
   }
  }

  FUNC_4(VAR_11);

  FUNC_8(&VAR_7);

  VAR_10->user_ptr[0] = VAR_11;
 }

 return 0;
}
