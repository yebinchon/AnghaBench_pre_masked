
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_node {int ni_meshid; int ni_meshidlen; } ;


 int FUNC_0 (int ,int const*,int const) ;

void
FUNC_1(struct ieee80211_node *VAR_0, const uint8_t *VAR_1)
{
 VAR_0->ni_meshidlen = VAR_1[1];
 FUNC_0(VAR_0->ni_meshid, VAR_1 + 2, VAR_1[1]);
}
