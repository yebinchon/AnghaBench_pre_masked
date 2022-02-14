
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {size_t locked_shm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct user_struct*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(size_t VAR_3, struct user_struct *VAR_4)
{
 FUNC_1(&VAR_2);
 VAR_4->locked_shm -= (VAR_3 + VAR_1 - 1) >> VAR_0;
 FUNC_2(&VAR_2);
 FUNC_0(VAR_4);
}
