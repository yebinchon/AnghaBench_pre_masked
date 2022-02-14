
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_cam_channels; int * mly_cam_devq; int ** mly_cam_sim; } ;


 int FUNC_0 (struct mly_softc*) ;
 int FUNC_1 (struct mly_softc*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct mly_softc *VAR_0)
{
    int VAR_1;

    FUNC_5(1);

    FUNC_0(VAR_0);
    for (VAR_1 = 0; VAR_1 < VAR_0->mly_cam_channels; VAR_1++) {
 if (VAR_0->mly_cam_sim[VAR_1] != ((void*)0)) {
     FUNC_6(FUNC_3(VAR_0->mly_cam_sim[VAR_1]));
     FUNC_2(VAR_0->mly_cam_sim[VAR_1], 0);
 }
    }
    FUNC_1(VAR_0);
    if (VAR_0->mly_cam_devq != ((void*)0))
 FUNC_4(VAR_0->mly_cam_devq);
}
