
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_work; } ;
struct mlx_command {scalar_t__ mc_status; int * mc_private; int (* mc_complete ) (struct mlx_command*) ;} ;


 int FUNC_0 (struct mlx_softc*) ;
 scalar_t__ VAR_0 ;
 struct mlx_command* FUNC_1 (int *) ;
 struct mlx_command* FUNC_2 (struct mlx_command*,int ) ;
 int FUNC_3 (int *,struct mlx_command*,int ) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (struct mlx_command*) ;
 int FUNC_6 (struct mlx_command*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct mlx_softc *VAR_2)
{
    struct mlx_command *VAR_3, *VAR_4;

    FUNC_4(2);
    FUNC_0(VAR_2);


    VAR_3 = FUNC_1(&VAR_2->mlx_work);
    while (VAR_3 != ((void*)0)) {
 VAR_4 = FUNC_2(VAR_3, VAR_1);


 if (VAR_3->mc_status != VAR_0) {


     FUNC_5(VAR_3);



     if (VAR_3->mc_complete != ((void*)0)) {

  FUNC_3(&VAR_2->mlx_work, VAR_3, VAR_1);
  VAR_3->mc_complete(VAR_3);




     } else if (VAR_3->mc_private != ((void*)0)) {


  FUNC_3(&VAR_2->mlx_work, VAR_3, VAR_1);
  FUNC_7(VAR_3->mc_private);




     } else {
     }
 }
 VAR_3 = VAR_4;
    }
}
