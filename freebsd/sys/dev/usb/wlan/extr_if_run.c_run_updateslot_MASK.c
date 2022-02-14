
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct run_softc {int cmdq_task; TYPE_1__* cmdq; int cmdq_store; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;
struct TYPE_2__ {struct ieee80211com* arg0; int func; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct run_softc*,int ,char*,size_t) ;
 int FUNC_2 (struct ieee80211com*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_2)
{
 struct run_softc *VAR_3 = VAR_2->ic_softc;
 uint32_t VAR_4;

 VAR_4 = FUNC_0(&VAR_3->cmdq_store);
 FUNC_1(VAR_3, VAR_0, "cmdq_store=%d\n", VAR_4);
 VAR_3->cmdq[VAR_4].func = VAR_1;
 VAR_3->cmdq[VAR_4].arg0 = VAR_2;
 FUNC_2(VAR_2, &VAR_3->cmdq_task);

 return;
}
