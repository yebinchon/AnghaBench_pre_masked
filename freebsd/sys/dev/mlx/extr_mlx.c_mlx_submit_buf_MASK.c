
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_waitbufs; int mlx_bioq; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlx_softc*) ;

int
FUNC_4(struct mlx_softc *VAR_0, struct bio *VAR_1)
{

    FUNC_2(1);

    FUNC_0(VAR_0);
    FUNC_1(&VAR_0->mlx_bioq, VAR_1);
    VAR_0->mlx_waitbufs++;
    FUNC_3(VAR_0);
    return(0);
}
