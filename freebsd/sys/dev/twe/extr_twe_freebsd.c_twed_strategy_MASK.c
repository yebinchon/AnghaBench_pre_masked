
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twed_softc {int twed_controller; TYPE_1__* twed_drive; } ;
struct bio {int bio_flags; int bio_error; int * bio_driver1; TYPE_2__* bio_disk; } ;
struct TYPE_4__ {struct twed_softc* d_drv1; } ;
struct TYPE_3__ {int * td_disk; int td_twe_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct bio*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct bio *VAR_4)
{
    struct twed_softc *VAR_5 = VAR_4->bio_disk->d_drv1;

    FUNC_3(4);

    VAR_4->bio_driver1 = &VAR_5->twed_drive->td_twe_unit;
    VAR_2;


    if (VAR_5 == ((void*)0) || VAR_5->twed_drive->td_disk == ((void*)0)) {
 VAR_4->bio_error = VAR_1;
 VAR_4->bio_flags |= VAR_0;
 FUNC_4("twe: bio for invalid disk!\n");
 FUNC_2(VAR_4);
 VAR_3;
 return;
    }


    FUNC_0(VAR_5->twed_controller);
    FUNC_5(VAR_5->twed_controller, VAR_4);


    FUNC_6(VAR_5->twed_controller);
    FUNC_1(VAR_5->twed_controller);
    return;
}
