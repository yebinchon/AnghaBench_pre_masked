
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxd_softc {int mlxd_controller; TYPE_1__* mlxd_drive; } ;
struct bio {int bio_bcount; int bio_resid; int bio_flags; int bio_error; TYPE_2__* bio_disk; } ;
struct TYPE_4__ {struct mlxd_softc* d_drv1; } ;
struct TYPE_3__ {scalar_t__ ms_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct bio*) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_4)
{
    struct mlxd_softc *VAR_5 = VAR_4->bio_disk->d_drv1;

    FUNC_3(1);


    if (VAR_5 == ((void*)0)) {
 VAR_4->bio_error = VAR_1;
 VAR_4->bio_flags |= VAR_0;
 goto bad;
    }


    FUNC_0(VAR_5->mlxd_controller);
    if (VAR_5->mlxd_drive->ms_state == VAR_3) {
 FUNC_1(VAR_5->mlxd_controller);
 VAR_4->bio_error = VAR_2;
 VAR_4->bio_flags |= VAR_0;
 goto bad;
    }

    FUNC_4(VAR_5->mlxd_controller, VAR_4);
    FUNC_1(VAR_5->mlxd_controller);
    return;

 bad:



    VAR_4->bio_resid = VAR_4->bio_bcount;
    FUNC_2(VAR_4);
    return;
}
