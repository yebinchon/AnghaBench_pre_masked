
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlxd_softc {TYPE_2__* mlxd_disk; struct mlx_softc* mlxd_controller; TYPE_4__* mlxd_drive; int mlxd_unit; int mlxd_dev; } ;
struct mlx_softc {scalar_t__ mlx_iftype; TYPE_1__* mlx_enq2; } ;
typedef int off_t ;
typedef int device_t ;
struct TYPE_7__ {int ms_state; int ms_size; int ms_heads; int ms_sectors; int ms_raidlevel; } ;
struct TYPE_6__ {char* d_name; int d_sectorsize; int d_mediasize; int d_maxsize; int d_fwheads; int d_fwsectors; struct mlxd_softc* d_drv1; int d_unit; int d_strategy; int d_ioctl; int d_close; int d_open; } ;
struct TYPE_5__ {int me_maxblk; int me_max_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,int ,char*) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8)
{
    struct mlxd_softc *VAR_9 = (struct mlxd_softc *)FUNC_3(VAR_8);
    device_t VAR_10;
    char *VAR_11;
    int VAR_12, VAR_13;

    FUNC_0(1);

    VAR_10 = FUNC_2(VAR_8);
    VAR_9->mlxd_controller = (struct mlx_softc *)FUNC_3(VAR_10);
    VAR_9->mlxd_unit = FUNC_4(VAR_8);
    VAR_9->mlxd_drive = FUNC_1(VAR_8);
    VAR_9->mlxd_dev = VAR_8;

    switch(VAR_9->mlxd_drive->ms_state) {
    case 128:
 VAR_11 = "online";
 break;
    case 130:
 VAR_11 = "critical";
 break;
    case 129:
 VAR_11 = "offline";
 break;
    default:
 VAR_11 = "unknown state";
    }

    FUNC_5(VAR_8, "%uMB (%u sectors) RAID %d (%s)\n",
    VAR_9->mlxd_drive->ms_size / ((1024 * 1024) / VAR_1),
    VAR_9->mlxd_drive->ms_size, VAR_9->mlxd_drive->ms_raidlevel, VAR_11);

    VAR_9->mlxd_disk = FUNC_6();
    VAR_9->mlxd_disk->d_open = VAR_6;
    VAR_9->mlxd_disk->d_close = VAR_4;
    VAR_9->mlxd_disk->d_ioctl = VAR_5;
    VAR_9->mlxd_disk->d_strategy = VAR_7;
    VAR_9->mlxd_disk->d_name = "mlxd";
    VAR_9->mlxd_disk->d_unit = VAR_9->mlxd_unit;
    VAR_9->mlxd_disk->d_drv1 = VAR_9;
    VAR_9->mlxd_disk->d_sectorsize = VAR_1;
    VAR_9->mlxd_disk->d_mediasize = VAR_1 * (off_t)VAR_9->mlxd_drive->ms_size;
    VAR_9->mlxd_disk->d_fwsectors = VAR_9->mlxd_drive->ms_sectors;
    VAR_9->mlxd_disk->d_fwheads = VAR_9->mlxd_drive->ms_heads;





    if (VAR_9->mlxd_controller->mlx_iftype == VAR_2)
 VAR_9->mlxd_disk->d_maxsize = 8 * VAR_3;
    else {
 VAR_12 = VAR_9->mlxd_controller->mlx_enq2->me_maxblk * VAR_1;
 VAR_13 = (VAR_9->mlxd_controller->mlx_enq2->me_max_sg - 1) * VAR_3;
 VAR_9->mlxd_disk->d_maxsize = FUNC_8(VAR_12, VAR_13);
    }

    FUNC_7(VAR_9->mlxd_disk, VAR_0);

    return (0);
}
