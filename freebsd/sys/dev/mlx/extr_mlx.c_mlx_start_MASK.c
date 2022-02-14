
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_dev; int ** mlx_busycmd; int mlx_work; scalar_t__ (* mlx_tryqueue ) (struct mlx_softc*,struct mlx_command*) ;} ;
struct mlx_command {size_t* mc_mailbox; size_t mc_slot; int mc_status; scalar_t__ mc_timeout; struct mlx_softc* mc_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mlx_command*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (struct mlx_softc*) ;
 int FUNC_4 (struct mlx_softc*,int ) ;
 scalar_t__ FUNC_5 (struct mlx_softc*,struct mlx_command*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct mlx_command *VAR_5)
{
    struct mlx_softc *VAR_6 = VAR_5->mc_sc;
    int VAR_7;

    FUNC_1(1);


    VAR_5->mc_mailbox[0x1] = VAR_5->mc_slot;


    VAR_5->mc_status = VAR_1;


    VAR_5->mc_timeout = VAR_4 + 60;


    for (VAR_7 = 100000; VAR_7 > 0; VAR_7--) {
 if (VAR_6->mlx_tryqueue(VAR_6, VAR_5)) {

     FUNC_0(&VAR_6->mlx_work, VAR_5, VAR_3);
     return (0);
 } else if (VAR_7 > 1)
     FUNC_4(VAR_6, 0);
    }





    VAR_6->mlx_busycmd[VAR_5->mc_slot] = ((void*)0);
    FUNC_2(VAR_6->mlx_dev, "controller wedged (not taking commands)\n");
    VAR_5->mc_status = VAR_2;
    FUNC_3(VAR_6);
    return(VAR_0);
}
