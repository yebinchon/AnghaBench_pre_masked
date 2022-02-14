
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct mlx_softc {int mlx_dev; int mlx_busycmds; struct mlx_command** mlx_busycmd; scalar_t__ (* mlx_findcomplete ) (struct mlx_softc*,size_t*,scalar_t__*) ;} ;
struct mlx_command {scalar_t__ mc_status; } ;


 int FUNC_0 (struct mlx_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (struct mlx_softc*) ;
 int FUNC_4 (struct mlx_softc*) ;
 scalar_t__ FUNC_5 (struct mlx_softc*,size_t*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(struct mlx_softc *VAR_1, int VAR_2)
{
    struct mlx_command *VAR_3;
    int VAR_4;
    u_int8_t VAR_5;
    u_int16_t VAR_6;

    FUNC_1(2);
    FUNC_0(VAR_1);

    VAR_4 = 0;


    for (;;) {

 if (VAR_1->mlx_findcomplete(VAR_1, &VAR_5, &VAR_6)) {
     VAR_4 = 1;
     VAR_3 = VAR_1->mlx_busycmd[VAR_5];
     if (VAR_3 != ((void*)0)) {
  if (VAR_3->mc_status == VAR_0) {
      VAR_3->mc_status = VAR_6;


      VAR_1->mlx_busycmd[VAR_5] = ((void*)0);
      VAR_1->mlx_busycmds--;
  } else {
      FUNC_2(VAR_1->mlx_dev, "duplicate done event for slot %d\n", VAR_5);
  }
     } else {
  FUNC_2(VAR_1->mlx_dev, "done event for nonbusy slot %d\n", VAR_5);
     }
 } else {
     break;
 }
    }


    if (VAR_4 && VAR_2)
 FUNC_4(VAR_1);


    FUNC_3(VAR_1);

    return(VAR_4);
}
