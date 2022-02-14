
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct fn_field {int dummy; } ;
typedef int VALUE_ADDRESS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct minimal_symbol*) ;
 char* FUNC_3 (struct fn_field*,int) ;
 struct type* FUNC_4 (struct fn_field*,int) ;
 struct type* FUNC_5 (struct value*) ;
 int VAR_0 ;
 struct value* FUNC_6 (struct type*) ;
 int FUNC_7 (int ) ;
 struct minimal_symbol* FUNC_8 (char*,int *,int *) ;
 int FUNC_9 (struct type*) ;
 struct symbol* FUNC_10 (char*,int ,int ,int ,int *) ;
 int FUNC_11 (struct value*) ;
 int FUNC_12 (int ,int ) ;
 struct value* FUNC_13 (int ) ;

struct value *
FUNC_14 (struct value **VAR_1, struct fn_field *VAR_2, int VAR_3, struct type *VAR_4,
  int VAR_5)
{
  struct value *VAR_6;
  struct type *VAR_7 = FUNC_4 (VAR_2, VAR_3);
  char *VAR_8 = FUNC_3 (VAR_2, VAR_3);
  struct symbol *VAR_9;
  struct minimal_symbol *VAR_10;

  VAR_9 = FUNC_10 (VAR_8, 0, VAR_0, 0, ((void*)0));
  if (VAR_9 != ((void*)0))
    {
      VAR_10 = ((void*)0);
    }
  else
    {
      FUNC_7 (VAR_9 == ((void*)0));
      VAR_10 = FUNC_8 (VAR_8, ((void*)0), ((void*)0));
      if (VAR_10 == ((void*)0))
 return ((void*)0);
    }

  VAR_6 = FUNC_6 (VAR_7);
  if (VAR_9)
    {
      VALUE_ADDRESS (VAR_11) = FUNC_0 (FUNC_1 (VAR_9));
    }
  else
    {
      VALUE_ADDRESS (VAR_12) = FUNC_2 (VAR_10);
    }

  if (VAR_1)
    {
      if (VAR_4 != FUNC_5 (*VAR_1))
 *VAR_1 = FUNC_13 (FUNC_12 (FUNC_9 (VAR_4),
     FUNC_11 (*VAR_1)));




    }

  return VAR_6;
}
