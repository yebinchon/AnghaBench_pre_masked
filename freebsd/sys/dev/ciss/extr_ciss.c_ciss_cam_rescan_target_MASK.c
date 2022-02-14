
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ciss_softc {int * ciss_cam_sim; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ciss_softc*,char*) ;
 int FUNC_2 (int) ;
 union ccb* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int ,int,int ) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(struct ciss_softc *VAR_2, int VAR_3, int VAR_4)
{
    union ccb *VAR_5;

    FUNC_2(1);

    if ((VAR_5 = FUNC_3()) == ((void*)0)) {
 FUNC_1(VAR_2, "rescan failed (can't allocate CCB)\n");
 return;
    }

    if (FUNC_4(&VAR_5->ccb_h.path, ((void*)0),
     FUNC_0(VAR_2->ciss_cam_sim[VAR_3]),
     VAR_4, VAR_0) != VAR_1) {
 FUNC_1(VAR_2, "rescan failed (can't create path)\n");
 FUNC_5(VAR_5);
 return;
    }
    FUNC_6(VAR_5);

}
