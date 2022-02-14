
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct tws_softc {int sim_lock; int sim; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tws_softc*,char*,struct tws_softc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 union ccb* FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;

int
FUNC_8(struct tws_softc *VAR_5)
{
    union ccb *VAR_6;

    FUNC_0(VAR_5, "entry", VAR_5, 0);
    if (!(VAR_5->sim))
        return(VAR_4);
    VAR_6 = FUNC_4();
    FUNC_2(&VAR_5->sim_lock);
    if (FUNC_5(&VAR_6->ccb_h.path, ((void*)0), FUNC_1(VAR_5->sim),
                  VAR_2, VAR_0) != VAR_1) {
 FUNC_3(&VAR_5->sim_lock);
        FUNC_6(VAR_6);
        return(VAR_3);
    }
    FUNC_7(VAR_6);
    FUNC_3(&VAR_5->sim_lock);
    return(0);
}
