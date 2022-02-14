
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (struct type*,char*,int,int *) ;

int
FUNC_2 (struct type *VAR_1)
{
  if (VAR_1 == ((void*)0) || FUNC_0 (VAR_1) != VAR_0)
    return 0;

  return (FUNC_1 (VAR_1, "_tag", 1, ((void*)0)) != ((void*)0));
}
