
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eax; scalar_t__ ebx; scalar_t__ ecx; scalar_t__ edx; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct apm_softc {TYPE_2__ bios; scalar_t__ active; scalar_t__ slow_idle_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct apm_softc VAR_2 ;

void
FUNC_1(void)
{
 struct apm_softc *VAR_3 = &VAR_2;






 if (VAR_3->slow_idle_cpu && VAR_3->active) {

  VAR_3->bios.r.eax = (VAR_0 <<8) | VAR_1;
  VAR_3->bios.r.edx = VAR_3->bios.r.ecx = VAR_3->bios.r.ebx = 0;
  FUNC_0();
 }
}
