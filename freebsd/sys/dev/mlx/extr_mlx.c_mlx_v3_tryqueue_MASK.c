
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int dummy; } ;
struct mlx_command {int * mc_mailbox; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct mlx_softc*,int) ;
 int FUNC_3 (struct mlx_softc*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct mlx_softc *VAR_1, struct mlx_command *VAR_2)
{
    int VAR_3;

    FUNC_4(2);
    FUNC_0(VAR_1);


    if (!(FUNC_1(VAR_1) & VAR_0)) {

 for (VAR_3 = 0; VAR_3 < 13; VAR_3++)
     FUNC_3(VAR_1, VAR_3, VAR_2->mc_mailbox[VAR_3]);


 FUNC_2(VAR_1, VAR_0);
 return(1);
    }
    return(0);
}
