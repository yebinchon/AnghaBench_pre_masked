
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct TYPE_2__ {int ic_flags; } ;




 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(struct ieee80211vap *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 129:
  return (VAR_1->iv_ic->ic_flags & VAR_0);
 case 128:
  return 1;
 }
 return 1;
}
