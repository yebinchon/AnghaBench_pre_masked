
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx_softc {TYPE_1__* mlx_sysdrive; int mlx_dev; int (* mlx_intaction ) (struct mlx_softc*,int ) ;int mlx_state; } ;
struct TYPE_2__ {scalar_t__ ms_disk; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx_softc*) ;
 int FUNC_2 (struct mlx_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct mlx_softc*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct mlx_softc*,int ) ;

__attribute__((used)) static int
FUNC_9(struct mlx_softc *VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_3(1);

    FUNC_0(VAR_3);

    FUNC_1(VAR_3);
    VAR_3->mlx_state |= VAR_2;
    VAR_3->mlx_intaction(VAR_3, VAR_0);


    FUNC_5(VAR_3->mlx_dev, "flushing cache...");
    if (FUNC_6(VAR_3)) {
 FUNC_7("failed\n");
    } else {
 FUNC_7("done\n");
    }
    FUNC_2(VAR_3);


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
 if (VAR_3->mlx_sysdrive[VAR_4].ms_disk != 0) {
     if ((VAR_5 = FUNC_4(VAR_3->mlx_dev, VAR_3->mlx_sysdrive[VAR_4].ms_disk)) != 0)
  return (VAR_5);
     VAR_3->mlx_sysdrive[VAR_4].ms_disk = 0;
 }
    }

    return (0);
}
