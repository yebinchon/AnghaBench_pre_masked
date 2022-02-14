
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_buffer_dmat; } ;
struct mlx_command {int mc_length; int * mc_data; int mc_dmamap; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int,int ,struct mlx_command*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (int,int ,int ) ;
 struct mlx_command* FUNC_5 (struct mlx_softc*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (struct mlx_command*) ;
 int FUNC_7 (struct mlx_command*) ;

__attribute__((used)) static void
FUNC_8(struct mlx_softc *VAR_4)
{
    struct mlx_command *VAR_5;
    void *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    FUNC_2(1);
    FUNC_0(VAR_4);


    VAR_7 = 1;
    if ((VAR_5 = FUNC_5(VAR_4)) == ((void*)0))
 goto out;


    if ((VAR_6 = FUNC_4( 1024, VAR_1,
    VAR_2)) == ((void*)0))
 goto out;


    if (FUNC_6(VAR_5))
 goto out;


    VAR_5->mc_data = VAR_6;
    VAR_5->mc_length = 1024;
    VAR_7 = FUNC_1(VAR_4->mlx_buffer_dmat, VAR_5->mc_dmamap, VAR_5->mc_data,
       VAR_5->mc_length, VAR_3, VAR_5, VAR_0);

 out:
    if (VAR_7 != 0) {
 if (VAR_5 != ((void*)0))
     FUNC_7(VAR_5);
 if ((VAR_6 != ((void*)0)) && (VAR_5->mc_data != ((void*)0)))
     FUNC_3(VAR_6, VAR_1);
    }
}
