
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_5__ {int dz; int dy; int dx; int button; int obutton; int flags; } ;
typedef TYPE_1__ mousestatus_t ;
struct TYPE_6__ {int level; int rate; int resolution; int * syncmask; int packetsize; int accelfactor; int protocol; } ;
typedef TYPE_2__ mousemode_t ;
struct TYPE_7__ {int buttons; int hwid; int model; int type; int iftype; } ;
typedef TYPE_3__ mousehw_t ;
typedef scalar_t__ caddr_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;

__attribute__((used)) static int
FUNC_0(struct tty *VAR_16, u_long VAR_17, caddr_t VAR_18, struct thread *VAR_19)
{
 mousehw_t *VAR_20;
 mousemode_t *VAR_21;

 switch (VAR_17) {

 case 135:
  VAR_20 = (mousehw_t *)VAR_18;
  VAR_20->buttons = 10;
  VAR_20->iftype = VAR_3;
  VAR_20->type = VAR_5;
  VAR_20->model = VAR_4;
  VAR_20->hwid = 0;
  return 0;

 case 133:
  VAR_21 = (mousemode_t *)VAR_18;
  VAR_21->level = VAR_14;
  switch (VAR_21->level) {
  case 0:
   VAR_21->protocol = VAR_9;
   VAR_21->rate = -1;
   VAR_21->resolution = -1;
   VAR_21->accelfactor = 0;
   VAR_21->packetsize = VAR_6;
   VAR_21->syncmask[0] = VAR_8;
   VAR_21->syncmask[1] = VAR_7;
   break;

  case 1:
   VAR_21->protocol = VAR_10;
   VAR_21->rate = -1;
   VAR_21->resolution = -1;
   VAR_21->accelfactor = 0;
   VAR_21->packetsize = VAR_11;
   VAR_21->syncmask[0] = VAR_13;
   VAR_21->syncmask[1] = VAR_12;
   break;
  }
  return 0;

 case 128:
  VAR_21 = (mousemode_t *)VAR_18;
  if (VAR_21->level == -1)
   ;
  else if ((VAR_21->level < 0) || (VAR_21->level > 1))
   return VAR_0;
  else
   VAR_14 = VAR_21->level;
  return 0;

 case 134:
  *(int *)VAR_18 = VAR_14;
  return 0;

 case 129:
  if ((*(int *)VAR_18 < 0) || (*(int *)VAR_18 > 1))
   return VAR_0;
  VAR_14 = *(int *)VAR_18;
  return 0;

 case 132:
  *(mousestatus_t *)VAR_18 = VAR_15;
  VAR_15.flags = 0;
  VAR_15.obutton = VAR_15.button;
  VAR_15.dx = 0;
  VAR_15.dy = 0;
  VAR_15.dz = 0;
  return 0;

 case 130:
 case 131:
  return VAR_1;
 }

 return (VAR_2);
}
