
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sec_param {int dummy; } sec_param ;
struct rtwn_softc {TYPE_1__** vaps; } ;
struct ieee80211vap {int dummy; } ;
struct TYPE_2__ {struct ieee80211vap vap; } ;


 int FUNC_0 (struct rtwn_softc*,struct ieee80211vap*,int) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_0, union sec_param *VAR_1)
{
 struct ieee80211vap *VAR_2 = &VAR_0->vaps[0]->vap;

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_0, VAR_2, 1);
}
