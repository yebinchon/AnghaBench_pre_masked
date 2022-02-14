
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxd_softc {int mlxd_flags; } ;
struct mlx_softc {int mlx_state; TYPE_1__* mlx_sysdrive; } ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {scalar_t__ ms_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (struct mlx_softc*) ;
 int FUNC_6 (scalar_t__) ;

int
FUNC_7(device_t VAR_4)
{
    struct mlx_softc *VAR_5 = FUNC_3(VAR_4);
    struct mlxd_softc *VAR_6;
    int VAR_7, VAR_8;

    FUNC_2(1);

    VAR_8 = VAR_0;
    FUNC_0(VAR_5);
    if (VAR_5->mlx_state & VAR_3)
 goto out;

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
 if (VAR_5->mlx_sysdrive[VAR_7].ms_disk != 0) {
     VAR_6 = FUNC_3(VAR_5->mlx_sysdrive[VAR_7].ms_disk);
     if (VAR_6->mlxd_flags & VAR_1) {
  FUNC_4(VAR_5->mlx_sysdrive[VAR_7].ms_disk, "still open, can't detach\n");
  goto out;
     }
 }
    }
    if ((VAR_8 = FUNC_6(VAR_4)))
 goto out;
    FUNC_1(VAR_5);

    FUNC_5(VAR_5);

    return (0);
 out:
    FUNC_1(VAR_5);
    return(VAR_8);
}
