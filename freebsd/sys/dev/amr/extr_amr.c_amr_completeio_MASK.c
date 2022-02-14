
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct amrd_softc {int amrd_dev; } ;
struct amr_command {scalar_t__ ac_status; TYPE_1__* ac_sc; TYPE_3__* ac_bio; } ;
struct TYPE_6__ {int bio_flags; int bio_error; TYPE_2__* bio_disk; } ;
struct TYPE_5__ {struct amrd_softc* d_drv1; } ;
struct TYPE_4__ {int amr_list_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amr_command*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct timeval*,int*,int) ;

__attribute__((used)) static void
FUNC_6(struct amr_command *VAR_3)
{
    struct amrd_softc *VAR_4 = VAR_3->ac_bio->bio_disk->d_drv1;
    static struct timeval VAR_5;
    static int VAR_6;

    if (VAR_3->ac_status != VAR_0) {
 VAR_3->ac_bio->bio_error = VAR_2;
 VAR_3->ac_bio->bio_flags |= VAR_1;

 if (FUNC_5(&VAR_5, &VAR_6, 1))
     FUNC_2(VAR_4->amrd_dev, "I/O error - 0x%x\n", VAR_3->ac_status);

    }
    FUNC_1(VAR_3->ac_bio);
    FUNC_3(&VAR_3->ac_sc->amr_list_lock);
    FUNC_0(VAR_3);
    FUNC_4(&VAR_3->ac_sc->amr_list_lock);
}
