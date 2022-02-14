
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msk_softc {int msk_num_port; int msk_pflags; TYPE_2__** msk_if; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* msk_ifp; } ;
struct TYPE_3__ {int if_flags; int if_drv_flags; } ;


 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct msk_softc*) ;
 int FUNC_2 (struct msk_softc*) ;
 int VAR_3 ;
 struct msk_softc* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct msk_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct msk_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4);

 FUNC_1(VAR_5);

 FUNC_0(VAR_5, VAR_3, 0);
 FUNC_5(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_5->msk_num_port; VAR_6++) {
  if (VAR_5->msk_if[VAR_6] != ((void*)0) && VAR_5->msk_if[VAR_6]->msk_ifp != ((void*)0) &&
      ((VAR_5->msk_if[VAR_6]->msk_ifp->if_flags & VAR_1) != 0)) {
   VAR_5->msk_if[VAR_6]->msk_ifp->if_drv_flags &=
       ~VAR_0;
   FUNC_4(VAR_5->msk_if[VAR_6]);
  }
 }
 VAR_5->msk_pflags &= ~VAR_2;

 FUNC_2(VAR_5);

 return (0);
}
