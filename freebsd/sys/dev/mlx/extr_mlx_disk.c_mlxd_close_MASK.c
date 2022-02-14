
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxd_softc {int mlxd_controller; int mlxd_flags; } ;
struct disk {scalar_t__ d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct disk *VAR_2)
{
    struct mlxd_softc *VAR_3 = (struct mlxd_softc *)VAR_2->d_drv1;

    FUNC_4(1);

    if (VAR_3 == ((void*)0))
 return (VAR_0);
    FUNC_0(VAR_3->mlxd_controller);
    FUNC_2(VAR_3->mlxd_controller);
    VAR_3->mlxd_flags &= ~VAR_1;
    FUNC_3(VAR_3->mlxd_controller);
    FUNC_1(VAR_3->mlxd_controller);
    return (0);
}
