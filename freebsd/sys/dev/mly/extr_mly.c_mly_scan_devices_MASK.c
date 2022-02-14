
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mly_softc {int mly_cam_channels; TYPE_1__** mly_btl; } ;
struct TYPE_2__ {int mb_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mly_softc*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__***,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct mly_softc *VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_2(1);




    FUNC_1(&VAR_2->mly_btl, sizeof(VAR_2->mly_btl));





    for (VAR_3 = 0; VAR_3 < VAR_2->mly_cam_channels; VAR_3++)
 if (FUNC_0(VAR_2, VAR_3))
     for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_2->mly_btl[VAR_3][VAR_4].mb_flags = VAR_0;

}
