
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int bio_bcount; int bio_resid; int bio_flags; int bio_error; TYPE_1__* bio_disk; } ;
struct amrd_softc {int amrd_controller; } ;
struct TYPE_2__ {scalar_t__ d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bio*) ;
 int FUNC_1 (struct bio*) ;

__attribute__((used)) static void
FUNC_2(struct bio *VAR_2)
{
    struct amrd_softc *VAR_3 = (struct amrd_softc *)VAR_2->bio_disk->d_drv1;


    if (VAR_3 == ((void*)0)) {
 VAR_2->bio_error = VAR_1;
 goto bad;
    }

    FUNC_0(VAR_3->amrd_controller, VAR_2);
    return;

 bad:
    VAR_2->bio_flags |= VAR_0;




    VAR_2->bio_resid = VAR_2->bio_bcount;
    FUNC_1(VAR_2);
    return;
}
