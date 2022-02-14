
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {int dummy; } ;
struct macro_definition {int kind; int argc; int argv; void* replacement; struct macro_table* table; } ;
typedef enum macro_kind { ____Placeholder_macro_kind } macro_kind ;


 char** FUNC_0 (int) ;
 struct macro_definition* FUNC_1 (int,struct macro_table*) ;
 int FUNC_2 (struct macro_table*,char const**,int) ;
 void* FUNC_3 (struct macro_table*,char const*) ;
 int VAR_0 ;
 int FUNC_4 (struct macro_definition*,int ,int) ;

__attribute__((used)) static struct macro_definition *
FUNC_5 (struct macro_table *VAR_1,
                      enum macro_kind VAR_2,
                      int VAR_3, const char **VAR_4,
                      const char *VAR_5)
{
  struct macro_definition *VAR_6 = FUNC_1 (sizeof (*VAR_6), VAR_1);

  FUNC_4 (VAR_6, 0, sizeof (*VAR_6));
  VAR_6->table = VAR_1;
  VAR_6->kind = VAR_2;
  VAR_6->replacement = FUNC_3 (VAR_1, VAR_5);

  if (VAR_2 == VAR_0)
    {
      int VAR_7;
      const char **VAR_8;
      int VAR_9 = VAR_3 * sizeof (*VAR_8);


      VAR_8 = FUNC_0 (VAR_9);
      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
        VAR_8[VAR_7] = FUNC_3 (VAR_1, VAR_4[VAR_7]);


      VAR_6->argv = FUNC_2 (VAR_1, VAR_8, VAR_9);
      VAR_6->argc = VAR_3;
    }
  return VAR_6;
}
