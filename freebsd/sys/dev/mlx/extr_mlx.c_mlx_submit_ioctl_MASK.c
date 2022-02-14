
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mlx_sysdrive {int ms_state; } ;
struct mlx_softc {int mlx_background; struct mlx_sysdrive* mlx_sysdrive; } ;
typedef int int32_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int FUNC_2 (struct mlx_softc*,int) ;

int
FUNC_3(struct mlx_softc *VAR_7, struct mlx_sysdrive *VAR_8, u_long VAR_9,
  caddr_t VAR_10, int32_t VAR_11, struct thread *VAR_12)
{
    int *VAR_13 = (int *)VAR_10;
    int VAR_14, VAR_15;

    switch(VAR_9) {



    case 128:
 FUNC_0(VAR_7);
 *VAR_13 = VAR_8->ms_state;
 FUNC_1(VAR_7);
 return(0);




    case 129:
 FUNC_0(VAR_7);
 if (VAR_7->mlx_background != 0) {
     FUNC_1(VAR_7);
     *VAR_13 = 0x0106;
     return(VAR_0);
 }
 VAR_15 = FUNC_2(VAR_7, VAR_8 - &VAR_7->mlx_sysdrive[0]);
 switch (VAR_15) {
 case 0:
     VAR_14 = 0;
     break;
 case 0x10000:
     VAR_14 = VAR_4;
     break;
 case 0x0002:
     VAR_14 = VAR_2;
     break;
 case 0x0105:
     VAR_14 = VAR_5;
     break;
 case 0x0106:
     VAR_14 = VAR_0;
     break;
 default:
     VAR_14 = VAR_1;
     break;
 }
 if (VAR_14 == 0)
     VAR_7->mlx_background = VAR_6;
 FUNC_1(VAR_7);
 *VAR_13 = VAR_15;
 return(VAR_14);

    }
    return(VAR_3);
}
