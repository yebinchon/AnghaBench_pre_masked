
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; scalar_t__ standby_countdown; scalar_t__ standbys; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 struct apm_softc VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct apm_softc *VAR_3 = &VAR_2;

 if (VAR_3 == ((void*)0) || VAR_3->initialized == 0)
  return;

 VAR_1 = 0;
 VAR_3->standbys = VAR_3->standby_countdown = 0;





 if (FUNC_1(VAR_0) == 0)
  FUNC_0();
 return;
}
