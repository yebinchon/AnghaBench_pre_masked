
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int buttons; int model; int hwid; void* type; int iftype; } ;
struct TYPE_4__ {int rate; int resolution; int packetsize; scalar_t__ level; scalar_t__ accelfactor; int protocol; } ;
struct adb_mouse_softc {TYPE_3__* cdev; scalar_t__ flags; TYPE_2__ hw; TYPE_1__ mode; scalar_t__ packet_read_len; scalar_t__ last_buttons; scalar_t__ button_buf; scalar_t__ sc_tapping; scalar_t__ buttons; int sc_cv; int sc_mtx; int sc_dev; } ;
typedef int device_t ;
struct TYPE_6__ {struct adb_mouse_softc* si_drv1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_11 ;
 int FUNC_5 (int *,char*) ;
 struct adb_mouse_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 TYPE_3__* FUNC_9 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_12)
{
 struct adb_mouse_softc *VAR_13;
 char *VAR_14 = "Unknown Pointing Device";

 size_t VAR_15;
 u_char VAR_16[8];

 VAR_13 = FUNC_6(VAR_12);
 VAR_13->sc_dev = VAR_12;

 FUNC_11(&VAR_13->sc_mtx, "ams", ((void*)0), VAR_9);
 FUNC_5(&VAR_13->sc_cv,"ams");

 VAR_13->flags = 0;

 VAR_13->hw.buttons = 2;
 VAR_13->hw.iftype = VAR_3;
 VAR_13->hw.type = VAR_8;
 VAR_13->hw.model = VAR_13->hw.hwid = 0;

 VAR_13->mode.protocol = VAR_6;
 VAR_13->mode.rate = -1;
 VAR_13->mode.resolution = 100;
 VAR_13->mode.accelfactor = 0;
 VAR_13->mode.level = 0;
 VAR_13->mode.packetsize = 5;

 VAR_13->buttons = 0;
 VAR_13->sc_tapping = 0;
 VAR_13->button_buf = 0;
 VAR_13->last_buttons = 0;
 VAR_13->packet_read_len = 0;


 FUNC_4(VAR_12,4);

 switch(FUNC_0(VAR_12)) {
 case 1:
  VAR_13->mode.resolution = 100;
  break;
 case 2:
  VAR_13->mode.resolution = 200;
  break;
 case 4:
  VAR_15 = FUNC_2(VAR_12,1,VAR_16);
  if (VAR_15 < 8)
   break;

  VAR_13->flags |= VAR_0;
  FUNC_10(&VAR_13->hw.hwid,VAR_16,4);
  VAR_13->mode.resolution = (VAR_16[4] << 8) | VAR_16[5];

  switch (VAR_16[6]) {
  case 0:
   VAR_13->hw.type = VAR_5;
   VAR_14 = "Tablet";
   break;
  case 1:
   VAR_13->hw.type = VAR_4;
   VAR_14 = "Mouse";
   break;
  case 2:
   VAR_13->hw.type = VAR_7;
   VAR_14 = "Trackball";
   break;
  case 3:
   VAR_13->flags |= VAR_1;
   VAR_13->hw.type = VAR_5;
   FUNC_1(VAR_12);
   VAR_14 = "Touchpad";
   break;
  }

  VAR_13->hw.buttons = VAR_16[7];

  FUNC_8(VAR_12,"%d-button %d-dpi %s\n",
      VAR_13->hw.buttons, VAR_13->mode.resolution,VAR_14);
  if (VAR_13->hw.hwid == 0x4b4f4954) {
   FUNC_4(VAR_12,0x42);

   if (FUNC_0(VAR_12) == 0x42) {
    FUNC_8(VAR_12, "MacAlly 2-Button Mouse\n");
    VAR_13->flags &= ~VAR_0;
   }
  }

  break;
 }

 VAR_13->cdev = FUNC_9(&VAR_11, FUNC_7(VAR_12),
         VAR_10, VAR_2, 0644, "ams%d",
         FUNC_7(VAR_12));
 VAR_13->cdev->si_drv1 = VAR_13;

 FUNC_3(VAR_12,1);

 return (0);
}
