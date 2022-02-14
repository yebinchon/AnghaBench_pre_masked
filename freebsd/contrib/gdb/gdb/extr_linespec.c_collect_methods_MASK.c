
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int dummy; } ;


 struct fn_field* FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct fn_field*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,struct type*) ;
 int FUNC_3 (struct type*,char*,struct symbol**) ;
 scalar_t__ FUNC_4 (struct type*,int*,int*) ;
 struct symbol* FUNC_5 (int ,int *,int ,int*,struct symtab**) ;

__attribute__((used)) static int
FUNC_6 (char *VAR_1, struct type *VAR_2,
   struct symbol **VAR_3)
{
  int VAR_4 = 0;

  if (FUNC_2 (VAR_1, VAR_2))
    {

      int VAR_5, VAR_6;

      if (FUNC_4 (VAR_2, &VAR_5, &VAR_6))
 {
   struct fn_field *VAR_7 = FUNC_0 (VAR_2, VAR_5);

   VAR_3[VAR_4] =
     FUNC_5 (FUNC_1 (VAR_7, VAR_6),
      ((void*)0), VAR_0, (int *) ((void*)0),
      (struct symtab **) ((void*)0));
   if (VAR_3[VAR_4])
     VAR_4++;
 }
    }
  else
    VAR_4 = FUNC_3 (VAR_2, VAR_1, VAR_3);

  return VAR_4;
}
