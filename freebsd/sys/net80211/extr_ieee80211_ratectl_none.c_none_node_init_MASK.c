
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* rs_rates; } ;
struct ieee80211_node {int ni_txrate; TYPE_1__ ni_rates; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct ieee80211_node *VAR_1)
{
 VAR_1->ni_txrate = VAR_1->ni_rates.rs_rates[0] & VAR_0;
}
