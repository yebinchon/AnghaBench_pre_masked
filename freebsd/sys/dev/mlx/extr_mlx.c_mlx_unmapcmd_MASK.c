
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_buffer_dmat; } ;
struct mlx_command {int mc_flags; int mc_dmamap; int * mc_data; struct mlx_softc* mc_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct mlx_command *VAR_4)
{
    struct mlx_softc *VAR_5 = VAR_4->mc_sc;

    FUNC_2(1);


    if (VAR_4->mc_data != ((void*)0)) {

 if (VAR_4->mc_flags & VAR_2)
     FUNC_0(VAR_5->mlx_buffer_dmat, VAR_4->mc_dmamap, VAR_0);
 if (VAR_4->mc_flags & VAR_3)
     FUNC_0(VAR_5->mlx_buffer_dmat, VAR_4->mc_dmamap, VAR_1);

 FUNC_1(VAR_5->mlx_buffer_dmat, VAR_4->mc_dmamap);
    }
}
