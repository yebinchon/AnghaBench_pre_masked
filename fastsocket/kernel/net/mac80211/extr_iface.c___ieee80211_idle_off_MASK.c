
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;
struct ieee80211_local {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct ieee80211_local *VAR_2)
{
 if (!(VAR_2->hw.conf.flags & VAR_1))
  return 0;

 VAR_2->hw.conf.flags &= ~VAR_1;
 return VAR_0;
}
