
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_xsrq_table {int num_xsrq; int shift; int mask; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_xsrq_table*,int ,int) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct mlx4_xsrq_table *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof *VAR_1);
 VAR_1->num_xsrq = VAR_2;
 VAR_1->shift = FUNC_0(VAR_2) - 1 - VAR_0;
 VAR_1->mask = (1 << VAR_1->shift) - 1;

 FUNC_2(&VAR_1->mutex, ((void*)0));
}
