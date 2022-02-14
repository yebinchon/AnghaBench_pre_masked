
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;


 struct type* FUNC_0 (struct symbol*) ;
 char* FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (int) ;

const char *
FUNC_7 (struct symbol *VAR_0)
{
  struct type *VAR_1;
  const char *VAR_2;
  int VAR_3;
  char *VAR_4;

  VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 == ((void*)0) || FUNC_2 (VAR_1) < 1)
    FUNC_3 ("Improperly encoded renaming.");

  VAR_2 = FUNC_1 (VAR_1, 0);
  VAR_3 = (VAR_2 == ((void*)0) ? 0 : FUNC_4 (VAR_2)) - 5;
  if (VAR_3 <= 0)
    FUNC_3 ("Improperly encoded renaming.");

  VAR_4 = FUNC_6 (VAR_3 + 1);


  FUNC_5 (VAR_4, VAR_2, VAR_3);
  VAR_4[VAR_3] = '\000';
  return VAR_4;
}
