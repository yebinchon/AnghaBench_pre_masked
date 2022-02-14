
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_spinlock {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int) ;

void
FUNC_1(struct i40e_spinlock *VAR_2)
{
 FUNC_0(&VAR_2->mutex, "mutex",
     "ixl spinlock", VAR_0 | VAR_1);
}
