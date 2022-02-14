
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_node {TYPE_1__* ni_ic; } ;
typedef int int8_t ;
struct TYPE_5__ {int nf; } ;
struct TYPE_6__ {TYPE_2__ mn_ai; } ;
struct TYPE_4__ {int (* ic_node_getrssi ) (struct ieee80211_node const*) ;} ;


 TYPE_3__* FUNC_0 (struct ieee80211_node const*) ;
 int FUNC_1 (struct ieee80211_node const*) ;

__attribute__((used)) static void
FUNC_2(const struct ieee80211_node *VAR_0, int8_t *VAR_1, int8_t *VAR_2)
{
 *VAR_1 = VAR_0->ni_ic->ic_node_getrssi(VAR_0);
 *VAR_2 = -95;

}
