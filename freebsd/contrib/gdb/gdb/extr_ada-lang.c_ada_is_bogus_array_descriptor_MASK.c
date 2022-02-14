
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*) ;
 int * FUNC_2 (struct type*,char*,int) ;

int
FUNC_3 (struct type *VAR_1)
{
  return
    VAR_1 != ((void*)0)
    && FUNC_0 (VAR_1) == VAR_0
    && (FUNC_2 (VAR_1, "P_BOUNDS", 1) != ((void*)0)
 || FUNC_2 (VAR_1, "P_ARRAY", 1) != ((void*)0))
    && !FUNC_1 (VAR_1);
}
