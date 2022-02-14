
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_sysdrive {scalar_t__ ms_disk; } ;
struct mlx_softc {struct mlx_sysdrive* mlx_sysdrive; } ;


 int FUNC_0 (struct mlx_softc*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct mlx_sysdrive *
FUNC_2(struct mlx_softc *VAR_1, int VAR_2)
{
    int VAR_3;


    FUNC_0(VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

 if (VAR_1->mlx_sysdrive[VAR_3].ms_disk != 0) {

     if (VAR_2 == FUNC_1(VAR_1->mlx_sysdrive[VAR_3].ms_disk))
  return(&VAR_1->mlx_sysdrive[VAR_3]);
 }
    }
    return(((void*)0));
}
