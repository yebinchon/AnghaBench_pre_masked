
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malo_softc {scalar_t__ malo_timer; TYPE_1__* malo_txq; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (struct malo_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct malo_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct malo_softc*) ;
 scalar_t__ FUNC_4 (struct malo_softc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, int VAR_2)
{
 struct malo_softc *VAR_3 = VAR_1;
 int VAR_4, VAR_5;




 VAR_5 = 0;
 FUNC_0(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_2(&VAR_3->malo_txq[VAR_4].active))
   VAR_5 += FUNC_4(VAR_3, &VAR_3->malo_txq[VAR_4]);
 }

 if (VAR_5 != 0) {
  VAR_3->malo_timer = 0;
  FUNC_3(VAR_3);
 }
 FUNC_1(VAR_3);
}
