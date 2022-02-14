
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 struct type* FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct type*) ;


 struct symbol* FUNC_3 (char const*,struct block*,int ,int *,int *) ;
 int FUNC_4 (char*,char const*) ;

struct type *
FUNC_5 (const char *VAR_2, struct block *VAR_3)
{
  struct symbol * VAR_4;
  struct type * VAR_5;

  VAR_4 = FUNC_3 (VAR_2, VAR_3, VAR_1, ((void*)0), ((void*)0));

  if (VAR_4 == ((void*)0))
    {
      FUNC_4 ("RTTI symbol not found for class '%s'", VAR_2);
      return ((void*)0);
    }

  if (FUNC_0 (VAR_4) != VAR_0)
    {
      FUNC_4 ("RTTI symbol for class '%s' is not a type", VAR_2);
      return ((void*)0);
    }

  VAR_5 = FUNC_1 (VAR_4);

  switch (FUNC_2 (VAR_5))
    {
    case 129:
      break;
    case 128:




      FUNC_4 ("RTTI symbol for class '%s' is a namespace", VAR_2);
      return ((void*)0);
    default:
      FUNC_4 ("RTTI symbol for class '%s' has bad type", VAR_2);
      return ((void*)0);
    }

  return VAR_5;
}
