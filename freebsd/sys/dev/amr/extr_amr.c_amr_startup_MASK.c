
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ich_func; } ;
struct amr_softc {TYPE_1__ amr_ich; int amr_state; int amr_dev; struct amr_logdrive* amr_drive; } ;
struct amr_logdrive {int al_size; scalar_t__ al_disk; int al_heads; int al_sectors; int al_cylinders; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (scalar_t__,struct amr_logdrive*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
    struct amr_softc *VAR_4 = (struct amr_softc *)VAR_3;
    struct amr_logdrive *VAR_5;
    int VAR_6, VAR_7;

    FUNC_3(1);


    if (FUNC_0(VAR_4)) {
 FUNC_5(VAR_4->amr_dev, "can't scan controller for drives\n");
 return;
    }


    for (VAR_6 = 0, VAR_5 = &VAR_4->amr_drive[0]; (VAR_6 < VAR_0) && (VAR_5->al_size != 0xffffffff); VAR_6++, VAR_5++) {

 if (VAR_5->al_disk == 0) {

     if (VAR_5->al_size > 0x200000) {
  VAR_5->al_heads = 255;
  VAR_5->al_sectors = 63;
     } else {
  VAR_5->al_heads = 64;
  VAR_5->al_sectors = 32;
     }
     VAR_5->al_cylinders = VAR_5->al_size / (VAR_5->al_heads * VAR_5->al_sectors);

     VAR_5->al_disk = FUNC_4(VAR_4->amr_dev, ((void*)0), -1);
     if (VAR_5->al_disk == 0)
  FUNC_5(VAR_4->amr_dev, "device_add_child failed\n");
     FUNC_6(VAR_5->al_disk, VAR_5);
 }
    }

    if ((VAR_7 = FUNC_1(VAR_4->amr_dev)) != 0)
 FUNC_5(VAR_4->amr_dev, "bus_generic_attach returned %d\n", VAR_7);


    VAR_4->amr_state &= ~VAR_2;


    VAR_4->amr_state |= VAR_1;


    if (VAR_4->amr_ich.ich_func)
 FUNC_2(&VAR_4->amr_ich);
    VAR_4->amr_ich.ich_func = ((void*)0);

    return;
}
