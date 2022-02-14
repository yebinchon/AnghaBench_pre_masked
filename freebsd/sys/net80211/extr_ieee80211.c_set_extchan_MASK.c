
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_flags; scalar_t__ ic_extieee; scalar_t__ ic_ieee; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline void
FUNC_0(struct ieee80211_channel *VAR_2)
{





 if (VAR_2->ic_flags & VAR_1)
  VAR_2->ic_extieee = VAR_2->ic_ieee + 4;
 else if (VAR_2->ic_flags & VAR_0)
  VAR_2->ic_extieee = VAR_2->ic_ieee - 4;
 else
  VAR_2->ic_extieee = 0;
}
