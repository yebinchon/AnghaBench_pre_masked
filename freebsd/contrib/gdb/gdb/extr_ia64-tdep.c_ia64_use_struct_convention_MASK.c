
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*) ;

int
FUNC_2 (int VAR_0, struct type *VAR_1)
{
  struct type *VAR_2;





  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 != ((void*)0)
      && FUNC_0 (VAR_1) / FUNC_0 (VAR_2) <= 8)
    return 0;



  return FUNC_0 (VAR_1) > 32;
}
