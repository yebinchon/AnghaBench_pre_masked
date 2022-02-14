
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_buffer_dmat; int mlx_freecmds; } ;
struct mlx_command {int mc_dmamap; struct mlx_softc* mc_sc; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx_command* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mlx_command*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mlx_command*,int ) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static struct mlx_command *
FUNC_7(struct mlx_softc *VAR_4)
{
    struct mlx_command *VAR_5;
    int VAR_6;

    FUNC_4(1);

    FUNC_0(VAR_4);
    if ((VAR_5 = FUNC_1(&VAR_4->mlx_freecmds)) != ((void*)0))
 FUNC_2(&VAR_4->mlx_freecmds, VAR_5, VAR_3);


    if (VAR_5 == ((void*)0)) {
 VAR_5 = (struct mlx_command *)FUNC_6(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 if (VAR_5 != ((void*)0)) {
     VAR_5->mc_sc = VAR_4;
     VAR_6 = FUNC_3(VAR_4->mlx_buffer_dmat, 0, &VAR_5->mc_dmamap);
     if (VAR_6) {
  FUNC_5(VAR_5, VAR_0);
  return(((void*)0));
     }
 }
    }
    return(VAR_5);
}
