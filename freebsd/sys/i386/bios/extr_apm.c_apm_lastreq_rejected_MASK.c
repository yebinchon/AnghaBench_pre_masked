
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
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_4 ;
 struct apm_softc VAR_5 ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct apm_softc *VAR_6 = &VAR_5;

 if (VAR_4 == 0) {
  return 1;
 }

 VAR_6->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_6->bios.r.ebx = VAR_2;
 VAR_6->bios.r.ecx = VAR_3;
 VAR_6->bios.r.edx = 0;

 if (FUNC_1()) {
  FUNC_0("apm_lastreq_rejected: failed\n");
  return 1;
 }
 VAR_4 = 0;
 return 0;
}
