
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ssid_len; } ;
struct TYPE_7__ {TYPE_2__ ibss; } ;
struct wireless_dev {TYPE_3__ wext; scalar_t__ ssid_len; int sme_state; TYPE_4__* current_bss; int wiphy; int * connect_keys; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_8__ {int pub; } ;
struct TYPE_5__ {scalar_t__ del_key; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int,int,int *) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1, bool VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_1->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_4 = FUNC_5(VAR_3->wiphy);
 int VAR_5;

 FUNC_0(VAR_3);

 FUNC_3(VAR_3->connect_keys);
 VAR_3->connect_keys = ((void*)0);





 if (VAR_4->ops->del_key)
  for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
   FUNC_4(VAR_4, VAR_1, VAR_5, 0, ((void*)0));

 if (VAR_3->current_bss) {
  FUNC_2(VAR_3->current_bss);
  FUNC_1(VAR_3->wiphy, &VAR_3->current_bss->pub);
 }

 VAR_3->current_bss = ((void*)0);
 VAR_3->sme_state = VAR_0;
 VAR_3->ssid_len = 0;




}
