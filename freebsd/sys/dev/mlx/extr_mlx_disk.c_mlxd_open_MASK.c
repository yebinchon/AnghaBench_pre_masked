
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mlxd_softc {TYPE_1__* mlxd_controller; int mlxd_flags; } ;
struct disk {scalar_t__ d_drv1; } ;
struct TYPE_5__ {int mlx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct disk *VAR_3)
{
    struct mlxd_softc *VAR_4 = (struct mlxd_softc *)VAR_3->d_drv1;

    FUNC_4(1);

    if (VAR_4 == ((void*)0))
 return (VAR_0);


    FUNC_0(VAR_4->mlxd_controller);
    FUNC_2(VAR_4->mlxd_controller);
    if (VAR_4->mlxd_controller->mlx_state & VAR_2) {
 FUNC_3(VAR_4->mlxd_controller);
 FUNC_1(VAR_4->mlxd_controller);
 return(VAR_0);
    }

    VAR_4->mlxd_flags |= VAR_1;
    FUNC_3(VAR_4->mlxd_controller);
    FUNC_1(VAR_4->mlxd_controller);
    return (0);
}
