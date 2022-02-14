
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_4__ {int level; int packetsize; } ;
struct adb_mouse_softc {int buttons; int last_buttons; int sc_mtx; int ydelta; int xdelta; TYPE_2__ mode; int hw; } ;
struct TYPE_3__ {int button; int obutton; int flags; int dz; int dy; int dx; } ;
typedef TYPE_1__ mousestatus_t ;
typedef TYPE_2__ mousemode_t ;
typedef int mousehw_t ;
typedef scalar_t__ caddr_t ;


 struct adb_mouse_softc* FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8,
    struct thread *VAR_9)
{
 struct adb_mouse_softc *VAR_10;
 mousemode_t VAR_11;

 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 switch (VAR_6) {
 case 133:
  *(mousehw_t *)VAR_7 = VAR_10->hw;
  break;
 case 131:
  *(mousemode_t *)VAR_7 = VAR_10->mode;
  break;
 case 128:
  VAR_11 = *(mousemode_t *)VAR_7;
  VAR_7 = (caddr_t)&VAR_11.level;



 case 129:
  if (*(int *)VAR_7 == -1)
   break;
  else if (*(int *)VAR_7 == 1) {
   VAR_10->mode.level = 1;
   VAR_10->mode.packetsize = 8;
   break;
  } else if (*(int *)VAR_7 == 0) {
   VAR_10->mode.level = 0;
   VAR_10->mode.packetsize = 5;
   break;
  }

  return VAR_0;
 case 132:
  *(int *)VAR_7 = VAR_10->mode.level;
  break;

 case 130: {
  mousestatus_t *VAR_12 = (mousestatus_t *) VAR_7;

  FUNC_1(&VAR_10->sc_mtx);

  VAR_12->button = VAR_10->buttons;
  VAR_12->obutton = VAR_10->last_buttons;

  VAR_12->flags = VAR_12->button ^ VAR_12->obutton;

  if (VAR_10->xdelta != 0 || VAR_10->ydelta)
   VAR_12->flags |= VAR_4;
  if (VAR_12->button != VAR_12->obutton)
   VAR_12->flags |= VAR_3;

  VAR_12->dx = VAR_10->xdelta;
  VAR_12->dy = VAR_10->ydelta;
  VAR_12->dz = 0;

  VAR_10->xdelta = 0;
  VAR_10->ydelta = 0;
  VAR_10->last_buttons = VAR_10->buttons;

  FUNC_2(&VAR_10->sc_mtx);

  break; }
 default:
  return VAR_2;
 }

 return (0);
}
