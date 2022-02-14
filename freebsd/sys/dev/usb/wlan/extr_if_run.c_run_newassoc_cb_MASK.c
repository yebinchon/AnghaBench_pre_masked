
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct run_softc {int * wcid_stats; } ;
struct run_cmdq {size_t wcid; struct ieee80211_node* arg1; } ;
struct ieee80211_node {int ni_macaddr; TYPE_2__* ni_vap; } ;
struct TYPE_4__ {TYPE_1__* iv_ic; } ;
struct TYPE_3__ {struct run_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct run_softc*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct run_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct run_cmdq *VAR_3 = VAR_2;
 struct ieee80211_node *VAR_4 = VAR_3->arg1;
 struct run_softc *VAR_5 = VAR_4->ni_vap->iv_ic->ic_softc;
 uint8_t VAR_6 = VAR_3->wcid;

 FUNC_1(VAR_5, VAR_1);

 FUNC_3(VAR_5, FUNC_0(VAR_6),
     VAR_4->ni_macaddr, VAR_0);

 FUNC_2(&(VAR_5->wcid_stats[VAR_6]), 0, sizeof(VAR_5->wcid_stats[VAR_6]));
}
