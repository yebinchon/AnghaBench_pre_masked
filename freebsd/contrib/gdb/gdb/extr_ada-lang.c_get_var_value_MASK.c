
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,struct symbol***,struct block***) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 struct value* FUNC_3 (struct symbol*,struct block*) ;

__attribute__((used)) static struct value *
FUNC_4 (char *VAR_1, char *VAR_2)
{
  struct symbol **VAR_3;
  struct block **VAR_4;
  int VAR_5;

  VAR_5 =
    FUNC_0 (VAR_1, FUNC_2 (((void*)0)), VAR_0,
       &VAR_3, &VAR_4);

  if (VAR_5 != 1)
    {
      if (VAR_2 == ((void*)0))
 return 0;
      else
 FUNC_1 ("%s", VAR_2);
    }

  return FUNC_3 (VAR_3[0], VAR_4[0]);
}
