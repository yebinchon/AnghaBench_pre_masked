
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct idad_softc {intptr_t drive; int secsize; int secperunit; TYPE_2__* disk; int unit; int heads; int sectors; int cylinders; struct ida_softc* controller; int dev; } ;
struct ida_softc {int lock; } ;
struct TYPE_4__ {int nsectors; int nheads; int ncylinders; } ;
struct ida_drive_info {int secsize; int secperunit; TYPE_1__ dp; } ;
typedef int off_t ;
typedef int dinfo ;
typedef int device_t ;
struct TYPE_5__ {char* d_name; int d_sectorsize; int d_mediasize; int d_unit; int d_maxsize; struct idad_softc* d_drv1; int d_fwheads; int d_fwsectors; int d_dump; int d_strategy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (struct ida_softc*,int ,struct ida_drive_info*,int,intptr_t,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct ida_drive_info VAR_8;
 struct idad_softc *VAR_9;
 device_t VAR_10;
 int VAR_11;

 VAR_9 = (struct idad_softc *)FUNC_2(VAR_7);
 VAR_10 = FUNC_1(VAR_7);
 VAR_9->dev = VAR_7;
 VAR_9->controller = (struct ida_softc *)FUNC_2(VAR_10);
 VAR_9->unit = FUNC_3(VAR_7);
 VAR_9->drive = (intptr_t)FUNC_0(VAR_7);

 FUNC_8(&VAR_9->controller->lock);
 VAR_11 = FUNC_7(VAR_9->controller, VAR_0,
     &VAR_8, sizeof(VAR_8), VAR_9->drive, 0, VAR_3);
 FUNC_9(&VAR_9->controller->lock);
 if (VAR_11) {
  FUNC_4(VAR_7, "CMD_GET_LOG_DRV_INFO failed\n");
  return (VAR_4);
 }

 VAR_9->cylinders = VAR_8.dp.ncylinders;
 VAR_9->heads = VAR_8.dp.nheads;
 VAR_9->sectors = VAR_8.dp.nsectors;
 VAR_9->secsize = VAR_8.secsize == 0 ? 512 : VAR_8.secsize;
 VAR_9->secperunit = VAR_8.secperunit;




 FUNC_4(VAR_7, "%uMB (%u sectors), blocksize=%d\n",
     VAR_9->secperunit / ((1024 * 1024) / VAR_9->secsize),
     VAR_9->secperunit, VAR_9->secsize);

 VAR_9->disk = FUNC_5();
 VAR_9->disk->d_strategy = VAR_6;
 VAR_9->disk->d_name = "idad";
 VAR_9->disk->d_dump = VAR_5;
 VAR_9->disk->d_sectorsize = VAR_9->secsize;
 VAR_9->disk->d_mediasize = (off_t)VAR_9->secperunit * VAR_9->secsize;
 VAR_9->disk->d_fwsectors = VAR_9->sectors;
 VAR_9->disk->d_fwheads = VAR_9->heads;
 VAR_9->disk->d_drv1 = VAR_9;
 VAR_9->disk->d_maxsize = VAR_1;
 VAR_9->disk->d_unit = VAR_9->unit;
 FUNC_6(VAR_9->disk, VAR_2);

 return (0);
}
