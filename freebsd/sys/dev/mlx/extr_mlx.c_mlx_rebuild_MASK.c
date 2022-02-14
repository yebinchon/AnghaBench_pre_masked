
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_dev; } ;
struct mlx_command {int mc_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 struct mlx_command* FUNC_3 (struct mlx_softc*) ;
 int FUNC_4 (struct mlx_command*) ;
 scalar_t__ FUNC_5 (struct mlx_command*) ;
 int FUNC_6 (struct mlx_command*,int ,int,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx_command*) ;
 scalar_t__ FUNC_8 (struct mlx_command*) ;

__attribute__((used)) static int
FUNC_9(struct mlx_softc *VAR_1, int VAR_2, int VAR_3)
{
    struct mlx_command *VAR_4;
    int VAR_5;

    FUNC_1(1);
    FUNC_0(VAR_1);


    VAR_5 = 0x10000;
    if ((VAR_4 = FUNC_3(VAR_1)) == ((void*)0))
 goto out;

    if (FUNC_5(VAR_4))
 goto out;


    FUNC_6(VAR_4, VAR_0, VAR_2, VAR_3, 0, 0, 0, 0, 0, 0);


    if (FUNC_8(VAR_4))
 goto out;


    if (VAR_4->mc_status != 0) {
 FUNC_2(VAR_1->mlx_dev, "REBUILD ASYNC failed - %s\n", FUNC_4(VAR_4));
    } else {
 FUNC_2(VAR_1->mlx_dev, "drive rebuild started for %d:%d\n", VAR_2, VAR_3);
    }
    VAR_5 = VAR_4->mc_status;

 out:
    if (VAR_4 != ((void*)0))
 FUNC_7(VAR_4);
    return(VAR_5);
}
