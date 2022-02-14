
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_dev; int mlx_io_lock; } ;
struct mlx_command {scalar_t__ mc_status; struct mlx_command* mc_private; int * mc_complete; struct mlx_softc* mc_sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct mlx_command*) ;
 int FUNC_4 (struct mlx_command*) ;
 int FUNC_5 (struct mlx_command*,int *,int,char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct mlx_command *VAR_5)
{
    struct mlx_softc *VAR_6 = VAR_5->mc_sc;
    int VAR_7, VAR_8;

    FUNC_1(1);
    FUNC_0(VAR_6);

    VAR_5->mc_complete = ((void*)0);
    VAR_5->mc_private = VAR_5;
    if ((VAR_7 = FUNC_4(VAR_5)) != 0)
 return(VAR_7);

    VAR_8 = 0;

    while ((VAR_5->mc_status == VAR_1) && (VAR_8 < 30)) {
 FUNC_5(VAR_5->mc_private, &VAR_6->mlx_io_lock, VAR_3 | VAR_2, "mlxwcmd", VAR_4);
    }

    if (VAR_5->mc_status != 0) {
 FUNC_2(VAR_6->mlx_dev, "command failed - %s\n", FUNC_3(VAR_5));
 return(VAR_0);
    }
    return(0);
}
