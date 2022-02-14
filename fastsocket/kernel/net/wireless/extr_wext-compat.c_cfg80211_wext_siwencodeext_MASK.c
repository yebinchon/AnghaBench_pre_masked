
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int default_mgmt_key; int default_key; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__ wext; int wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct key_params {int key_len; int seq_len; int seq; scalar_t__ cipher; int key; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; } ;
struct TYPE_6__ {int * sa_data; } ;
struct iw_encode_ext {int alg; int key_len; int ext_flags; int rx_seq; int key; TYPE_3__ addr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int params ;
struct TYPE_4__ {int set_default_key; int add_key; int del_key; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,int,int const*,int,int,int,struct key_params*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (struct key_params*,int ,int) ;
 struct cfg80211_registered_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_14,
          struct iw_request_info *VAR_15,
          struct iw_point *VAR_16, char *VAR_17)
{
 struct wireless_dev *VAR_18 = VAR_14->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_19 = FUNC_3(VAR_18->wiphy);
 struct iw_encode_ext *VAR_20 = (struct iw_encode_ext *) VAR_17;
 const u8 *VAR_21;
 int VAR_22;
 bool VAR_23 = 0;
 struct key_params VAR_24;
 u32 VAR_25;

 if (VAR_18->iftype != VAR_8 &&
     VAR_18->iftype != VAR_7)
  return -VAR_1;


 if (!VAR_19->ops->del_key ||
     !VAR_19->ops->add_key ||
     !VAR_19->ops->set_default_key)
  return -VAR_1;

 switch (VAR_20->alg) {
 case 130:
  VAR_23 = 1;
  VAR_25 = 0;
  break;
 case 128:
  if (VAR_20->key_len == 5)
   VAR_25 = VAR_13;
  else if (VAR_20->key_len == 13)
   VAR_25 = VAR_12;
  else
   return -VAR_0;
  break;
 case 129:
  VAR_25 = VAR_11;
  break;
 case 131:
  VAR_25 = VAR_10;
  break;
 case 132:
  VAR_25 = VAR_9;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_16->flags & VAR_2)
  VAR_23 = 1;

 VAR_22 = VAR_16->flags & VAR_6;
 if (VAR_25 == VAR_9) {
  if (VAR_22 < 4 || VAR_22 > 5) {
   VAR_22 = VAR_18->wext.default_mgmt_key;
   if (VAR_22 < 0)
    return -VAR_0;
  } else
   VAR_22--;
 } else {
  if (VAR_22 < 1 || VAR_22 > 4) {
   VAR_22 = VAR_18->wext.default_key;
   if (VAR_22 < 0)
    return -VAR_0;
  } else
   VAR_22--;
 }

 VAR_21 = VAR_20->addr.sa_data;
 if (FUNC_1(VAR_21))
  VAR_21 = ((void*)0);

 FUNC_2(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.key = VAR_20->key;
 VAR_24.key_len = VAR_20->key_len;
 VAR_24.cipher = VAR_25;

 if (VAR_20->ext_flags & VAR_4) {
  VAR_24.seq = VAR_20->rx_seq;
  VAR_24.seq_len = 6;
 }

 return FUNC_0(
   VAR_19, VAR_14,
   !(VAR_20->ext_flags & VAR_3),
   VAR_21, VAR_23,
   VAR_20->ext_flags & VAR_5,
   VAR_22, &VAR_24);
}
