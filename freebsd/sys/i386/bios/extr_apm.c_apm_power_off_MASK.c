
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int eax; scalar_t__ edx; int ecx; int ebx; } ;
struct TYPE_3__ {TYPE_2__ r; } ;
struct apm_softc {TYPE_1__ bios; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 struct apm_softc VAR_5 ;

__attribute__((used)) static void
FUNC_1(void *VAR_6, int VAR_7)
{
 struct apm_softc *VAR_8 = &VAR_5;


 if (!(VAR_7 & VAR_4) || !VAR_5.active)
  return;
 VAR_8->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_8->bios.r.ebx = VAR_2;
 VAR_8->bios.r.ecx = VAR_3;
 VAR_8->bios.r.edx = 0;
 (void) FUNC_0();
}
