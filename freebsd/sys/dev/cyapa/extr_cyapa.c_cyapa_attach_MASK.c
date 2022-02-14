
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int ich_arg; int ich_func; } ;
struct TYPE_8__ {int rate; int resolution; int accelfactor; int packetsize; scalar_t__ level; int protocol; } ;
struct TYPE_7__ {int buttons; int hwid; int model; int type; int iftype; } ;
struct TYPE_6__ {int si_note; } ;
struct cyapa_softc {int reporting_mode; int cap_resx; int cap_resy; int cap_phyx; int cap_phyy; int cap_buttons; TYPE_4__* devnode; int mutex; TYPE_5__ intr_hook; int dev; TYPE_3__ mode; TYPE_2__ hw; TYPE_1__ selinfo; } ;
struct cyapa_cap {int max_abs_xy_high; int max_abs_x_low; int max_abs_y_low; int phy_siz_xy_high; int phy_siz_x_low; int phy_siz_y_low; int buttons; int prod_idc; int prod_idb; int prod_ida; } ;
typedef int device_t ;
struct TYPE_9__ {struct cyapa_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct cyapa_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,char,char,char,int,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct cyapa_cap*,int ) ;
 int FUNC_6 (int *,int *) ;
 TYPE_4__* FUNC_7 (int *,int,int ,int ,int,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_15)
{
 struct cyapa_softc *VAR_16;
 struct cyapa_cap VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_16 = FUNC_1(VAR_15);
 VAR_16->reporting_mode = 1;

 VAR_18 = FUNC_2(VAR_15);
 VAR_19 = FUNC_4(VAR_15);

 if (FUNC_5(VAR_15, &VAR_17, 0))
  return (VAR_4);

 FUNC_9(&VAR_16->mutex, "cyapa", ((void*)0), VAR_11);

 VAR_16->dev = VAR_15;

 FUNC_6(&VAR_16->selinfo.si_note, &VAR_16->mutex);

 VAR_16->cap_resx = ((VAR_17.max_abs_xy_high << 4) & 0x0F00) |
     VAR_17.max_abs_x_low;
 VAR_16->cap_resy = ((VAR_17.max_abs_xy_high << 8) & 0x0F00) |
     VAR_17.max_abs_y_low;
 VAR_16->cap_phyx = ((VAR_17.phy_siz_xy_high << 4) & 0x0F00) |
     VAR_17.phy_siz_x_low;
 VAR_16->cap_phyy = ((VAR_17.phy_siz_xy_high << 8) & 0x0F00) |
     VAR_17.phy_siz_y_low;
 VAR_16->cap_buttons = VAR_17.buttons;

 FUNC_3(VAR_15, "%5.5s-%6.6s-%2.2s buttons=%c%c%c res=%dx%d\n",
     VAR_17.prod_ida, VAR_17.prod_idb, VAR_17.prod_idc,
     ((VAR_17.buttons & VAR_0) ? 'L' : '-'),
     ((VAR_17.buttons & VAR_1) ? 'M' : '-'),
     ((VAR_17.buttons & VAR_2) ? 'R' : '-'),
     VAR_16->cap_resx, VAR_16->cap_resy);

 VAR_16->hw.buttons = 5;
 VAR_16->hw.iftype = VAR_6;
 VAR_16->hw.type = VAR_8;
 VAR_16->hw.model = VAR_7;
 VAR_16->hw.hwid = VAR_19;

 VAR_16->mode.protocol = VAR_9;
 VAR_16->mode.rate = 100;
 VAR_16->mode.resolution = 4;
 VAR_16->mode.accelfactor = 1;
 VAR_16->mode.level = 0;
 VAR_16->mode.packetsize = VAR_10;

 VAR_16->intr_hook.ich_func = VAR_14;
 VAR_16->intr_hook.ich_arg = VAR_16->dev;


 if (FUNC_0(&VAR_16->intr_hook) != 0) {
  FUNC_8(&VAR_16->mutex);
  return (VAR_3);
 }

 VAR_16->devnode = FUNC_7(&VAR_13, VAR_18,
     VAR_12, VAR_5, 0600, "cyapa%d", VAR_18);

 VAR_16->devnode->si_drv1 = VAR_16;

 return (0);
}
