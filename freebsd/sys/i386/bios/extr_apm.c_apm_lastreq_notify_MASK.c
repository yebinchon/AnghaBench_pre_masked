
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eax; scalar_t__ edx; int ecx; int ebx; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct apm_softc {TYPE_2__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct apm_softc VAR_4 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct apm_softc *VAR_5 = &VAR_4;

 VAR_5->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_5->bios.r.ebx = VAR_2;
 VAR_5->bios.r.ecx = VAR_3;
 VAR_5->bios.r.edx = 0;
 FUNC_0();
}
