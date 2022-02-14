
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
struct ifnet {int if_drv_flags; int if_flags; TYPE_3__* if_softc; } ;
struct TYPE_11__ {TYPE_2__* chan; TYPE_1__* board; } ;
typedef TYPE_3__ drv_t ;
typedef int caddr_t ;
typedef int bdrv_t ;
struct TYPE_10__ {scalar_t__ debug_shadow; scalar_t__ debug; } ;
struct TYPE_9__ {int * sys; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ifnet*,int ,int ) ;

__attribute__((used)) static int FUNC_10 (struct ifnet *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 drv_t *VAR_5 = VAR_2->if_softc;
 bdrv_t *VAR_6 = VAR_5->board->sys;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = (VAR_2->if_drv_flags & VAR_1) != 0;
 VAR_7 = FUNC_9 (VAR_2, VAR_3, VAR_4);

 if (VAR_7)
  return VAR_7;

 if (! (VAR_2->if_flags & VAR_0))
  VAR_5->chan->debug = 0;
 else
  VAR_5->chan->debug = VAR_5->chan->debug_shadow;

 switch (VAR_3) {
 default: FUNC_1 (VAR_5, ("ioctl 0x%lx\n", VAR_3)); return 0;
 case 131: FUNC_1 (VAR_5, ("ioctl SIOCADDMULTI\n")); return 0;
 case 130: FUNC_1 (VAR_5, ("ioctl SIOCDELMULTI\n")); return 0;
 case 128: FUNC_1 (VAR_5, ("ioctl SIOCSIFFLAGS\n")); break;
 case 129: FUNC_1 (VAR_5, ("ioctl SIOCSIFADDR\n")); break;
 }


 VAR_8 = FUNC_7 ();
 FUNC_2 (VAR_6);
 VAR_10 = (VAR_2->if_drv_flags & VAR_1) != 0;
 if (! VAR_9 && VAR_10) {

  FUNC_6 (VAR_5);
  FUNC_5 (VAR_5);
 } else if (VAR_9 && ! VAR_10) {


  FUNC_4 (VAR_5);
 }
 FUNC_0 (VAR_5, ("ioctl 0x%lx p4\n", VAR_3));
 FUNC_3 (VAR_6);
 FUNC_8 (VAR_8);
 return 0;
}
