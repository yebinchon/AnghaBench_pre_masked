
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct TYPE_3__ {int level; int packetsize; void* protocol; scalar_t__ resolution; } ;
struct TYPE_4__ {int model; } ;
struct cyapa_softc {int zenabled; TYPE_1__ mode; TYPE_2__ hw; } ;
struct cdev {struct cyapa_softc* si_drv1; } ;
typedef TYPE_1__ mousemode_t ;
typedef TYPE_2__ mousehw_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 int FUNC_0 (struct cyapa_softc*) ;
 int FUNC_1 (struct cyapa_softc*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_6, u_long VAR_7, caddr_t VAR_8, int VAR_9, struct thread *VAR_10)
{
 struct cyapa_softc *VAR_11;
 int VAR_12;

 VAR_11 = VAR_6->si_drv1;
 VAR_12 = 0;

 FUNC_0(VAR_11);
 switch (VAR_7) {
 case 131:
  *(mousehw_t *)VAR_8 = VAR_11->hw;
  if (VAR_11->mode.level == 0)
   ((mousehw_t *)VAR_8)->model = VAR_2;
  break;

 case 129:
  *(mousemode_t *)VAR_8 = VAR_11->mode;
  ((mousemode_t *)VAR_8)->resolution =
      VAR_5 - VAR_11->mode.resolution;
  switch (VAR_11->mode.level) {
  case 0:
   ((mousemode_t *)VAR_8)->protocol = VAR_3;
   ((mousemode_t *)VAR_8)->packetsize =
       VAR_4;
   break;
  case 2:
   ((mousemode_t *)VAR_8)->protocol = VAR_3;
   ((mousemode_t *)VAR_8)->packetsize =
       VAR_4 + 1;
   break;
  }
  break;

 case 130:
  *(int *)VAR_8 = VAR_11->mode.level;
  break;

 case 128:
  if ((*(int *)VAR_8 < 0) &&
      (*(int *)VAR_8 > 2)) {
   VAR_12 = VAR_0;
   break;
  }
  VAR_11->mode.level = *(int *)VAR_8 ? 2 : 0;
  VAR_11->zenabled = VAR_11->mode.level ? 1 : 0;
  break;

 default:
  VAR_12 = VAR_1;
  break;
 }
 FUNC_1(VAR_11);

 return (VAR_12);
}
