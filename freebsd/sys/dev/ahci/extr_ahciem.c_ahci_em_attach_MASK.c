
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_devq {int dummy; } ;
struct ahci_enclosure {int channels; int ichannels; int capsem; int mtx; int * r_memc; int * r_memt; int * r_memr; int * sim; TYPE_1__* leds; int path; int quirks; void* dev; } ;
struct ahci_controller {int channels; int ichannels; int quirks; } ;
typedef void* device_t ;
typedef int buf ;
struct TYPE_2__ {int num; void* led; void* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 void* FUNC_2 (void*,int ,int*,int ) ;
 int FUNC_3 (void*,int ,int,int *) ;
 int * FUNC_4 (int ,int ,char*,struct ahci_enclosure*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct cam_devq* FUNC_7 (int) ;
 int FUNC_8 (struct cam_devq*) ;
 char* FUNC_9 (void*) ;
 void* FUNC_10 (void*) ;
 void* FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*,char*,...) ;
 void* FUNC_14 (int ,TYPE_1__*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,int,char*,char*,int) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int *,void*,int ) ;
 scalar_t__ FUNC_22 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_24)
{
 device_t VAR_25 = FUNC_10(VAR_24);
 struct ahci_controller *VAR_26 = FUNC_11(VAR_25);
 struct ahci_enclosure *VAR_27 = FUNC_11(VAR_24);
 struct cam_devq *VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 char VAR_33[32];

 VAR_27->dev = VAR_24;
 VAR_27->quirks = VAR_26->quirks;
 VAR_27->channels = VAR_26->channels;
 VAR_27->ichannels = VAR_26->ichannels;
 FUNC_16(&VAR_27->mtx, "AHCI enclosure lock", ((void*)0), VAR_16);
 VAR_31 = 0;
 if (!(VAR_27->r_memc = FUNC_2(VAR_24, VAR_18,
     &VAR_31, VAR_17))) {
  FUNC_15(&VAR_27->mtx);
  return (VAR_15);
 }
 VAR_27->capsem = FUNC_0(VAR_27->r_memc, 0);
 VAR_31 = 1;
 if (!(VAR_27->r_memt = FUNC_2(VAR_24, VAR_18,
     &VAR_31, VAR_17))) {
  VAR_32 = VAR_15;
  goto err0;
 }
 if ((VAR_27->capsem & (VAR_7 | VAR_6)) == 0) {
  VAR_31 = 2;
  if (!(VAR_27->r_memr = FUNC_2(VAR_24, VAR_18,
      &VAR_31, VAR_17))) {
   VAR_32 = VAR_15;
   goto err0;
  }
 } else
  VAR_27->r_memr = ((void*)0);
 FUNC_17(&VAR_27->mtx);
 if (FUNC_1(VAR_24) != 0) {
     VAR_32 = VAR_15;
     goto err1;
 }
 VAR_31 = VAR_9;

 VAR_28 = FUNC_7(1);
 if (VAR_28 == ((void*)0)) {
  FUNC_13(VAR_24, "Unable to allocate SIM queue\n");
  VAR_32 = VAR_14;
  goto err1;
 }

 VAR_27->sim = FUNC_4(VAR_21, VAR_22, "ahciem", VAR_27,
     FUNC_12(VAR_24), &VAR_27->mtx,
     1, 0, VAR_28);
 if (VAR_27->sim == ((void*)0)) {
  FUNC_8(VAR_28);
  FUNC_13(VAR_24, "Unable to allocate SIM\n");
  VAR_32 = VAR_14;
  goto err1;
 }
 if (FUNC_21(VAR_27->sim, VAR_24, 0) != VAR_12) {
  FUNC_13(VAR_24, "unable to register xpt bus\n");
  VAR_32 = VAR_15;
  goto err2;
 }
 if (FUNC_22(&VAR_27->path, ((void*)0), FUNC_6(VAR_27->sim),
     VAR_13, VAR_10) != VAR_11) {
  FUNC_13(VAR_24, "Unable to create path\n");
  VAR_32 = VAR_15;
  goto err3;
 }
 FUNC_18(&VAR_27->mtx);
 if (VAR_23) {
  FUNC_13(VAR_24, "Caps:%s%s%s%s%s%s%s%s\n",
      (VAR_27->capsem & VAR_2) ? " PM":"",
      (VAR_27->capsem & VAR_0) ? " ALHD":"",
      (VAR_27->capsem & VAR_7) ? " XMT":"",
      (VAR_27->capsem & VAR_6) ? " SMB":"",
      (VAR_27->capsem & VAR_5) ? " SGPIO":"",
      (VAR_27->capsem & VAR_4) ? " SES-2":"",
      (VAR_27->capsem & VAR_3) ? " SAF-TE":"",
      (VAR_27->capsem & VAR_1) ? " LED":"");
 }
 if ((VAR_27->capsem & VAR_1)) {
  for (VAR_30 = 0; VAR_30 < VAR_27->channels; VAR_30++) {
   if ((VAR_27->ichannels & (1 << VAR_30)) == 0)
    continue;
   for (VAR_29 = 0; VAR_29 < VAR_8; VAR_29++) {
    VAR_27->leds[VAR_30 * VAR_8 + VAR_29].dev = VAR_24;
    VAR_27->leds[VAR_30 * VAR_8 + VAR_29].num =
        VAR_30 * VAR_8 + VAR_29;
   }
   if ((VAR_27->capsem & VAR_0) == 0) {
    FUNC_19(VAR_33, sizeof(VAR_33), "%s.%d.act",
        FUNC_9(VAR_25), VAR_30);
    VAR_27->leds[VAR_30 * VAR_8 + 0].led =
        FUNC_14(VAR_20,
        &VAR_27->leds[VAR_30 * VAR_8 + 0], VAR_33);
   }
   FUNC_19(VAR_33, sizeof(VAR_33), "%s.%d.locate",
       FUNC_9(VAR_25), VAR_30);
   VAR_27->leds[VAR_30 * VAR_8 + 1].led =
       FUNC_14(VAR_20,
       &VAR_27->leds[VAR_30 * VAR_8 + 1], VAR_33);
   FUNC_19(VAR_33, sizeof(VAR_33), "%s.%d.fault",
       FUNC_9(VAR_25), VAR_30);
   VAR_27->leds[VAR_30 * VAR_8 + 2].led =
       FUNC_14(VAR_20,
       &VAR_27->leds[VAR_30 * VAR_8 + 2], VAR_33);
  }
 }
 return (0);

err3:
 FUNC_20(FUNC_6(VAR_27->sim));
err2:
 FUNC_5(VAR_27->sim, VAR_19);
err1:
 FUNC_18(&VAR_27->mtx);
 if (VAR_27->r_memr)
  FUNC_3(VAR_24, VAR_18, 2, VAR_27->r_memr);
err0:
 if (VAR_27->r_memt)
  FUNC_3(VAR_24, VAR_18, 1, VAR_27->r_memt);
 FUNC_3(VAR_24, VAR_18, 0, VAR_27->r_memc);
 FUNC_15(&VAR_27->mtx);
 return (VAR_32);
}
