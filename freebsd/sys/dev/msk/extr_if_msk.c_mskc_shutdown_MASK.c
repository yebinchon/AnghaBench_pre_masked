
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msk_softc {int msk_num_port; TYPE_2__** msk_if; } ;
typedef int device_t ;
struct TYPE_4__ {TYPE_1__* msk_ifp; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct msk_softc*) ;
 int FUNC_2 (struct msk_softc*) ;
 struct msk_softc* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct msk_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 FUNC_1(VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4->msk_num_port; VAR_5++) {
  if (VAR_4->msk_if[VAR_5] != ((void*)0) && VAR_4->msk_if[VAR_5]->msk_ifp != ((void*)0) &&
      ((VAR_4->msk_if[VAR_5]->msk_ifp->if_drv_flags &
      VAR_2) != 0))
   FUNC_4(VAR_4->msk_if[VAR_5]);
 }
 FUNC_2(VAR_4);


 FUNC_0(VAR_4, VAR_0, VAR_1);
 return (0);
}
