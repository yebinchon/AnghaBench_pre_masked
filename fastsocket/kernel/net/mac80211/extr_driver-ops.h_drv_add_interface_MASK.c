
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int flags; TYPE_3__ vif; } ;
struct TYPE_5__ {int flags; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* add_interface ) (TYPE_2__*,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int FUNC_5(struct ieee80211_local *VAR_5,
        struct ieee80211_sub_if_data *VAR_6)
{
 int VAR_7;

 FUNC_1();

 if (FUNC_0(VAR_6->vif.type == VAR_3 ||
      (VAR_6->vif.type == VAR_4 &&
       !(VAR_5->hw.flags & VAR_1))))
  return -VAR_0;

 FUNC_3(VAR_5, VAR_6);
 VAR_7 = VAR_5->ops->add_interface(&VAR_5->hw, &VAR_6->vif);
 FUNC_4(VAR_5, VAR_7);

 if (VAR_7 == 0)
  VAR_6->flags |= VAR_2;

 return VAR_7;
}
