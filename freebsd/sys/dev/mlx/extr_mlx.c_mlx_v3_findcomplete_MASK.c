
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;
struct mlx_softc {int dummy; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int FUNC_2 (struct mlx_softc*) ;
 int FUNC_3 (struct mlx_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct mlx_softc*,int ) ;
 int FUNC_5 (struct mlx_softc*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct mlx_softc *VAR_2, u_int8_t *VAR_3, u_int16_t *VAR_4)
{

    FUNC_6(2);
    FUNC_0(VAR_2);


    if (FUNC_1(VAR_2) & VAR_1) {
 *VAR_3 = FUNC_3(VAR_2);
 *VAR_4 = FUNC_2(VAR_2);


 FUNC_5(VAR_2, VAR_1);
 FUNC_4(VAR_2, VAR_0);
 return(1);
    }
    return(0);
}
