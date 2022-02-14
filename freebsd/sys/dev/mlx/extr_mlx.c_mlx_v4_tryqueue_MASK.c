
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_mem; } ;
struct mlx_command {int * mc_mailbox; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mlx_softc*,int ) ;
 int FUNC_3 (struct mlx_softc*,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct mlx_softc *VAR_5, struct mlx_command *VAR_6)
{
    int VAR_7;

    FUNC_5(2);
    FUNC_0(VAR_5);


    if (!(FUNC_1(VAR_5) & VAR_1)) {

 for (VAR_7 = 0; VAR_7 < 13; VAR_7++)
     FUNC_3(VAR_5, VAR_7, VAR_6->mc_mailbox[VAR_7]);


 FUNC_4(VAR_5->mlx_mem, VAR_3, VAR_4,
     VAR_0);


 FUNC_2(VAR_5, VAR_2);
 return(1);
    }
    return(0);
}
