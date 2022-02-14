
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int user_dsos; int kernel_dsos; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,int *,int) ;

size_t FUNC_1(struct machine *VAR_0, FILE *VAR_1,
         bool VAR_2)
{
 return FUNC_0(&VAR_0->kernel_dsos, VAR_1, VAR_2) +
        FUNC_0(&VAR_0->user_dsos, VAR_1, VAR_2);
}
