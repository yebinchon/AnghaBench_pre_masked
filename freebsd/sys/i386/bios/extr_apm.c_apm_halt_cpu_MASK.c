
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; int always_halt_cpu; } ;


 struct apm_softc VAR_0 ;

__attribute__((used)) static void
FUNC_0(void)
{
 struct apm_softc *VAR_1 = &VAR_0;

 if (VAR_1 == ((void*)0) || VAR_1->initialized == 0)
  return;

 VAR_1->always_halt_cpu = 1;

 return;
}
