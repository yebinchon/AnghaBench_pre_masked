
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int dummy; } ;


 struct fn_field* FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 char* FUNC_2 (struct fn_field*,int) ;
 scalar_t__ FUNC_3 (struct fn_field*,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 struct symbol* FUNC_5 (char*,int *,int ,int*,struct symtab**) ;

__attribute__((used)) static int
FUNC_6 (int VAR_1, struct type *VAR_2,
    struct symbol **VAR_3)
{
  int VAR_4;
  int VAR_5 = 0;





  for (VAR_4
  = FUNC_1 (VAR_2, VAR_1) - 1;
       VAR_4 >= 0;
       --VAR_4)
    {
      struct fn_field *VAR_6;
      char *VAR_7;

      VAR_6 = FUNC_0 (VAR_2, VAR_1);



      if (FUNC_3 (VAR_6, VAR_4))
 continue;
      VAR_7 = FUNC_2 (VAR_6, VAR_4);
      if (! FUNC_4 (VAR_7))
 continue;



      VAR_3[VAR_5] = FUNC_5 (VAR_7,
       ((void*)0), VAR_0,
       (int *) ((void*)0),
       (struct symtab **) ((void*)0));
      if (VAR_3[VAR_5])
 VAR_5++;
    }

  return VAR_5;
}
