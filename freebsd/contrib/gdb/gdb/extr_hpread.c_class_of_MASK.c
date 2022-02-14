
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (struct type*,int ) ;
 struct type* FUNC_2 (struct type*,int ) ;
 char* FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_8 (struct type *VAR_2)
{
  struct type *VAR_3;
  char *VAR_4;
  struct type *VAR_5;
  char *VAR_6;





  if (FUNC_4 (VAR_2) == 0)
    return ((void*)0);
  VAR_4 = FUNC_1 (VAR_2, 0);
  if (VAR_4 == ((void*)0))
    return ((void*)0);
  if (FUNC_6 (VAR_4, "this"))
    return ((void*)0);
  VAR_3 = FUNC_2 (VAR_2, 0);
  if (VAR_3 == ((void*)0))
    return ((void*)0);
  if (FUNC_0 (VAR_3) != VAR_1)
    return ((void*)0);




  VAR_5 = FUNC_5 (VAR_3);
  if (VAR_5 == ((void*)0))
    return ((void*)0);
  if (FUNC_0 (VAR_5) != VAR_0)
    return ((void*)0);
  VAR_6 = FUNC_3 (VAR_5);
  if (VAR_6 == ((void*)0))
    return ((void*)0);




  if (FUNC_7 (VAR_6, "class ", 6) == 0)
    VAR_6 += 6;

  return VAR_6;
}
