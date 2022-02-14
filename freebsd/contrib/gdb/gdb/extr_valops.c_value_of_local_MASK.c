
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct symbol*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 struct symbol* FUNC_4 (scalar_t__) ;
 struct symbol* FUNC_5 (struct block*,char const*,int *,int ) ;
 struct value* FUNC_6 (struct symbol*,scalar_t__) ;

struct value *
FUNC_7 (const char *VAR_2, int VAR_3)
{
  struct symbol *VAR_4, *VAR_5;
  struct block *VAR_6;
  struct value * VAR_7;

  if (VAR_1 == 0)
    {
      if (VAR_3)
 FUNC_3 ("no frame selected");
      else
 return 0;
    }

  VAR_4 = FUNC_4 (VAR_1);
  if (!VAR_4)
    {
      if (VAR_3)
 FUNC_3 ("no `%s' in nameless context", VAR_2);
      else
 return 0;
    }

  VAR_6 = FUNC_1 (VAR_4);
  if (FUNC_2 (FUNC_0 (VAR_6)))
    {
      if (VAR_3)
 FUNC_3 ("no args, no `%s'", VAR_2);
      else
 return 0;
    }



  VAR_5 = FUNC_5 (VAR_6, VAR_2, ((void*)0), VAR_0);
  if (VAR_5 == ((void*)0))
    {
      if (VAR_3)
 FUNC_3 ("current stack frame does not contain a variable named `%s'", VAR_2);
      else
 return ((void*)0);
    }

  VAR_7 = FUNC_6 (VAR_5, VAR_1);
  if (VAR_7 == 0 && VAR_3)
    FUNC_3 ("`%s' argument unreadable", VAR_2);
  return VAR_7;
}
