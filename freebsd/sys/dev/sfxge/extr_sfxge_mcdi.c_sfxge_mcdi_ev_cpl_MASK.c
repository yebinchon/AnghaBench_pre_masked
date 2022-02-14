
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_mcdi {scalar_t__ state; } ;
struct sfxge_softc {struct sfxge_mcdi mcdi; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct sfxge_softc *VAR_2;
 struct sfxge_mcdi *VAR_3;

 VAR_2 = (struct sfxge_softc *)VAR_1;
 VAR_3 = &VAR_2->mcdi;

 FUNC_0(VAR_3->state == VAR_0,
     ("MCDI not initialized"));


}
