
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dz; scalar_t__ dy; scalar_t__ dx; scalar_t__ obutton; scalar_t__ button; scalar_t__ flags; } ;
struct TYPE_5__ {int rate; int * syncmask; int packetsize; scalar_t__ level; scalar_t__ accelfactor; int resolution; int protocol; } ;
struct TYPE_4__ {scalar_t__ buttons; scalar_t__ hwid; int model; int type; int iftype; } ;
struct ums_softc {scalar_t__ sc_buttons; TYPE_3__ sc_status; TYPE_2__ sc_mode; TYPE_1__ sc_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_0(struct ums_softc *VAR_9)
{



 if (VAR_9->sc_buttons > VAR_3)
  VAR_9->sc_hw.buttons = VAR_3;
 else
  VAR_9->sc_hw.buttons = VAR_9->sc_buttons;

 VAR_9->sc_hw.iftype = VAR_0;
 VAR_9->sc_hw.type = VAR_2;
 VAR_9->sc_hw.model = VAR_1;
 VAR_9->sc_hw.hwid = 0;

 VAR_9->sc_mode.protocol = VAR_7;
 VAR_9->sc_mode.rate = -1;
 VAR_9->sc_mode.resolution = VAR_8;
 VAR_9->sc_mode.accelfactor = 0;
 VAR_9->sc_mode.level = 0;
 VAR_9->sc_mode.packetsize = VAR_4;
 VAR_9->sc_mode.syncmask[0] = VAR_6;
 VAR_9->sc_mode.syncmask[1] = VAR_5;



 VAR_9->sc_status.flags = 0;
 VAR_9->sc_status.button = 0;
 VAR_9->sc_status.obutton = 0;
 VAR_9->sc_status.dx = 0;
 VAR_9->sc_status.dy = 0;
 VAR_9->sc_status.dz = 0;

}
