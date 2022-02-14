
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int teardown; scalar_t__ running; } ;
struct cpsw_softc {TYPE_1__ rx; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_softc*,char*) ;
 int FUNC_1 (struct cpsw_softc*) ;
 int FUNC_2 (struct cpsw_softc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cpsw_softc*,int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct cpsw_softc *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, ("starting RX teardown"));
 VAR_1->rx.teardown = 1;
 FUNC_4(VAR_1, VAR_0, 0);
 FUNC_2(VAR_1);
 while (VAR_1->rx.running) {
  if (++VAR_2 > 10) {
   FUNC_5(VAR_1->dev,
       "Unable to cleanly shutdown receiver\n");
   return;
  }
  FUNC_3(200);
 }
 if (!VAR_1->rx.running)
  FUNC_0(VAR_1, ("finished RX teardown (%d retries)", VAR_2));
}
