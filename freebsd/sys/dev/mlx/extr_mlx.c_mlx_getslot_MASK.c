
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_softc {int mlx_busycmds; struct mlx_command** mlx_busycmd; TYPE_1__* mlx_enq2; } ;
struct mlx_command {int mc_flags; int mc_slot; struct mlx_softc* mc_sc; } ;
struct TYPE_2__ {int me_max_commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct mlx_command *VAR_2)
{
    struct mlx_softc *VAR_3 = VAR_2->mc_sc;
    int VAR_4, VAR_5;

    FUNC_2(1);

    FUNC_0(VAR_3);




    if (VAR_3->mlx_enq2 != ((void*)0)) {
 VAR_5 = VAR_3->mlx_enq2->me_max_commands;
    } else {
 VAR_5 = 2;
    }
    if (VAR_3->mlx_busycmds >= ((VAR_2->mc_flags & VAR_1) ? VAR_5 : VAR_5 - 4))
 return(VAR_0);






    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
 FUNC_1(2, "try slot %d", VAR_4);
 if (VAR_3->mlx_busycmd[VAR_4] == ((void*)0))
     break;
    }
    if (VAR_4 < VAR_5) {
 VAR_3->mlx_busycmd[VAR_4] = VAR_2;
 VAR_3->mlx_busycmds++;
    }


    if (VAR_4 >= VAR_5)
 return(VAR_0);

    FUNC_1(2, "got slot %d", VAR_4);
    VAR_2->mc_slot = VAR_4;
    return(0);
}
