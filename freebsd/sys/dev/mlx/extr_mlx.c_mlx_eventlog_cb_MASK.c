
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_command {int * mc_data; struct mlx_command* mc_private; int mc_complete; int mc_dataphys; TYPE_1__* mc_sc; } ;
typedef int bus_dma_segment_t ;
struct TYPE_2__ {int mlx_lastevent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mlx_command*,int ,int ,int,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mlx_command*) ;
 int FUNC_3 (struct mlx_command*,int *,int,int) ;
 scalar_t__ FUNC_4 (struct mlx_command*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4, bus_dma_segment_t *VAR_5, int VAR_6, int VAR_7)
{
    struct mlx_command *VAR_8;

    VAR_8 = (struct mlx_command *)VAR_4;
    FUNC_3(VAR_8, VAR_5, VAR_6, VAR_7);


    FUNC_1(VAR_8, VAR_0, VAR_1, 1,
     VAR_8->mc_sc->mlx_lastevent, 0, 0, VAR_8->mc_dataphys, 0);
    VAR_8->mc_complete = VAR_3;
    VAR_8->mc_private = VAR_8;


    if (FUNC_4(VAR_8) != 0) {
 FUNC_2(VAR_8);
 FUNC_0(VAR_8->mc_data, VAR_2);
 VAR_8->mc_data = ((void*)0);
    }

}
