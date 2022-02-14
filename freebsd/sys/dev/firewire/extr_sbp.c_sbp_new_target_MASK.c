
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int w ;
struct TYPE_7__ {int dev; } ;
struct sbp_softc {TYPE_4__* targets; TYPE_2__ fd; } ;
struct TYPE_8__ {scalar_t__ lo; int hi; } ;
struct fw_device {TYPE_3__ eui; } ;
struct TYPE_6__ {scalar_t__ lo; int hi; } ;
struct TYPE_10__ {int bus; size_t target; TYPE_1__ eui; } ;
struct TYPE_9__ {int * fwdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int ,scalar_t__) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct sbp_softc *VAR_2, struct fw_device *VAR_3)
{
 int VAR_4, VAR_5, VAR_6=-1;
 char VAR_7[VAR_0];

 FUNC_0(VAR_7, sizeof(VAR_7));
 VAR_4 = FUNC_1(VAR_2->fd.dev);



 for (VAR_5 = 0; VAR_1[VAR_5].bus >= 0; VAR_5++) {
  if (VAR_1[VAR_5].bus == VAR_4) {
   VAR_7[VAR_1[VAR_5].target] = 1;
   if (VAR_1[VAR_5].eui.hi == VAR_3->eui.hi &&
     VAR_1[VAR_5].eui.lo == VAR_3->eui.lo)
    VAR_6 = VAR_1[VAR_5].target;
  }
 }
 if (VAR_6 >= 0) {
  if (VAR_6 < VAR_0 &&
    VAR_2->targets[VAR_6].fwdev == ((void*)0))
   return (VAR_6);
  FUNC_2(VAR_2->fd.dev,
   "target %d is not free for %08x:%08x\n",
   VAR_6, VAR_3->eui.hi, VAR_3->eui.lo);
  VAR_6 = -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_2->targets[VAR_5].fwdev == ((void*)0) && VAR_7[VAR_5] == 0) {
   VAR_6 = VAR_5;
   break;
  }

 return VAR_6;
}
