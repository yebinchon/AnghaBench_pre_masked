
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int default_key; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ wext; scalar_t__ current_bss; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct key_params {char* key; int key_len; int cipher; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int params ;
struct TYPE_3__ {int set_default_key; int add_key; int del_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int,int *,int,int,int,struct key_params*) ;
 int FUNC_1 (struct key_params*,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int,int,int) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8,
       struct iw_request_info *VAR_9,
       struct iw_point *VAR_10, char *VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_8->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_13 = FUNC_5(VAR_12->wiphy);
 int VAR_14, VAR_15;
 bool VAR_16 = 0;
 struct key_params VAR_17;

 if (VAR_12->iftype != VAR_5 &&
     VAR_12->iftype != VAR_4)
  return -VAR_1;


 if (!VAR_13->ops->del_key ||
     !VAR_13->ops->add_key ||
     !VAR_13->ops->set_default_key)
  return -VAR_1;

 VAR_14 = VAR_10->flags & VAR_3;
 if (VAR_14 == 0) {
  VAR_14 = VAR_12->wext.default_key;
  if (VAR_14 < 0)
   VAR_14 = 0;
 } else if (VAR_14 < 1 || VAR_14 > 4)
  return -VAR_0;
 else
  VAR_14--;

 if (VAR_10->flags & VAR_2)
  VAR_16 = 1;
 else if (VAR_10->length == 0) {

  VAR_15 = 0;
  FUNC_3(VAR_12);
  if (VAR_12->current_bss)
   VAR_15 = FUNC_2(VAR_13, VAR_8, VAR_14, 1,
         1);
  if (!VAR_15)
   VAR_12->wext.default_key = VAR_14;
  FUNC_4(VAR_12);
  return VAR_15;
 }

 FUNC_1(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.key = VAR_11;
 VAR_17.key_len = VAR_10->length;
 if (VAR_10->length == 5)
  VAR_17.cipher = VAR_7;
 else if (VAR_10->length == 13)
  VAR_17.cipher = VAR_6;
 else if (!VAR_16)
  return -VAR_0;

 return FUNC_0(VAR_13, VAR_8, 0, ((void*)0), VAR_16,
           VAR_12->wext.default_key == -1,
           VAR_14, &VAR_17);
}
