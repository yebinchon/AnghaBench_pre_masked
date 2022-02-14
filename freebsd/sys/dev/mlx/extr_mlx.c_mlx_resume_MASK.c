
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int (* mlx_intaction ) (struct mlx_softc*,int ) ;int mlx_state; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 struct mlx_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mlx_softc*,int ) ;

int
FUNC_5(device_t VAR_2)
{
    struct mlx_softc *VAR_3 = FUNC_3(VAR_2);

    FUNC_2(1);

    FUNC_0(VAR_3);
    VAR_3->mlx_state &= ~VAR_1;
    VAR_3->mlx_intaction(VAR_3, VAR_0);
    FUNC_1(VAR_3);

    return(0);
}
