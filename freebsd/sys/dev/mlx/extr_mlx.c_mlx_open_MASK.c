
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mlx_softc {int mlx_state; } ;
struct cdev {struct mlx_softc* si_drv1; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int FUNC_2 (struct mlx_softc*) ;
 int FUNC_3 (struct mlx_softc*) ;
 int VAR_0 ;

int
FUNC_4(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
    struct mlx_softc *VAR_5 = VAR_1->si_drv1;

    FUNC_0(VAR_5);
    FUNC_2(VAR_5);
    VAR_5->mlx_state |= VAR_0;
    FUNC_3(VAR_5);
    FUNC_1(VAR_5);
    return(0);
}
