
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* configure_filter ) (int *,unsigned int,unsigned int*,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned int,unsigned int*,int ) ;
 int FUNC_2 (struct ieee80211_local*,unsigned int,unsigned int*,int ) ;
 int FUNC_3 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_4(struct ieee80211_local *VAR_0,
     unsigned int VAR_1,
     unsigned int *VAR_2,
     u64 VAR_3)
{
 FUNC_0();

 FUNC_2(VAR_0, VAR_1, VAR_2,
       VAR_3);
 VAR_0->ops->configure_filter(&VAR_0->hw, VAR_1, VAR_2,
         VAR_3);
 FUNC_3(VAR_0);
}
