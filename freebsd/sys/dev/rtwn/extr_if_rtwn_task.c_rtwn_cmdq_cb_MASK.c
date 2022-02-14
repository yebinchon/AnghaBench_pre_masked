
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; size_t cmdq_first; struct rtwn_cmdq* cmdq; } ;
struct rtwn_cmdq {int data; int (* func ) (struct rtwn_softc*,int *) ;} ;


 int FUNC_0 (struct rtwn_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int VAR_1 ;
 int FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct rtwn_cmdq*,int ,int) ;
 int FUNC_5 (struct rtwn_softc*,int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, int VAR_3)
{
 struct rtwn_softc *VAR_4 = VAR_2;
 struct rtwn_cmdq *VAR_5;





 FUNC_2(VAR_4);
 if (!(VAR_4->sc_flags & VAR_1)) {
  FUNC_3(VAR_4);
  return;
 }

 FUNC_0(VAR_4);
 while (VAR_4->cmdq[VAR_4->cmdq_first].func != ((void*)0)) {
  VAR_5 = &VAR_4->cmdq[VAR_4->cmdq_first];
  VAR_4->cmdq_first = (VAR_4->cmdq_first + 1) % VAR_0;
  FUNC_1(VAR_4);

  VAR_5->func(VAR_4, &VAR_5->data);

  FUNC_0(VAR_4);
  FUNC_4(VAR_5, 0, sizeof (*VAR_5));
 }
 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
}
