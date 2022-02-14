
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user {int * u_fpstate; } ;


 int VAR_0 ;
 int* VAR_1 ;

int
FUNC_0 (int VAR_2, int VAR_3)
{
  if (VAR_3 < VAR_0)
    return (VAR_2 + 4 * VAR_1[VAR_3]);
  else
    return (int) &(((struct user *) 0)->u_fpstate[VAR_1[VAR_3]]);
}
