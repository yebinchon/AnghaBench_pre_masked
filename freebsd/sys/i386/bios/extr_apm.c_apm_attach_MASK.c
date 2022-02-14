
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {struct apm_softc* ah_arg; int ah_fun; } ;
struct TYPE_10__ {int eax; } ;
struct TYPE_8__ {int limit; int base; } ;
struct TYPE_7__ {int limit; int base; } ;
struct TYPE_9__ {TYPE_2__ data; TYPE_1__ code16; } ;
struct TYPE_11__ {TYPE_4__ r; TYPE_3__ seg; int entry; } ;
struct apm_softc {int initialized; int always_halt_cpu; int slow_idle_cpu; int minorversion; int majorversion; TYPE_6__ sc_resume; TYPE_6__ sc_suspend; scalar_t__ running; scalar_t__ suspending; TYPE_5__ bios; scalar_t__ disengaged; int intversion; scalar_t__ disabled; scalar_t__ active; int cv; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct apm_softc VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int,int,int,int) ;
 int FUNC_11 (char*,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int ,int ,int ,int,char*) ;
 int FUNC_14 (int *,int ,char*,int ) ;
 int FUNC_15 (int ,int ,struct apm_softc*) ;
 int VAR_18 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_19)
{
 struct apm_softc *VAR_20 = &VAR_15;
 int VAR_21;

 FUNC_14(&VAR_20->mtx, FUNC_9(VAR_19), "apm", VAR_5);
 FUNC_7(&VAR_20->cv, "cbb cv");

 if (FUNC_8(VAR_19) & 0x20)
  VAR_17 = 1;

 VAR_20->initialized = 0;


 VAR_20->active = 0;


 VAR_20->always_halt_cpu = 1;

 FUNC_11("debug.apm_debug", &VAR_10);


 FUNC_0("apm: APM BIOS version %04lx\n", VAR_16);
 FUNC_0("apm: Code16 0x%08x, Data 0x%08x\n",
     VAR_20->bios.seg.code16.base, VAR_20->bios.seg.data.base);
 FUNC_0("apm: Code entry 0x%08x, Idling CPU %s, Management %s\n",
     VAR_20->bios.entry, FUNC_12(VAR_20->slow_idle_cpu),
     FUNC_12(!VAR_20->disabled));
 FUNC_0("apm: CS_limit=0x%x, DS_limit=0x%x\n",
     VAR_20->bios.seg.code16.limit, VAR_20->bios.seg.data.limit);






 VAR_21 = VAR_16 > 0x102 ? 0x102 : VAR_16;
 for (; VAR_21 > 0x100; VAR_21--)
  if (FUNC_3(VAR_21) == 0)
   break;
 VAR_20->minorversion = ((VAR_21 & 0x00f0) >> 4) * 10 +
  ((VAR_21 & 0x000f) >> 0);
 VAR_20->majorversion = ((VAR_21 & 0xf000) >> 12) * 10 +
  ((VAR_16 & 0x0f00) >> 8);

 VAR_20->intversion = FUNC_2(VAR_20->majorversion, VAR_20->minorversion);

 if (VAR_20->intversion >= FUNC_2(1, 1))
  FUNC_0("apm: Engaged control %s\n", FUNC_12(!VAR_20->disengaged));
 FUNC_10(VAR_19, "found APM BIOS v%ld.%ld, connected at v%d.%d\n",
        ((VAR_16 & 0xf000) >> 12) * 10 + ((VAR_16 & 0x0f00) >> 8),
        ((VAR_16 & 0x00f0) >> 4) * 10 + ((VAR_16 & 0x000f) >> 0),
        VAR_20->majorversion, VAR_20->minorversion);


 FUNC_0("apm: Slow Idling CPU %s\n", FUNC_12(VAR_20->slow_idle_cpu));

 if (VAR_20->disabled) {
  if (FUNC_4(1)) {
   FUNC_0("apm: *Warning* enable function failed! [%x]\n",
       (VAR_20->bios.r.eax >> 8) & 0xff);
  }
 }


 if (VAR_20->intversion >= FUNC_2(1, 1) && VAR_20->disengaged) {
  if (FUNC_5(1)) {
   FUNC_0("apm: *Warning* engage function failed err=[%x]",
       (VAR_20->bios.r.eax >> 8) & 0xff);
   FUNC_0(" (Docked or using external power?).\n");
  }
 }


 FUNC_1(VAR_18, VAR_12, ((void*)0),
         VAR_7);


 FUNC_15(VAR_6, VAR_11, VAR_20);

 VAR_20->initialized = 1;
 VAR_20->suspending = 0;
 VAR_20->running = 0;

 FUNC_13(&VAR_9, VAR_1,
     VAR_8, VAR_4, 0664, "apm");
 FUNC_13(&VAR_9, VAR_0,
     VAR_8, VAR_4, 0660, "apmctl");

 VAR_20->sc_suspend.ah_fun = VAR_14;
 VAR_20->sc_suspend.ah_arg = VAR_20;
 FUNC_6(VAR_3, &VAR_20->sc_suspend);

 VAR_20->sc_resume.ah_fun = VAR_13;
 VAR_20->sc_resume.ah_arg = VAR_20;
 FUNC_6(VAR_2, &VAR_20->sc_resume);

 return 0;
}
