
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eax; scalar_t__ ebx; int ecx; int edx; } ;
struct TYPE_6__ {TYPE_1__ r; } ;
struct apm_softc {TYPE_2__ bios; } ;
typedef TYPE_3__* apm_pwstatus_t ;
struct TYPE_7__ {scalar_t__ ap_device; int ap_acline; int ap_batt_stat; int ap_batt_flag; int ap_batt_life; int ap_batt_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 struct apm_softc VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_2(apm_pwstatus_t VAR_7)
{
 struct apm_softc *VAR_8 = &VAR_5;

 if (VAR_7->ap_device != VAR_2 &&
     (VAR_7->ap_device < VAR_3 || VAR_7->ap_device > VAR_4))
  return 1;

 VAR_8->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_8->bios.r.ebx = VAR_7->ap_device;
 VAR_8->bios.r.ecx = 0;
 VAR_8->bios.r.edx = 0xffff;

 if (FUNC_1())
  return 1;

 VAR_7->ap_acline = (VAR_8->bios.r.ebx >> 8) & 0xff;
 VAR_7->ap_batt_stat = VAR_8->bios.r.ebx & 0xff;
 VAR_7->ap_batt_flag = (VAR_8->bios.r.ecx >> 8) & 0xff;
 VAR_7->ap_batt_life = VAR_8->bios.r.ecx & 0xff;
 VAR_8->bios.r.edx &= 0xffff;
 if (VAR_6)
  VAR_8->bios.r.edx = FUNC_0(VAR_8->bios.r.edx) | 0x8000;
 if (VAR_8->bios.r.edx == 0xffff)
  VAR_7->ap_batt_time = -1;
 else if (VAR_8->bios.r.edx & 0x8000)
  VAR_7->ap_batt_time = (VAR_8->bios.r.edx & 0x7fff) * 60;
 else
  VAR_7->ap_batt_time = VAR_8->bios.r.edx;

 return 0;
}
