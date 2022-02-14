
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_5__ {int dz; int dy; int dx; int button; int obutton; int flags; } ;
typedef TYPE_1__ mousestatus_t ;
struct TYPE_6__ {int rate; int resolution; int level; int * syncmask; int packetsize; int protocol; int accelfactor; } ;
typedef TYPE_2__ mousemode_t ;
struct TYPE_7__ {int buttons; int hwid; int model; int type; int iftype; } ;
typedef TYPE_3__ mousehw_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;




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
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__ VAR_18 ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_19, u_long VAR_20, caddr_t VAR_21, int VAR_22,
    struct thread *VAR_23)
{

 switch (VAR_20) {
 case 138:
  FUNC_4(&VAR_16);
  if (*(int *)VAR_21)
   VAR_14 |= VAR_13;
  else
   VAR_14 &= ~VAR_13;
  FUNC_5(&VAR_16);
  return (0);
 case 136:
  return (0);
 case 137:
  *(int *)VAR_21 = FUNC_2(&VAR_17);
  return (0);
 case 135:
  return (FUNC_3(*(int *)VAR_21, &VAR_17));
 case 134: {
  mousehw_t *VAR_24 = (mousehw_t *)VAR_21;

  VAR_24->buttons = 10;
  VAR_24->iftype = VAR_2;
  VAR_24->type = VAR_4;
  VAR_24->model = VAR_3;
  VAR_24->hwid = 0;

  return (0);
 }
 case 133:
  *(int *)VAR_21 = VAR_15;
  return (0);
 case 132: {
  mousemode_t *VAR_25 = (mousemode_t *)VAR_21;

  VAR_25->rate = -1;
  VAR_25->resolution = -1;
  VAR_25->accelfactor = 0;
  VAR_25->level = VAR_15;

  switch (VAR_25->level) {
  case 0:
   VAR_25->protocol = VAR_8;
   VAR_25->packetsize = VAR_5;
   VAR_25->syncmask[0] = VAR_7;
   VAR_25->syncmask[1] = VAR_6;
   break;
  case 1:
   VAR_25->protocol = VAR_9;
   VAR_25->packetsize = VAR_10;
   VAR_25->syncmask[0] = VAR_12;
   VAR_25->syncmask[1] = VAR_11;
   break;
  }

  return (0);
 }
 case 131:
  FUNC_4(&VAR_16);
  *(mousestatus_t *)VAR_21 = VAR_18;

  VAR_18.flags = 0;
  VAR_18.obutton = VAR_18.button;
  VAR_18.dx = 0;
  VAR_18.dy = 0;
  VAR_18.dz = 0;
  FUNC_5(&VAR_16);

  return (0);
 case 129: {
  int VAR_26;

  VAR_26 = *(int *)VAR_21;
  if (VAR_26 != 0 && VAR_26 != 1)
   return (VAR_0);

  VAR_15 = VAR_26;
  return (0);
 }
 case 128: {
  mousemode_t *VAR_27 = (mousemode_t *)VAR_21;

  switch (VAR_27->level) {
  case -1:

   break;
  case 0:
  case 1:
   VAR_15 = VAR_27->level;
   break;
  default:
   return (VAR_0);
  }

  return (0);
 }
 case 130:
  return (0);
 default:




  return (VAR_1);
 }
}
