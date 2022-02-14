
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * constraint_handler_t ;


 scalar_t__ VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int **) ;
 int ** FUNC_3 (int) ;

constraint_handler_t
FUNC_4(constraint_handler_t VAR_3)
{
 constraint_handler_t *VAR_4, *VAR_5, VAR_6;

 VAR_4 = FUNC_3(sizeof(constraint_handler_t));
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 *VAR_4 = VAR_3;
 if (VAR_0)
  FUNC_0(&VAR_2);
 VAR_5 = VAR_1;
 VAR_1 = VAR_4;
 if (VAR_0)
  FUNC_1(&VAR_2);
 if (VAR_5 == ((void*)0)) {
  VAR_6 = ((void*)0);
 } else {
  VAR_6 = *VAR_5;
  FUNC_2(VAR_5);
 }
 return (VAR_6);
}
