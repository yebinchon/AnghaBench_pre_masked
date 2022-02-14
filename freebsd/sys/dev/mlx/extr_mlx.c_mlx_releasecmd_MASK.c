
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_command {TYPE_1__* mc_sc; } ;
struct TYPE_2__ {int mlx_freecmds; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,struct mlx_command*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct mlx_command *VAR_1)
{

    FUNC_2(1);

    FUNC_0(VAR_1->mc_sc);
    FUNC_1(&VAR_1->mc_sc->mlx_freecmds, VAR_1, VAR_0);
}
