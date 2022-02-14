
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_modecaps; int ic_rxstream; int ic_txstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211com*,int ) ;
 int FUNC_1 (struct ieee80211com*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void
FUNC_3(struct ieee80211com *VAR_2)
{

 if (FUNC_2(VAR_2->ic_modecaps, VAR_0) ||
     FUNC_2(VAR_2->ic_modecaps, VAR_1))
  FUNC_1(VAR_2, "%dT%dR\n", VAR_2->ic_txstream, VAR_2->ic_rxstream);
 if (FUNC_2(VAR_2->ic_modecaps, VAR_0))
  FUNC_0(VAR_2, VAR_0);
 if (FUNC_2(VAR_2->ic_modecaps, VAR_1))
  FUNC_0(VAR_2, VAR_1);
}
