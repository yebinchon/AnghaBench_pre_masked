
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_crit_proto_id { ____Placeholder_nl80211_crit_proto_id } nl80211_crit_proto_id ;
struct TYPE_2__ {int (* crit_proto_start ) (int *,struct wireless_dev*,int,int ) ;} ;


 int FUNC_0 (int *,struct wireless_dev*,int,int ) ;
 int FUNC_1 (int *,struct wireless_dev*,int,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
     struct wireless_dev *VAR_1,
     enum nl80211_crit_proto_id VAR_2,
     u16 VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_0->ops->crit_proto_start(&VAR_0->wiphy, VAR_1,
       VAR_2, VAR_3);
 FUNC_2(&VAR_0->wiphy, VAR_4);
 return VAR_4;
}
