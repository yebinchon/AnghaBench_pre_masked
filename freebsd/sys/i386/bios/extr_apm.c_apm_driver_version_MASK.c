
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eax; int ebx; int ecx; scalar_t__ edx; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct apm_softc {TYPE_2__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 struct apm_softc VAR_2 ;

__attribute__((used)) static int
FUNC_1(int VAR_3)
{
 struct apm_softc *VAR_4 = &VAR_2;

 VAR_4->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_4->bios.r.ebx = 0x0;
 VAR_4->bios.r.ecx = VAR_3;
 VAR_4->bios.r.edx = 0;

 if (FUNC_0() == 0 && VAR_4->bios.r.eax == VAR_3)
  return (0);


 if (VAR_4->bios.r.eax == ((VAR_0 << 8) | VAR_1))
  return (0);

 return (1);
}
