
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_state; } ;




 int FUNC_0 (struct mlx_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx_softc*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct mlx_softc *VAR_1, int VAR_2)
{
    FUNC_2(1);
    FUNC_0(VAR_1);

    switch(VAR_2) {
    case 129:
 FUNC_1(VAR_1, 0);
 VAR_1->mlx_state &= ~VAR_0;
 break;
    case 128:
 FUNC_1(VAR_1, 1);
 VAR_1->mlx_state |= VAR_0;
 break;
    }
}
