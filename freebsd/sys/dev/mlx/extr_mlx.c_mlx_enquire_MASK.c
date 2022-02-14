
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_buffer_dmat; } ;
struct mlx_command {int mc_flags; size_t mc_length; int mc_command; void (* mc_complete ) (struct mlx_command*) ;void* mc_data; int mc_dmamap; struct mlx_command* mc_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,void*,size_t,int ,struct mlx_command*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (size_t,int ,int ) ;
 struct mlx_command* FUNC_5 (struct mlx_softc*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct mlx_command*) ;
 int FUNC_7 (struct mlx_command*) ;

__attribute__((used)) static void *
FUNC_8(struct mlx_softc *VAR_6, int VAR_7, size_t VAR_8, void (* VAR_9)(struct mlx_command *VAR_10))
{
    struct mlx_command *VAR_11;
    void *VAR_12;
    int VAR_13;

    FUNC_2(1);
    FUNC_0(VAR_6);


    VAR_13 = 1;
    VAR_12 = ((void*)0);
    if ((VAR_11 = FUNC_5(VAR_6)) == ((void*)0))
 goto out;

    if ((VAR_12 = FUNC_4(VAR_8, VAR_3, VAR_4)) == ((void*)0))
 goto out;

    VAR_11->mc_flags |= VAR_2 | VAR_1;
    if (FUNC_6(VAR_11))
 goto out;


    VAR_11->mc_data = VAR_12;
    VAR_11->mc_length = VAR_8;
    VAR_11->mc_command = VAR_7;

    if (VAR_9 != ((void*)0)) {
 VAR_11->mc_complete = VAR_9;
 VAR_11->mc_private = VAR_11;
    }

    VAR_13 = FUNC_1(VAR_6->mlx_buffer_dmat, VAR_11->mc_dmamap, VAR_11->mc_data,
       VAR_11->mc_length, VAR_5, VAR_11, VAR_0);

 out:

    if ((VAR_11 != ((void*)0)) && (VAR_11->mc_complete == ((void*)0)))
 FUNC_7(VAR_11);

    if ((VAR_13 != 0) && (VAR_12 != ((void*)0))) {
 FUNC_3(VAR_12, VAR_3);
 VAR_12 = ((void*)0);
    }
    return(VAR_12);
}
