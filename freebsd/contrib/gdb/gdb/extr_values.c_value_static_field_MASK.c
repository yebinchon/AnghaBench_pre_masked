
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (struct minimal_symbol*) ;
 int FUNC_2 (struct minimal_symbol*) ;
 int FUNC_3 (struct type*,int) ;
 scalar_t__ FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*,int) ;
 char* FUNC_6 (struct type*,int) ;
 int FUNC_7 (struct type*,int) ;
 int FUNC_8 (struct value*) ;
 scalar_t__ FUNC_9 (struct value*) ;
 int VAR_0 ;
 struct minimal_symbol* FUNC_10 (char*,int *,int *) ;
 struct symbol* FUNC_11 (char*,int ,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 struct value* FUNC_12 (struct symbol*,int *) ;
 scalar_t__ FUNC_13 (struct symbol*) ;
 struct value* FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (char*) ;

struct value *
FUNC_16 (struct type *VAR_2, int VAR_3)
{
  struct value *VAR_4;

  if (FUNC_4 (VAR_2, VAR_3))
    {
      VAR_4 = FUNC_14 (FUNC_7 (VAR_2, VAR_3),
    FUNC_5 (VAR_2, VAR_3),
    ((void*)0));
    }
  else
    {
      char *VAR_5 = FUNC_6 (VAR_2, VAR_3);
      struct symbol *VAR_6 = FUNC_11 (VAR_5, 0, VAR_0, 0, ((void*)0));
      if (VAR_6 == ((void*)0))
 {


   struct minimal_symbol *VAR_7 = FUNC_10 (VAR_5, ((void*)0), ((void*)0));
   if (!VAR_7)
     return ((void*)0);
   else
     {
       VAR_4 = FUNC_14 (FUNC_7 (VAR_2, VAR_3),
     FUNC_2 (VAR_7),
     FUNC_1 (VAR_7));
     }
 }
      else
 {


   if (FUNC_13 (VAR_6))
     FUNC_15 ("static field's value depends on the current "
       "frame - bad debug info?");
   VAR_4 = FUNC_12 (VAR_6, ((void*)0));
  }
      if (VAR_4 && FUNC_9 (VAR_4) == VAR_1)
 FUNC_0 (FUNC_3 (VAR_2, VAR_3),
       FUNC_8 (VAR_4));
    }
  return VAR_4;
}
