
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_3__* ieee80211_ptr; TYPE_1__* ops; } ;
struct key_parse {scalar_t__ idx; int def_multi; scalar_t__ def_uni; scalar_t__ def; int defmgmt; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_7__ {scalar_t__ default_key; scalar_t__ default_mgmt_key; } ;
struct TYPE_8__ {TYPE_2__ wext; } ;
struct TYPE_6__ {int set_default_mgmt_key; int set_default_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct genl_info*,struct key_parse*) ;
 int FUNC_2 (struct net_device*,struct net_device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct net_device*,struct net_device*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct cfg80211_registered_device *VAR_4 = VAR_3->user_ptr[0];
 struct key_parse VAR_5;
 int VAR_6;
 struct net_device *VAR_7 = VAR_3->user_ptr[1];

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5.idx < 0)
  return -VAR_0;


 if (!VAR_5.def && !VAR_5.defmgmt)
  return -VAR_0;

 FUNC_4(VAR_7->ieee80211_ptr);

 if (VAR_5.def) {
  if (!VAR_4->ops->set_default_key) {
   VAR_6 = -VAR_1;
   goto out;
  }

  VAR_6 = FUNC_0(VAR_7->ieee80211_ptr);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_5.idx,
       VAR_5.def_uni, VAR_5.def_multi);

  if (VAR_6)
   goto out;




 } else {
  if (VAR_5.def_uni || !VAR_5.def_multi) {
   VAR_6 = -VAR_0;
   goto out;
  }

  if (!VAR_4->ops->set_default_mgmt_key) {
   VAR_6 = -VAR_1;
   goto out;
  }

  VAR_6 = FUNC_0(VAR_7->ieee80211_ptr);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_5.idx);
  if (VAR_6)
   goto out;




 }

 out:
 FUNC_5(VAR_7->ieee80211_ptr);

 return VAR_6;
}
