
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
 char* FUNC_4 (scalar_t__) ;
 char* FUNC_5 (struct type*,int,int) ;
 scalar_t__ FUNC_6 (char*) ;
 struct symbol* FUNC_7 (char*,int *,int ,int*,struct symtab**) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11 (int VAR_1, struct type *VAR_2,
        struct symbol **VAR_3)
{
  int VAR_4;
  int VAR_5 = 0;

  for (VAR_4 = FUNC_1 (VAR_2, VAR_1) - 1;
       VAR_4 >= 0;
       --VAR_4)
    {
      struct fn_field *VAR_6;
      char *VAR_7;

      VAR_6 = FUNC_0 (VAR_2, VAR_1);

      if (FUNC_3 (VAR_6, VAR_4))
 {
   char *VAR_8;

   VAR_8 = FUNC_5 (VAR_2,
          VAR_1,
          VAR_4);
   VAR_7 = FUNC_4 (FUNC_9 (VAR_8) + 1);
   FUNC_8 (VAR_7, VAR_8);
   FUNC_10 (VAR_8);
 }
      else
 VAR_7 = FUNC_2 (VAR_6, VAR_4);



      if (FUNC_6 (VAR_7) != 0)
 continue;

      VAR_3[VAR_5] = FUNC_7 (VAR_7,
       ((void*)0), VAR_0,
       (int *) ((void*)0),
       (struct symtab **) ((void*)0));
      if (VAR_3[VAR_5])
 VAR_5++;
      else
 {
 }
    }

  return VAR_5;
}
