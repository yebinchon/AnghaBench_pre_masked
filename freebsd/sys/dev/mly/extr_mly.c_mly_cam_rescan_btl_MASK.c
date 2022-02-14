
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mly_softc {int * mly_cam_sim; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mly_softc*,char*) ;
 union ccb* FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *,int ,int,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(struct mly_softc *VAR_1, int VAR_2, int VAR_3)
{
    union ccb *VAR_4;

    FUNC_2(1);

    if ((VAR_4 = FUNC_4()) == ((void*)0)) {
 FUNC_3(VAR_1, "rescan failed (can't allocate CCB)\n");
 return;
    }
    if (FUNC_5(&VAR_4->ccb_h.path, ((void*)0),
     FUNC_0(VAR_1->mly_cam_sim[VAR_2]), VAR_3, 0) != VAR_0) {
 FUNC_3(VAR_1, "rescan failed (can't create path)\n");
 FUNC_6(VAR_4);
 return;
    }
    FUNC_1(1, "rescan target %d:%d", VAR_2, VAR_3);
    FUNC_7(VAR_4);
}
