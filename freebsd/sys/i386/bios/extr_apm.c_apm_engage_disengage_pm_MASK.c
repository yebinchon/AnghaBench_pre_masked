
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int eax; int ecx; scalar_t__ edx; int ebx; } ;
struct TYPE_3__ {TYPE_2__ r; } ;
struct apm_softc {TYPE_1__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct apm_softc VAR_3 ;

__attribute__((used)) static int
FUNC_1(int VAR_4)
{
 struct apm_softc *VAR_5 = &VAR_3;

 VAR_5->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_5->bios.r.ebx = VAR_2;
 VAR_5->bios.r.ecx = VAR_4;
 VAR_5->bios.r.edx = 0;
 return (FUNC_0());
}
