
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_10__ {int infoMajor; } ;
typedef TYPE_2__ synapticshw_t ;
struct thread {int dummy; } ;
struct TYPE_15__ {int hwid; int model; int type; int iftype; int buttons; } ;
struct TYPE_14__ {int level; int rate; int resolution; int accelfactor; void* protocol; int * syncmask; int packetsize; } ;
struct TYPE_9__ {int rate; int resolution; } ;
struct TYPE_13__ {int dz; int dy; int dx; int button; int obutton; int flags; } ;
struct psm_softc {int flags; int async; TYPE_7__ hw; int kbdc; TYPE_6__ mode; TYPE_1__ dflt_mode; TYPE_5__ status; TYPE_2__ synhw; } ;
struct cdev {struct psm_softc* si_drv1; } ;
struct TYPE_11__ {int rate; int resolution; int accelfactor; void* protocol; } ;
typedef TYPE_3__ old_mousemode_t ;
struct TYPE_12__ {int hwid; int type; int iftype; int buttons; } ;
typedef TYPE_4__ old_mousehw_t ;
typedef TYPE_5__ mousestatus_t ;
typedef TYPE_6__ mousemode_t ;
typedef TYPE_7__ mousehw_t ;
struct TYPE_16__ {int len; int* buf; } ;
typedef TYPE_8__ mousedata_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;


 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct psm_softc*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,int,int) ;
 void* FUNC_5 (int ,void*) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct psm_softc*,int) ;

__attribute__((used)) static int
FUNC_11(struct cdev *VAR_19, u_long VAR_20, caddr_t VAR_21, int VAR_22,
    struct thread *VAR_23)
{
 struct psm_softc *VAR_24 = VAR_19->si_drv1;
 mousemode_t VAR_25;
 mousestatus_t VAR_26;
 mousedata_t *VAR_27;
 int VAR_28[3];
 int VAR_29;
 int VAR_30 = 0;
 int VAR_31;


 switch (VAR_20) {

 case 133:
  VAR_31 = FUNC_8();
  ((old_mousehw_t *)VAR_21)->buttons = VAR_24->hw.buttons;
  ((old_mousehw_t *)VAR_21)->iftype = VAR_24->hw.iftype;
  ((old_mousehw_t *)VAR_21)->type = VAR_24->hw.type;
  ((old_mousehw_t *)VAR_21)->hwid = VAR_24->hw.hwid & 0x00ff;
  FUNC_9(VAR_31);
  break;

 case 145:
  VAR_31 = FUNC_8();
  *(mousehw_t *)VAR_21 = VAR_24->hw;
  if (VAR_24->mode.level == 130)
   ((mousehw_t *)VAR_21)->model = VAR_3;
  FUNC_9(VAR_31);
  break;

 case 134:
  VAR_31 = FUNC_8();
  if (VAR_24->synhw.infoMajor >= 4)
   *(synapticshw_t *)VAR_21 = VAR_24->synhw;
  else
   VAR_30 = VAR_0;
  FUNC_9(VAR_31);
  break;

 case 132:
  VAR_31 = FUNC_8();
  switch (VAR_24->mode.level) {
  case 130:
   ((old_mousemode_t *)VAR_21)->protocol = VAR_4;
   break;
  case 128:
   ((old_mousemode_t *)VAR_21)->protocol =
       VAR_5;
   break;
  case 129:
   ((old_mousemode_t *)VAR_21)->protocol = VAR_4;
   break;
  }
  ((old_mousemode_t *)VAR_21)->rate = VAR_24->mode.rate;
  ((old_mousemode_t *)VAR_21)->resolution = VAR_24->mode.resolution;
  ((old_mousemode_t *)VAR_21)->accelfactor = VAR_24->mode.accelfactor;
  FUNC_9(VAR_31);
  break;

 case 143:
  VAR_31 = FUNC_8();
  *(mousemode_t *)VAR_21 = VAR_24->mode;
  if ((VAR_24->flags & VAR_17) != 0) {
   ((mousemode_t *)VAR_21)->syncmask[0] = 0;
   ((mousemode_t *)VAR_21)->syncmask[1] = 0;
  }
  ((mousemode_t *)VAR_21)->resolution =
   VAR_9 - VAR_24->mode.resolution;
  switch (VAR_24->mode.level) {
  case 130:
   ((mousemode_t *)VAR_21)->protocol = VAR_4;
   ((mousemode_t *)VAR_21)->packetsize =
       VAR_6;
   break;
  case 128:
   ((mousemode_t *)VAR_21)->protocol = VAR_5;
   ((mousemode_t *)VAR_21)->packetsize =
       VAR_12;
   ((mousemode_t *)VAR_21)->syncmask[0] = VAR_14;
   ((mousemode_t *)VAR_21)->syncmask[1] = VAR_13;
   break;
  case 129:

   ((mousemode_t *)VAR_21)->protocol = VAR_4;
   break;
  }
  FUNC_9(VAR_31);
  break;

 case 131:
 case 138:
  if (VAR_20 == 131) {
   VAR_25.rate = ((old_mousemode_t *)VAR_21)->rate;
   if (((old_mousemode_t *)VAR_21)->resolution > 0)
    VAR_25.resolution =
        -((old_mousemode_t *)VAR_21)->resolution - 1;
   else
    VAR_25.resolution = 0;
   VAR_25.accelfactor =
       ((old_mousemode_t *)VAR_21)->accelfactor;
   VAR_25.level = -1;
  } else
   VAR_25 = *(mousemode_t *)VAR_21;


  if (VAR_25.rate > VAR_18)
   return (VAR_0);
  if (VAR_25.rate == 0)
   VAR_25.rate = VAR_24->dflt_mode.rate;
  else if (VAR_25.rate == -1)

   ;
  else if (VAR_25.rate < 0)
   return (VAR_0);
  if (VAR_25.resolution >= VAR_18)
   return (VAR_0);
  if (VAR_25.resolution >= 200)
   VAR_25.resolution = VAR_8;
  else if (VAR_25.resolution >= 100)
   VAR_25.resolution = VAR_10;
  else if (VAR_25.resolution >= 50)
   VAR_25.resolution = VAR_11;
  else if (VAR_25.resolution > 0)
   VAR_25.resolution = VAR_9;
  if (VAR_25.resolution == VAR_7)
   VAR_25.resolution = VAR_24->dflt_mode.resolution;
  else if (VAR_25.resolution == -1)

   ;
  else if (VAR_25.resolution < 0)
   VAR_25.resolution = VAR_9 - VAR_25.resolution;
  if (VAR_25.level == -1)

   VAR_25.level = VAR_24->mode.level;
  else if ((VAR_25.level < VAR_16) ||
      (VAR_25.level > VAR_15))
   return (VAR_0);
  if (VAR_25.accelfactor == -1)

   VAR_25.accelfactor = VAR_24->mode.accelfactor;
  else if (VAR_25.accelfactor < 0)
   return (VAR_0);


  VAR_30 = FUNC_0(VAR_24, &VAR_29);
  if (VAR_30)
   return (VAR_30);


  if (VAR_25.rate > 0)
   VAR_25.rate = FUNC_6(VAR_24->kbdc,
       VAR_25.rate);
  if (VAR_25.resolution >= 0)
   VAR_25.resolution =
       FUNC_5(VAR_24->kbdc, VAR_25.resolution);
  FUNC_7(VAR_24->kbdc, 1);
  FUNC_4(VAR_24->kbdc, VAR_28, 0, 3);

  VAR_31 = FUNC_8();
  VAR_24->mode.rate = VAR_25.rate;
  VAR_24->mode.resolution = VAR_25.resolution;
  VAR_24->mode.accelfactor = VAR_25.accelfactor;
  VAR_24->mode.level = VAR_25.level;
  FUNC_9(VAR_31);

  FUNC_10(VAR_24, VAR_29);
  break;

 case 144:
  *(int *)VAR_21 = VAR_24->mode.level;
  break;

 case 139:
  if ((*(int *)VAR_21 < VAR_16) ||
      (*(int *)VAR_21 > VAR_15))
   return (VAR_0);
  VAR_24->mode.level = *(int *)VAR_21;
  break;

 case 142:
  VAR_31 = FUNC_8();
  VAR_26 = VAR_24->status;
  VAR_24->status.flags = 0;
  VAR_24->status.obutton = VAR_24->status.button;
  VAR_24->status.button = 0;
  VAR_24->status.dx = 0;
  VAR_24->status.dy = 0;
  VAR_24->status.dz = 0;
  FUNC_9(VAR_31);
  *(mousestatus_t *)VAR_21 = VAR_26;
  break;

 case 140:
 case 141:
  VAR_27 = (mousedata_t *)VAR_21;
  if (VAR_27->len > sizeof(VAR_27->buf)/sizeof(VAR_27->buf[0]))
   return (VAR_0);

  VAR_30 = FUNC_0(VAR_24, &VAR_29);
  if (VAR_30)
   return (VAR_30);
  if ((VAR_27->len = FUNC_4(VAR_24->kbdc, VAR_27->buf,
      (VAR_20 == 141) ? 1 : 0, VAR_27->len)) <= 0)
   VAR_30 = VAR_1;
  FUNC_10(VAR_24, VAR_29);
  break;


 case 136:
  VAR_25.resolution = *(int *)VAR_21;
  if (VAR_25.resolution >= VAR_18)
   return (VAR_0);
  else if (VAR_25.resolution >= 200)
   VAR_25.resolution = VAR_8;
  else if (VAR_25.resolution >= 100)
   VAR_25.resolution = VAR_10;
  else if (VAR_25.resolution >= 50)
   VAR_25.resolution = VAR_11;
  else if (VAR_25.resolution > 0)
   VAR_25.resolution = VAR_9;
  if (VAR_25.resolution == VAR_7)
   VAR_25.resolution = VAR_24->dflt_mode.resolution;
  else if (VAR_25.resolution == -1)
   VAR_25.resolution = VAR_24->mode.resolution;
  else if (VAR_25.resolution < 0)
   VAR_25.resolution = VAR_9 - VAR_25.resolution;

  VAR_30 = FUNC_0(VAR_24, &VAR_29);
  if (VAR_30)
   return (VAR_30);
  VAR_24->mode.resolution =
      FUNC_5(VAR_24->kbdc, VAR_25.resolution);
  if (VAR_24->mode.resolution != VAR_25.resolution)
   VAR_30 = VAR_1;
  FUNC_10(VAR_24, VAR_29);
  break;



 case 137:
  VAR_25.rate = *(int *)VAR_21;
  if (VAR_25.rate > VAR_18)
   return (VAR_0);
  if (VAR_25.rate == 0)
   VAR_25.rate = VAR_24->dflt_mode.rate;
  else if (VAR_25.rate < 0)
   VAR_25.rate = VAR_24->mode.rate;

  VAR_30 = FUNC_0(VAR_24, &VAR_29);
  if (VAR_30)
   return (VAR_30);
  VAR_24->mode.rate = FUNC_6(VAR_24->kbdc, VAR_25.rate);
  if (VAR_24->mode.rate != VAR_25.rate)
   VAR_30 = VAR_1;
  FUNC_10(VAR_24, VAR_29);
  break;



 case 135:
  if ((*(int *)VAR_21 <= 0) || (*(int *)VAR_21 > 2))
   return (VAR_0);

  VAR_30 = FUNC_0(VAR_24, &VAR_29);
  if (VAR_30)
   return (VAR_30);
  if (!FUNC_7(VAR_24->kbdc, *(int *)VAR_21))
   VAR_30 = VAR_1;
  FUNC_10(VAR_24, VAR_29);
  break;



 case 146:
  VAR_30 = FUNC_0(VAR_24, &VAR_29);
  if (VAR_30)
   return (VAR_30);
  VAR_24->hw.hwid &= ~0x00ff;
  VAR_24->hw.hwid |= FUNC_3(VAR_24->kbdc);
  *(int *)VAR_21 = VAR_24->hw.hwid & 0x00ff;
  FUNC_10(VAR_24, VAR_29);
  break;


 case 148:
 case 150:
  break;
 case 147:
  VAR_30 = FUNC_2(*(int *)VAR_21, &VAR_24->async);
  break;
 case 149:
  *(int *) VAR_21 = FUNC_1(&VAR_24->async);
  break;
 default:
  return (VAR_2);
 }

 return (VAR_30);
}
