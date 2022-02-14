
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_buffer_dmat; } ;
struct mlx_command {int mc_dmamap; struct mlx_softc* mc_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx_command*,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlx_command *VAR_1)
{
    struct mlx_softc *VAR_2 = VAR_1->mc_sc;

    FUNC_1(1);
    FUNC_0(VAR_2->mlx_buffer_dmat, VAR_1->mc_dmamap);
    FUNC_2(VAR_1, VAR_0);
}
