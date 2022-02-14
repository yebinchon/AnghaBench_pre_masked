
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct fn_field {int dummy; } ;


 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct type* FUNC_2 (struct value*) ;
 struct type* FUNC_3 (struct type*) ;
 int FUNC_4 (char*) ;
 struct fn_field* FUNC_5 (struct value**,char*,int ,struct type*,int*,struct type**,int*) ;
 struct value* FUNC_6 (struct value*) ;

struct fn_field *
FUNC_7 (struct value **VAR_6, char *VAR_7, int VAR_8,
         int *VAR_9, struct type **VAR_10,
         int *VAR_11)
{
  struct type *VAR_12;

  VAR_12 = FUNC_3 (FUNC_2 (*VAR_6));


  while (FUNC_1 (VAR_12) == VAR_2 || FUNC_1 (VAR_12) == VAR_3)
    {
      *VAR_6 = FUNC_6 (*VAR_6);

      if (FUNC_1 (FUNC_2 (*VAR_6)) != VAR_0)
 FUNC_0 (*VAR_6);
      VAR_12 = FUNC_3 (FUNC_2 (*VAR_6));
    }

  if (FUNC_1 (VAR_12) == VAR_1)
    FUNC_4 ("Not implemented: member type in value_find_oload_lis");

  if (FUNC_1 (VAR_12) != VAR_4
      && FUNC_1 (VAR_12) != VAR_5)
    FUNC_4 ("Attempt to extract a component of a value that is not a struct or union");

  return FUNC_5 (VAR_6, VAR_7, 0, VAR_12, VAR_9, VAR_10, VAR_11);
}
