
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int teardown; int active_queue_len; scalar_t__ running; int active; } ;
struct cpsw_softc {TYPE_1__ tx; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_softc*,char*) ;
 int FUNC_1 (struct cpsw_softc*) ;
 int FUNC_2 (struct cpsw_softc*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (struct cpsw_softc*) ;
 int FUNC_6 (struct cpsw_softc*,int ,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(struct cpsw_softc *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, ("starting TX teardown"));

 if (FUNC_4(&VAR_1->tx.active) != ((void*)0))
  FUNC_6(VAR_1, VAR_0, 0);
 else
  VAR_1->tx.teardown = 1;
 FUNC_5(VAR_1);
 while (VAR_1->tx.running && ++VAR_2 < 10) {
  FUNC_3(200);
  FUNC_5(VAR_1);
 }
 if (VAR_1->tx.running) {
  FUNC_7(VAR_1->dev,
      "Unable to cleanly shutdown transmitter\n");
 }
 FUNC_0(VAR_1,
     ("finished TX teardown (%d retries, %d idle buffers)", VAR_2,
      VAR_1->tx.active_queue_len));
 FUNC_2(VAR_1);
}
