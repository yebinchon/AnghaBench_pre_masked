
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_sysdrive {scalar_t__ ms_disk; int ms_size; int ms_raidlevel; int ms_heads; int ms_sectors; int ms_cylinders; int ms_state; } ;
struct mlx_softc {scalar_t__ mlx_geom; int (* mlx_intaction ) (struct mlx_softc*,int ) ;int mlx_state; int mlx_dev; struct mlx_sysdrive* mlx_sysdrive; } ;
struct mlx_enq_sys_drive {int sd_size; int sd_raidlevel; int sd_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mlx_softc*) ;
 int FUNC_3 (struct mlx_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (scalar_t__,struct mlx_sysdrive*) ;
 int FUNC_9 (struct mlx_enq_sys_drive*,int ) ;
 struct mlx_enq_sys_drive* FUNC_10 (struct mlx_softc*,int ,int,int *) ;
 int FUNC_11 (struct mlx_softc*,int ) ;

void
FUNC_12(struct mlx_softc *VAR_6)
{
    struct mlx_enq_sys_drive *VAR_7;
    struct mlx_sysdrive *VAR_8;
    int VAR_9, VAR_10;

    FUNC_5(1);





    FUNC_2(VAR_6);
    VAR_7 = FUNC_10(VAR_6, VAR_0, sizeof(*VAR_7) * VAR_3, ((void*)0));
    FUNC_3(VAR_6);
    if (VAR_7 == ((void*)0)) {
 FUNC_7(VAR_6->mlx_dev, "error fetching drive status\n");
 return;
    }


    FUNC_0(VAR_6);
    for (VAR_9 = 0, VAR_8 = &VAR_6->mlx_sysdrive[0];
  (VAR_9 < VAR_3) && (VAR_7[VAR_9].sd_size != 0xffffffff);
  VAR_9++, VAR_8++) {

     if (VAR_8->ms_disk == 0) {

     VAR_8->ms_size = VAR_7[VAR_9].sd_size;
     VAR_8->ms_raidlevel = VAR_7[VAR_9].sd_raidlevel & 0xf;
     VAR_8->ms_state = VAR_7[VAR_9].sd_state;


     if (VAR_6->mlx_geom == VAR_1) {
  VAR_8->ms_heads = 128;
  VAR_8->ms_sectors = 32;
  VAR_8->ms_cylinders = VAR_8->ms_size / (128 * 32);
     } else {
  VAR_8->ms_heads = 255;
  VAR_8->ms_sectors = 63;
  VAR_8->ms_cylinders = VAR_8->ms_size / (255 * 63);
     }
     VAR_8->ms_disk = FUNC_6(VAR_6->mlx_dev, ((void*)0), -1);
     if (VAR_8->ms_disk == 0)
  FUNC_7(VAR_6->mlx_dev, "device_add_child failed\n");
     FUNC_8(VAR_8->ms_disk, VAR_8);
 }
    }
    FUNC_9(VAR_7, VAR_5);
    if ((VAR_10 = FUNC_4(VAR_6->mlx_dev)) != 0)
 FUNC_7(VAR_6->mlx_dev, "bus_generic_attach returned %d", VAR_10);


    FUNC_2(VAR_6);
    VAR_6->mlx_state &= ~VAR_4;


    VAR_6->mlx_intaction(VAR_6, VAR_2);
    FUNC_3(VAR_6);
    FUNC_1(VAR_6);
}
