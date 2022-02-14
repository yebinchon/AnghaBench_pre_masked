
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_dev; int mlx_work; } ;
struct mlx_command {scalar_t__ mc_status; struct mlx_softc* mc_sc; int * mc_private; int * mc_complete; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct mlx_command*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct mlx_command*) ;
 int FUNC_5 (struct mlx_softc*,int) ;
 int FUNC_6 (struct mlx_command*) ;

__attribute__((used)) static int
FUNC_7(struct mlx_command *VAR_3)
{
    struct mlx_softc *VAR_4 = VAR_3->mc_sc;
    int VAR_5, VAR_6;

    FUNC_2(1);
    FUNC_0(VAR_4);

    VAR_3->mc_complete = ((void*)0);
    VAR_3->mc_private = ((void*)0);
    if ((VAR_5 = FUNC_6(VAR_3)) != 0)
 return(VAR_5);

    VAR_6 = 0;
    do {

 FUNC_5(VAR_3->mc_sc, 1);

    } while ((VAR_3->mc_status == VAR_1) && (VAR_6++ < 15000000));
    if (VAR_3->mc_status != VAR_1) {
 FUNC_1(&VAR_4->mlx_work, VAR_3, VAR_2);
 return(0);
    }
    FUNC_3(VAR_4->mlx_dev, "command failed - %s\n", FUNC_4(VAR_3));
    return(VAR_0);
}
