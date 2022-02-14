
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (char*,size_t,int) ;
 struct type* FUNC_1 (char*) ;
 char* FUNC_2 (struct type*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

struct type *
FUNC_5 (struct type *VAR_0, const char *VAR_1)
{
  static char *VAR_2;
  static size_t VAR_3 = 0;
  struct symbol **VAR_4;
  struct block **VAR_5;
  int VAR_6;
  int VAR_7;
  char *VAR_8 = FUNC_2 (VAR_0);

  if (VAR_8 == ((void*)0))
    return ((void*)0);

  VAR_7 = FUNC_4 (VAR_8);

  FUNC_0 (VAR_2, VAR_3, VAR_7 + FUNC_4 (VAR_1) + 1);

  FUNC_3 (VAR_2, VAR_8);
  FUNC_3 (VAR_2 + VAR_7, VAR_1);

  return FUNC_1 (VAR_2);
}
