
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rs_nrates; } ;
struct ieee80211_node {int * ni_chan; TYPE_1__ ni_htrates; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_node *VAR_1)
{

 if (VAR_1->ni_chan == ((void*)0))
  return (0);
 if (VAR_1->ni_chan == VAR_0)
  return (0);
 if (FUNC_0(VAR_1->ni_chan) && VAR_1->ni_htrates.rs_nrates == 0)
  return (0);
 return (FUNC_0(VAR_1->ni_chan));
}
