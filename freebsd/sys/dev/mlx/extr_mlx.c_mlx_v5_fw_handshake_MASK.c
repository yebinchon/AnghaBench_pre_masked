
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct mlx_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx_softc*) ;
 int FUNC_2 (struct mlx_softc*) ;
 int FUNC_3 (struct mlx_softc*) ;
 int FUNC_4 (struct mlx_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct mlx_softc*,int) ;
 int FUNC_6 (struct mlx_softc*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct mlx_softc *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6,
    int VAR_7)
{
    u_int8_t VAR_8;

    FUNC_7(2);


    if (VAR_7) {
 FUNC_6(VAR_3, VAR_2);
 FUNC_0(1000);
    }


    if (FUNC_4(VAR_3) & VAR_1)
 return(0);


    VAR_8 = FUNC_1(VAR_3);
    if (!(VAR_8 & VAR_0))
 return(1);


    *VAR_4 = VAR_8 & ~VAR_0;
    *VAR_5 = FUNC_2(VAR_3);
    *VAR_6 = FUNC_3(VAR_3);


    FUNC_5(VAR_3, 0xff);

    return(2);
}
