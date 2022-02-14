
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eax; int ebx; int ecx; scalar_t__ edx; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct apm_softc {scalar_t__ intversion; TYPE_2__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 struct apm_softc VAR_3 ;

__attribute__((used)) static int
FUNC_2(int VAR_4)
{
 struct apm_softc *VAR_5 = &VAR_3;

 VAR_5->bios.r.eax = (VAR_0 << 8) | VAR_1;

 if (VAR_5->intversion >= FUNC_0(1, 1))
  VAR_5->bios.r.ebx = VAR_2;
 else
  VAR_5->bios.r.ebx = 0xffff;
 VAR_5->bios.r.ecx = VAR_4;
 VAR_5->bios.r.edx = 0;
 return (FUNC_1());
}
