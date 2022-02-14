
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int eax; int ebx; scalar_t__ edx; scalar_t__ ecx; } ;
struct TYPE_3__ {TYPE_2__ r; } ;
struct apm_softc {TYPE_1__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 struct apm_softc VAR_3 ;

__attribute__((used)) static u_int
FUNC_1(void)
{
 struct apm_softc *VAR_4 = &VAR_3;

 VAR_4->bios.r.eax = (VAR_0 << 8) | VAR_1;

 VAR_4->bios.r.ebx = 0;
 VAR_4->bios.r.ecx = 0;
 VAR_4->bios.r.edx = 0;
 if (FUNC_0())
  return (VAR_2);
 return (VAR_4->bios.r.ebx & 0xffff);
}
