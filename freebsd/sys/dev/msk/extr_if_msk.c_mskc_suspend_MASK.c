
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msk_softc {int msk_num_port; int msk_pflags; TYPE_2__** msk_if; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* msk_ifp; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct msk_softc*) ;
 int VAR_6 ;
 int FUNC_4 (struct msk_softc*) ;
 struct msk_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct msk_softc*,int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct msk_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_7);

 FUNC_3(VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_8->msk_num_port; VAR_9++) {
  if (VAR_8->msk_if[VAR_9] != ((void*)0) && VAR_8->msk_if[VAR_9]->msk_ifp != ((void*)0) &&
      ((VAR_8->msk_if[VAR_9]->msk_ifp->if_drv_flags &
      VAR_4) != 0))
   FUNC_7(VAR_8->msk_if[VAR_9]);
 }


 FUNC_2(VAR_8, VAR_2, 0);
 FUNC_0(VAR_8, VAR_2);
 FUNC_2(VAR_8, VAR_1, 0);
 FUNC_0(VAR_8, VAR_1);

 FUNC_6(VAR_8, VAR_6);


 FUNC_1(VAR_8, VAR_0, VAR_3);
 VAR_8->msk_pflags |= VAR_5;

 FUNC_4(VAR_8);

 return (0);
}
