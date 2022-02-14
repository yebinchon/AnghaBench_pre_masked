
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_key {int wk_flags; } ;
struct TYPE_3__ {int keyFlags; } ;
typedef TYPE_1__ MWL_HAL_KEYVAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __inline int
FUNC_0(MWL_HAL_KEYVAL *VAR_5, const struct ieee80211_key *VAR_6)
{
 if (VAR_6->wk_flags & VAR_0) {
  if (VAR_6->wk_flags & VAR_2)
   VAR_5->keyFlags |= VAR_4;
  if (VAR_6->wk_flags & VAR_1)
   VAR_5->keyFlags |= VAR_3;
  return 1;
 } else
  return 0;
}
