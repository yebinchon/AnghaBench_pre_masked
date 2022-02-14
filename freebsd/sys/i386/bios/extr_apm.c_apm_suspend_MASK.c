
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; int standby_countdown; int standbys; int suspend_countdown; int suspends; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 struct apm_softc VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(int VAR_4)
{
 struct apm_softc *VAR_5 = &VAR_1;

 if (VAR_5 == ((void*)0) || VAR_5->initialized == 0)
  return;

 switch (VAR_4) {
 case 128:
  if (VAR_5->suspends)
   return;
  VAR_5->suspends++;
  VAR_5->suspend_countdown = VAR_3;
  break;
 case 129:
  if (VAR_5->standbys)
   return;
  VAR_5->standbys++;
  VAR_5->standby_countdown = VAR_2;
  break;
 default:
  FUNC_1("apm_suspend: Unknown Suspend state 0x%x\n", VAR_4);
  return;
 }

 VAR_0++;
 FUNC_0();
}
