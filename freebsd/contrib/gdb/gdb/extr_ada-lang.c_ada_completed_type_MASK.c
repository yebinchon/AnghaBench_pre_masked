
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct type*) ;
 int VAR_1 ;
 char* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (char*) ;

struct type *
FUNC_5 (struct type *VAR_2)
{
  FUNC_0 (VAR_2);
  if (VAR_2 == ((void*)0) || FUNC_1 (VAR_2) != VAR_0
      || (FUNC_2 (VAR_2) & VAR_1) == 0
      || FUNC_3 (VAR_2) == ((void*)0))
    return VAR_2;
  else
    {
      char *VAR_3 = FUNC_3 (VAR_2);
      struct type *VAR_4 = FUNC_4 (VAR_3);
      return (VAR_4 == ((void*)0)) ? VAR_2 : VAR_4;
    }
}
