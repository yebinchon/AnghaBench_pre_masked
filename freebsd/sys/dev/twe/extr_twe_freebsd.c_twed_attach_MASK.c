
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twed_softc {TYPE_1__* twed_disk; TYPE_3__* twed_drive; int twed_dev; struct twe_softc* twed_controller; } ;
struct twe_softc {int dummy; } ;
typedef int off_t ;
typedef int dumper_t ;
typedef int device_t ;
struct TYPE_5__ {int td_size; scalar_t__ td_type; int td_stripe; int td_sys_unit; int td_heads; int td_sectors; } ;
struct TYPE_4__ {char* d_name; int d_maxsize; int d_sectorsize; int d_mediasize; int d_stripesize; int d_unit; int d_fwheads; int d_fwsectors; scalar_t__ d_stripeoffset; struct twed_softc* d_drv1; int * d_dump; int d_strategy; int d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct twed_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct twed_softc*,char*,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_10)
{
    struct twed_softc *VAR_11;
    device_t VAR_12;

    FUNC_0(4);


    VAR_11 = FUNC_3(VAR_10);
    VAR_12 = FUNC_2(VAR_10);
    VAR_11->twed_controller = (struct twe_softc *)FUNC_3(VAR_12);
    VAR_11->twed_drive = FUNC_1(VAR_10);
    VAR_11->twed_dev = VAR_10;


    FUNC_7(VAR_11, "%uMB (%u sectors)\n",
  VAR_11->twed_drive->td_size / ((1024 * 1024) / VAR_2),
  VAR_11->twed_drive->td_size);



    VAR_11->twed_drive->td_sys_unit = FUNC_4(VAR_10);

    VAR_11->twed_disk = FUNC_5();
    VAR_11->twed_disk->d_open = VAR_8;
    VAR_11->twed_disk->d_strategy = VAR_9;
    VAR_11->twed_disk->d_dump = (dumper_t *)VAR_7;
    VAR_11->twed_disk->d_name = "twed";
    VAR_11->twed_disk->d_drv1 = VAR_11;
    VAR_11->twed_disk->d_maxsize = (VAR_3 - 1) * VAR_1;
    VAR_11->twed_disk->d_sectorsize = VAR_2;
    VAR_11->twed_disk->d_mediasize = VAR_2 * (off_t)VAR_11->twed_drive->td_size;
    if (VAR_11->twed_drive->td_type == VAR_4 ||
 VAR_11->twed_drive->td_type == VAR_6 ||
 VAR_11->twed_drive->td_type == VAR_5) {
     VAR_11->twed_disk->d_stripesize =
  VAR_2 << VAR_11->twed_drive->td_stripe;
     VAR_11->twed_disk->d_stripeoffset = 0;
    }
    VAR_11->twed_disk->d_fwsectors = VAR_11->twed_drive->td_sectors;
    VAR_11->twed_disk->d_fwheads = VAR_11->twed_drive->td_heads;
    VAR_11->twed_disk->d_unit = VAR_11->twed_drive->td_sys_unit;

    FUNC_6(VAR_11->twed_disk, VAR_0);



    return (0);
}
