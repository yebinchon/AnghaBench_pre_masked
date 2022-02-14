
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_5__ {int eax; int ebx; int ecx; scalar_t__ edx; } ;
struct TYPE_6__ {TYPE_1__ r; } ;
struct apm_softc {TYPE_2__ bios; scalar_t__ active; scalar_t__ minorversion; scalar_t__ majorversion; } ;
struct apm_pwstatus {int ap_batt_time; int ap_batt_life; int ap_batt_stat; int ap_acline; int ap_device; } ;
typedef int aps ;
typedef TYPE_3__* apm_info_t ;
struct TYPE_7__ {int ai_infoversion; int ai_batteries; int ai_capabilities; struct apm_pwstatus* ai_spare; void* ai_status; void* ai_minor; void* ai_major; int ai_batt_time; int ai_batt_life; int ai_batt_stat; int ai_acline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct apm_pwstatus*) ;
 struct apm_softc VAR_3 ;
 int FUNC_2 (struct apm_pwstatus*,int) ;

__attribute__((used)) static int
FUNC_3(apm_info_t VAR_4)
{
 struct apm_softc *VAR_5 = &VAR_3;
 struct apm_pwstatus VAR_6;

 FUNC_2(&VAR_6, sizeof(VAR_6));
 VAR_6.ap_device = VAR_2;
 if (FUNC_1(&VAR_6))
  return 1;

 VAR_4->ai_infoversion = 1;
 VAR_4->ai_acline = VAR_6.ap_acline;
 VAR_4->ai_batt_stat = VAR_6.ap_batt_stat;
 VAR_4->ai_batt_life = VAR_6.ap_batt_life;
 VAR_4->ai_batt_time = VAR_6.ap_batt_time;
 VAR_4->ai_major = (u_int)VAR_5->majorversion;
 VAR_4->ai_minor = (u_int)VAR_5->minorversion;
 VAR_4->ai_status = (u_int)VAR_5->active;

 VAR_5->bios.r.eax = (VAR_0 << 8) | VAR_1;
 VAR_5->bios.r.ebx = 0;
 VAR_5->bios.r.ecx = 0;
 VAR_5->bios.r.edx = 0;
 if (FUNC_0()) {
  VAR_4->ai_batteries = 0xffffffff;
  VAR_4->ai_capabilities = 0xff00;
 } else {
  VAR_4->ai_batteries = VAR_5->bios.r.ebx & 0xff;
  VAR_4->ai_capabilities = VAR_5->bios.r.ecx & 0xff;
 }

 FUNC_2(VAR_4->ai_spare, sizeof VAR_4->ai_spare);

 return 0;
}
