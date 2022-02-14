
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct value*) ;
 struct type* FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (char*,struct type*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (struct type*,int*,int*) ;
 struct value* FUNC_9 (char*,struct value*,int ,struct type*,int ) ;
 struct value* FUNC_10 (char*,struct value**,struct value**,int ,int*,struct type*) ;
 struct value* FUNC_11 (int *,int ,int,int *,int ) ;
 struct value* FUNC_12 (struct value*) ;

struct value *
FUNC_13 (struct value **VAR_6, struct value **VAR_7,
    char *VAR_8, int *VAR_9, char *VAR_10)
{
  struct type *VAR_11;
  struct value *VAR_12;

  FUNC_0 (*VAR_6);

  VAR_11 = FUNC_5 (FUNC_4 (*VAR_6));



  while (FUNC_1 (VAR_11) == VAR_2 || FUNC_1 (VAR_11) == VAR_3)
    {
      *VAR_6 = FUNC_12 (*VAR_6);

      if (FUNC_1 (FUNC_4 (*VAR_6)) != VAR_0)
 FUNC_0 (*VAR_6);
      VAR_11 = FUNC_5 (FUNC_4 (*VAR_6));
    }

  if (FUNC_1 (VAR_11) == VAR_1)
    FUNC_7 ("not implemented: member type in value_struct_elt");

  if (FUNC_1 (VAR_11) != VAR_4
      && FUNC_1 (VAR_11) != VAR_5)
    FUNC_7 ("Attempt to extract a component of a value that is not a %s.", VAR_10);


  if (VAR_9)
    *VAR_9 = 0;

  if (!VAR_7)
    {




      VAR_12 = FUNC_9 (VAR_8, *VAR_6, 0, VAR_11, 0);
      if (VAR_12)
 return VAR_12;




      if (FUNC_6 (VAR_8, VAR_11))
 FUNC_7 ("Cannot get value of destructor");

      VAR_12 = FUNC_10 (VAR_8, VAR_6, VAR_7, 0, VAR_9, VAR_11);

      if (VAR_12 == (struct value *) - 1)
 FUNC_7 ("Cannot take address of a method");
      else if (VAR_12 == 0)
 {
   if (FUNC_3 (VAR_11))
     FUNC_7 ("There is no member or method named %s.", VAR_8);
   else
     FUNC_7 ("There is no member named %s.", VAR_8);
 }
      return VAR_12;
    }

  if (FUNC_6 (VAR_8, VAR_11))
    {
      if (!VAR_7[1])
 {

   int VAR_13, VAR_14;

   VAR_12 = ((void*)0);
   if (FUNC_8 (VAR_11, &VAR_13, &VAR_14))
     {
       VAR_12 = FUNC_11 (((void*)0), FUNC_2 (VAR_11, VAR_13),
      VAR_14, ((void*)0), 0);
     }
   if (VAR_12 == ((void*)0))
     FUNC_7 ("could not find destructor function named %s.", VAR_8);
   else
     return VAR_12;
 }
      else
 {
   FUNC_7 ("destructor should not have any argument");
 }
    }
  else
    VAR_12 = FUNC_10 (VAR_8, VAR_6, VAR_7, 0, VAR_9, VAR_11);

  if (VAR_12 == (struct value *) - 1)
    {
      FUNC_7 ("One of the arguments you tried to pass to %s could not be converted to what the function wants.", VAR_8);
    }
  else if (VAR_12 == 0)
    {



      VAR_12 = FUNC_9 (VAR_8, *VAR_6, 0, VAR_11, 0);
    }

  if (!VAR_12)
    FUNC_7 ("Structure has no component named %s.", VAR_8);
  return VAR_12;
}
