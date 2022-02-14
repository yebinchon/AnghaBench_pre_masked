
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 char* FUNC_2 (struct type*,int) ;

int
FUNC_3 (struct type *VAR_0, int VAR_1)
{
  const char *VAR_2 = FUNC_2 (VAR_0, VAR_1);
  return (VAR_2 != ((void*)0)
   && (FUNC_1 (VAR_2, "PARENT", 6) || FUNC_0 (VAR_2, "REP")
       || FUNC_1 (VAR_2, "_parent", 7)
       || VAR_2[0] == 'S' || VAR_2[0] == 'R' || VAR_2[0] == 'O'));
}
