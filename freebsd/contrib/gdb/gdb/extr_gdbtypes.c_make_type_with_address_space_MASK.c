
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*,int,int *) ;

struct type *
FUNC_2 (struct type *VAR_3, int VAR_4)
{
  struct type *VAR_5;
  int VAR_6 = ((FUNC_0 (VAR_3)
      & ~(VAR_1 | VAR_2
          | VAR_0))
     | VAR_4);

  return FUNC_1 (VAR_3, VAR_6, ((void*)0));
}
