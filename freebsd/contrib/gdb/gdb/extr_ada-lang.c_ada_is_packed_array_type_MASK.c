
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int * FUNC_1 (struct type*) ;
 int * FUNC_2 (int *,char*) ;

int
FUNC_3 (struct type *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return 0;
  FUNC_0 (VAR_0);
  return
    FUNC_1 (VAR_0) != ((void*)0)
    && FUNC_2 (FUNC_1 (VAR_0), "___XP") != ((void*)0);
}
