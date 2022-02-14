
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int dummy; } ;
struct mlx_command {int * mc_mailbox; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mlx_softc*,int ) ;
 int FUNC_3 (struct mlx_softc*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct mlx_softc *VAR_2, struct mlx_command *VAR_3)
{
    int VAR_4;

    FUNC_4(2);
    FUNC_0(VAR_2);


    if (FUNC_1(VAR_2) & VAR_0) {

 for (VAR_4 = 0; VAR_4 < 13; VAR_4++)
     FUNC_3(VAR_2, VAR_4, VAR_3->mc_mailbox[VAR_4]);


 FUNC_2(VAR_2, VAR_1);
 return(1);
    }
    return(0);
}
