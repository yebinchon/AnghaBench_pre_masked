
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_coverage_class ) (int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ieee80211_local*,int) ;
 int FUNC_3 (struct ieee80211_local*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct ieee80211_local *VAR_1,
      u8 VAR_2)
{
 int VAR_3 = 0;
 FUNC_0();

 FUNC_3(VAR_1, VAR_2);
 if (VAR_1->ops->set_coverage_class)
  VAR_1->ops->set_coverage_class(&VAR_1->hw, VAR_2);
 else
  VAR_3 = -VAR_0;

 FUNC_2(VAR_1, VAR_3);
 return VAR_3;
}
