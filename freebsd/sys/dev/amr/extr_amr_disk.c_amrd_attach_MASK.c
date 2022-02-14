
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amrd_softc {TYPE_1__* amrd_disk; TYPE_3__* amrd_drive; int amrd_unit; int amrd_dev; struct amr_softc* amrd_controller; } ;
struct amr_softc {int dummy; } ;
typedef int off_t ;
typedef int dumper_t ;
typedef int device_t ;
struct TYPE_5__ {int al_size; int al_properties; int al_heads; int al_sectors; int al_state; } ;
struct TYPE_4__ {int d_maxsize; char* d_name; int d_sectorsize; int d_mediasize; int d_fwheads; int d_fwsectors; int d_flags; int d_unit; int * d_dump; int d_strategy; int d_open; struct amrd_softc* d_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int,int,int ) ;
 TYPE_1__* FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_10)
{
    struct amrd_softc *VAR_11 = (struct amrd_softc *)FUNC_5(VAR_10);
    device_t VAR_12;

    FUNC_2(1);

    VAR_12 = FUNC_4(VAR_10);
    VAR_11->amrd_controller = (struct amr_softc *)FUNC_5(VAR_12);
    VAR_11->amrd_unit = FUNC_6(VAR_10);
    VAR_11->amrd_drive = FUNC_3(VAR_10);
    VAR_11->amrd_dev = VAR_10;

    FUNC_7(VAR_10, "%uMB (%u sectors) RAID %d (%s)\n",
    VAR_11->amrd_drive->al_size / ((1024 * 1024) / VAR_0),
    VAR_11->amrd_drive->al_size, VAR_11->amrd_drive->al_properties & VAR_1,
    FUNC_1(VAR_6, FUNC_0(VAR_11->amrd_drive->al_state)));

    VAR_11->amrd_disk = FUNC_8();
    VAR_11->amrd_disk->d_drv1 = VAR_11;
    VAR_11->amrd_disk->d_maxsize = (VAR_2 - 1) * VAR_5;
    VAR_11->amrd_disk->d_open = VAR_8;
    VAR_11->amrd_disk->d_strategy = VAR_9;
    VAR_11->amrd_disk->d_name = "amrd";
    VAR_11->amrd_disk->d_dump = (dumper_t *)VAR_7;
    VAR_11->amrd_disk->d_unit = VAR_11->amrd_unit;
    VAR_11->amrd_disk->d_flags = VAR_3;
    VAR_11->amrd_disk->d_sectorsize = VAR_0;
    VAR_11->amrd_disk->d_mediasize = (off_t)VAR_11->amrd_drive->al_size * VAR_0;
    VAR_11->amrd_disk->d_fwsectors = VAR_11->amrd_drive->al_sectors;
    VAR_11->amrd_disk->d_fwheads = VAR_11->amrd_drive->al_heads;
    FUNC_9(VAR_11->amrd_disk, VAR_4);

    return (0);
}
