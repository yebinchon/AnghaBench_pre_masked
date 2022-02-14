
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_softc {TYPE_1__* mlx_sysdrive; int mlx_dev; } ;
struct mlx_command {int mc_status; } ;
struct TYPE_2__ {int ms_disk; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 struct mlx_command* FUNC_3 (struct mlx_softc*) ;
 int FUNC_4 (struct mlx_command*) ;
 scalar_t__ FUNC_5 (struct mlx_command*) ;
 int FUNC_6 (struct mlx_command*,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_7 (struct mlx_command*) ;
 scalar_t__ FUNC_8 (struct mlx_command*) ;

__attribute__((used)) static int
FUNC_9(struct mlx_softc *VAR_1, int VAR_2)
{
    struct mlx_command *VAR_3;
    int VAR_4;

    FUNC_1(1);
    FUNC_0(VAR_1);


    VAR_4 = 0x10000;
    if ((VAR_3 = FUNC_3(VAR_1)) == ((void*)0))
 goto out;

    if (FUNC_5(VAR_3))
 goto out;


    FUNC_6(VAR_3, VAR_0, 0, 0, 0, 0, 0, VAR_2 | 0x80, 0, 0);


    if (FUNC_8(VAR_3))
 goto out;


    if (VAR_3->mc_status != 0) {
 FUNC_2(VAR_1->mlx_dev, "CHECK ASYNC failed - %s\n", FUNC_4(VAR_3));
    } else {
 FUNC_2(VAR_1->mlx_sysdrive[VAR_2].ms_disk, "consistency check started");
    }
    VAR_4 = VAR_3->mc_status;

 out:
    if (VAR_3 != ((void*)0))
 FUNC_7(VAR_3);
    return(VAR_4);
}
