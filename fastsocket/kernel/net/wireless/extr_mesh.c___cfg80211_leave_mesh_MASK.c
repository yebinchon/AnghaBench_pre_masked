
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int * channel; scalar_t__ mesh_id_len; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int leave_mesh; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct cfg80211_registered_device *VAR_3,
     struct net_device *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_4->ieee80211_ptr;
 int VAR_6;

 FUNC_0(VAR_5);

 if (VAR_4->ieee80211_ptr->iftype != VAR_2)
  return -VAR_1;

 if (!VAR_3->ops->leave_mesh)
  return -VAR_1;

 if (!VAR_5->mesh_id_len)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_6) {
  VAR_5->mesh_id_len = 0;
  VAR_5->channel = ((void*)0);
 }

 return VAR_6;
}
