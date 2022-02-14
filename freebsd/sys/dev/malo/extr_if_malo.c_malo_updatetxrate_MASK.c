
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {int ni_txrate; } ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static __inline void
FUNC_1(struct ieee80211_node *VAR_0, int VAR_1)
{
 static const int VAR_2[] =
     { 2, 4, 11, 22, 44, 12, 18, 24, 36, 48, 96, 108 };
 if (VAR_1 < FUNC_0(VAR_2))
  VAR_0->ni_txrate = VAR_2[VAR_1];
}
