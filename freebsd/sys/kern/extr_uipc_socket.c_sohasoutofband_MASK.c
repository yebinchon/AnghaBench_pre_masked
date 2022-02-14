
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rdsel; int * so_sigio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ,int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct socket *VAR_2)
{

 if (VAR_2->so_sigio != ((void*)0))
  FUNC_0(&VAR_2->so_sigio, VAR_1, 0);
 FUNC_1(&VAR_2->so_rdsel, VAR_0);
}
