
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_9__ {int dev; int tick_ch; scalar_t__ wd_timer; int flags; struct ifnet* ifp; } ;
typedef TYPE_1__ ae_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void
FUNC_9(ae_softc_t *VAR_11)
{
 struct ifnet *VAR_12;
 int VAR_13;

 FUNC_0(VAR_11);

 VAR_12 = VAR_11->ifp;
 VAR_12->if_drv_flags &= ~(VAR_10 | VAR_9);
 VAR_11->flags &= ~VAR_4;
 VAR_11->wd_timer = 0;
 FUNC_7(&VAR_11->tick_ch);




 FUNC_3(VAR_11, VAR_7, 0);
 FUNC_3(VAR_11, VAR_8, 0xffffffff);




 FUNC_6(VAR_11);
 FUNC_5(VAR_11);




 FUNC_2(VAR_11, VAR_1, ~VAR_0);
 FUNC_2(VAR_11, VAR_3, ~VAR_2);




 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (FUNC_1(VAR_11, VAR_5) == 0)
   break;
  FUNC_4(100);
 }
 if (VAR_13 == VAR_6)
  FUNC_8(VAR_11->dev, "could not enter idle state in stop.\n");
}
