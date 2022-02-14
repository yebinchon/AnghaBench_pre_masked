
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mly_softc {int mly_cam_channels; int mly_periodic; TYPE_2__** mly_btl; TYPE_1__* mly_controllerparam; } ;
struct TYPE_4__ {int mb_flags; } ;
struct TYPE_3__ {int initiator_id; } ;


 int FUNC_0 (struct mly_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mly_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (struct mly_softc*) ;
 int FUNC_5 (struct mly_softc*,int,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
    struct mly_softc *VAR_5 = (struct mly_softc *)VAR_4;
    int VAR_6, VAR_7;

    FUNC_3(2);
    FUNC_0(VAR_5);




    for (VAR_6 = 0; VAR_6 < VAR_5->mly_cam_channels; VAR_6++) {
 if (FUNC_1(VAR_5, VAR_6)) {
     for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {


  if (VAR_7 == VAR_5->mly_controllerparam->initiator_id)
      continue;


  if (VAR_5->mly_btl[VAR_6][VAR_7].mb_flags & VAR_0)
      FUNC_5(VAR_5, VAR_6, VAR_7);
     }
 }
    }


    FUNC_4(VAR_5);


    FUNC_2(&VAR_5->mly_periodic, VAR_2 * VAR_3);
}
