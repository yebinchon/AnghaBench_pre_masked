
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {scalar_t__ shutdwn_recovery; int * recovery_thread; int request_timeout_list; } ;


 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mpt_softc*) ;
 int FUNC_5 (struct mpt_softc*,struct mpt_softc*,int ,char*,int ) ;
 int FUNC_6 (int **) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct mpt_softc *VAR_2;

 VAR_2 = (struct mpt_softc *)VAR_1;
 FUNC_0(VAR_2);
 for (;;) {
  if (FUNC_2(&VAR_2->request_timeout_list) != 0) {
   if (VAR_2->shutdwn_recovery == 0) {
    FUNC_5(VAR_2, VAR_2, VAR_0, "idle", 0);
   }
  }
  if (VAR_2->shutdwn_recovery != 0) {
   break;
  }
  FUNC_4(VAR_2);
 }
 VAR_2->recovery_thread = ((void*)0);
 FUNC_6(&VAR_2->recovery_thread);
 FUNC_1(VAR_2);
 FUNC_3(0);
}
