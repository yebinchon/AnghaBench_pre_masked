
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct minimal_symbol*) ;
 int VAR_1 ;
 struct type* VAR_2 ;
 int FUNC_2 (char*,...) ;
 struct type* FUNC_3 (struct type*) ;
 struct minimal_symbol* FUNC_4 (char const*,int *,int *) ;
 struct type* FUNC_5 (struct type*) ;
 struct symbol* FUNC_6 (char const*,int ,int ,int ,int *) ;
 int VAR_3 ;
 struct value* FUNC_7 (struct type*,int ) ;
 struct value* FUNC_8 (struct symbol*,int *) ;

struct value *
FUNC_9 (const char *VAR_4)
{
  struct symbol *VAR_5;
  VAR_5 = FUNC_6 (VAR_4, 0, VAR_1, 0, ((void*)0));
  if (VAR_5 != ((void*)0))
    {
      if (FUNC_0 (VAR_5) != VAR_0)
 {
   FUNC_2 ("\"%s\" exists in this program but is not a function.",
   VAR_4);
 }
      return FUNC_8 (VAR_5, ((void*)0));
    }
  else
    {
      struct minimal_symbol *VAR_6 = FUNC_4 (VAR_4, ((void*)0), ((void*)0));
      if (VAR_6 != ((void*)0))
 {
   struct type *VAR_7;
   CORE_ADDR VAR_8;
   VAR_7 = FUNC_5 (VAR_2);
   VAR_7 = FUNC_3 (VAR_7);
   VAR_7 = FUNC_5 (VAR_7);
   VAR_8 = FUNC_1 (VAR_6);
   return FUNC_7 (VAR_7, VAR_8);
 }
      else
 {
   if (!VAR_3)
     FUNC_2 ("evaluation of this expression requires the target program to be active");
   else
     FUNC_2 ("evaluation of this expression requires the program to have a function \"%s\".", VAR_4);
 }
    }
}
