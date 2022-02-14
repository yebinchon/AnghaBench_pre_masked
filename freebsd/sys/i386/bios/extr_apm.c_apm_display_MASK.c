
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eax; scalar_t__ edx; void* ecx; int ebx; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct apm_softc {TYPE_2__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 () ;
 struct apm_softc VAR_6 ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(int VAR_7)
{
 struct apm_softc *VAR_8 = &VAR_6;

 VAR_8->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_8->bios.r.ebx = VAR_2;
 VAR_8->bios.r.ecx = VAR_7 ? VAR_4:VAR_5;
 VAR_8->bios.r.edx = 0;
 if (FUNC_0() == 0) {
  return 0;
  }


 VAR_8->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_8->bios.r.ebx = VAR_3;
 VAR_8->bios.r.ecx = VAR_7 ? VAR_4:VAR_5;
 VAR_8->bios.r.edx = 0;
 if (FUNC_0() == 0) {
  return 0;
  }
  FUNC_1("Display off failure: errcode = %d\n",
        0xff & (VAR_8->bios.r.eax >> 8));
  return 1;
}
