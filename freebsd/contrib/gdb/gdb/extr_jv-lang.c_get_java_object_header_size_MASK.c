
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 () ;

int
FUNC_2 (void)
{
  struct type *VAR_2 = FUNC_1 ();
  if (VAR_2 == ((void*)0))
    return (2 * VAR_1 / VAR_0);
  else
    return FUNC_0 (VAR_2);
}
