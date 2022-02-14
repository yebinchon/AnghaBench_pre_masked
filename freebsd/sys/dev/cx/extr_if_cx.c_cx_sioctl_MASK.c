
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct ifnet {int if_drv_flags; int if_flags; TYPE_3__* if_softc; } ;
struct TYPE_10__ {TYPE_2__* chan; TYPE_1__* board; } ;
typedef TYPE_3__ drv_t ;
typedef int caddr_t ;
typedef int bdrv_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ mode; scalar_t__ debug_shadow; scalar_t__ debug; } ;
struct TYPE_8__ {int * sys; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ifnet*,int,int ) ;

__attribute__((used)) static int FUNC_9 (struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7)
{
 drv_t *VAR_8 = VAR_5->if_softc;
 bdrv_t *VAR_9 = VAR_8->board->sys;
 int VAR_10, VAR_11, VAR_12, VAR_13;


 if (VAR_8->chan->type == VAR_4 || VAR_8->chan->mode == VAR_3)
  return VAR_0;


 VAR_12 = (VAR_5->if_drv_flags & VAR_2) != 0;
 VAR_10 = FUNC_8 (VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_6 ();
 FUNC_1 (VAR_9);
 if (! (VAR_5->if_flags & VAR_1))
  VAR_8->chan->debug = 0;
 else
  VAR_8->chan->debug = VAR_8->chan->debug_shadow;
 FUNC_2 (VAR_9);
 FUNC_7 (VAR_11);

 switch (VAR_6) {
 default: FUNC_0 (VAR_8, ("ioctl 0x%lx\n", VAR_6)); return 0;
 case 131: FUNC_0 (VAR_8, ("SIOCADDMULTI\n")); return 0;
 case 130: FUNC_0 (VAR_8, ("SIOCDELMULTI\n")); return 0;
 case 128: FUNC_0 (VAR_8, ("SIOCSIFFLAGS\n")); break;
 case 129: FUNC_0 (VAR_8, ("SIOCSIFADDR\n")); break;
 }


 VAR_11 = FUNC_6 ();
 FUNC_1 (VAR_9);
 VAR_13 = (VAR_5->if_drv_flags & VAR_2) != 0;
 if (!VAR_12 && VAR_13) {

  FUNC_5 (VAR_8);
  FUNC_4 (VAR_8);
 } else if (VAR_12 && !VAR_13) {


  FUNC_3 (VAR_8);
 }
 FUNC_2 (VAR_9);
 FUNC_7 (VAR_11);
 return 0;
}
