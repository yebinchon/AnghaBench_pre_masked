
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211_node {int ni_flags; int ni_htcap; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline int
FUNC_0(struct ieee80211_node *VAR_3)
{
 uint16_t VAR_4 = VAR_3->ni_flags;

 switch (VAR_3->ni_htcap & VAR_0) {
 case 130:
  VAR_3->ni_flags |= VAR_1;
  VAR_3->ni_flags |= VAR_2;
  break;
 case 129:
  VAR_3->ni_flags |= VAR_1;
  VAR_3->ni_flags &= ~VAR_2;
  break;
 case 128:
 default:
  VAR_3->ni_flags &= ~VAR_1;
  VAR_3->ni_flags &= ~VAR_2;
  break;
 }
 return (VAR_4 ^ VAR_3->ni_flags);
}
