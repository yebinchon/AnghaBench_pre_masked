
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mlxd_softc {int mlxd_drive; int mlxd_controller; } ;
struct disk {scalar_t__ d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,void*,int,struct thread*) ;

__attribute__((used)) static int
FUNC_3(struct disk *VAR_3, u_long VAR_4, void *VAR_5, int VAR_6, struct thread *VAR_7)
{
    struct mlxd_softc *VAR_8 = (struct mlxd_softc *)VAR_3->d_drv1;
    int VAR_9;

    FUNC_1(1);

    if (VAR_8 == ((void*)0))
 return (VAR_2);

    if ((VAR_9 = FUNC_2(VAR_8->mlxd_controller, VAR_8->mlxd_drive, VAR_4, VAR_5, VAR_6, VAR_7)) != VAR_0) {
 FUNC_0(0, "mlx_submit_ioctl returned %d\n", VAR_9);
 return(VAR_9);
    }
    return (VAR_1);
}
