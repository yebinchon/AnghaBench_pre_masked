
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flush ) (int *,int ,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct ieee80211_local*,int ,int) ;
 int FUNC_3 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_4(struct ieee80211_local *VAR_0,
        u32 VAR_1, bool VAR_2)
{
 FUNC_0();

 FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_0->ops->flush)
  VAR_0->ops->flush(&VAR_0->hw, VAR_1, VAR_2);
 FUNC_3(VAR_0);
}
