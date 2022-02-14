
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int shutdwn_recovery; int * recovery_thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*,int **,int ,char*,int ) ;
 int FUNC_1 (struct mpt_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mpt_softc *VAR_1)
{

 if (VAR_1->recovery_thread == ((void*)0)) {
  return;
 }
 VAR_1->shutdwn_recovery = 1;
 FUNC_1(VAR_1);




 FUNC_0(VAR_1, &VAR_1->recovery_thread, VAR_0, "thtrm", 0);
}
