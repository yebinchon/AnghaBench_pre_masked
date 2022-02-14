
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_node {int ni_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

uint8_t *
FUNC_0(uint8_t *VAR_2, const struct ieee80211_node *VAR_3)
{
 if (VAR_3->ni_flags & VAR_1) {
  *VAR_2++ = VAR_0;
  *VAR_2++ = 1;
  *VAR_2++ = 0;
 }

 return (VAR_2);
}
