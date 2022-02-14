
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cp_binding_level {scalar_t__ names; scalar_t__ kind; struct cp_binding_level* level_chain; } ;
typedef int location_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct cp_binding_level* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__,int const*) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_5, struct cp_binding_level* VAR_6, tree VAR_7,
         bool VAR_8, const location_t *VAR_9)
{
  struct cp_binding_level *VAR_10;
  bool VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

  if (VAR_8)
    {
      FUNC_3 (VAR_5, VAR_9);
      FUNC_2 ("  exits OpenMP structured block");
      VAR_11 = VAR_13 = 1;
    }

  for (VAR_10 = VAR_1; VAR_10 ; VAR_10 = VAR_10->level_chain)
    {
      tree VAR_14, VAR_15 = (VAR_10 == VAR_6 ? VAR_7 : VAR_0);

      for (VAR_14 = VAR_10->names; VAR_14 != VAR_15;
    VAR_14 = FUNC_0 (VAR_14))
 {
   int VAR_16 = FUNC_1 (VAR_14);
   if (! VAR_16)
     continue;

   if (!VAR_11)
     {
       FUNC_3 (VAR_5, VAR_9);
       VAR_11 = 1;
     }
   if (VAR_16 > 1)
     FUNC_2 ("  crosses initialization of %q+#D", VAR_14);
   else
     FUNC_4 ("  enters scope of non-POD %q+#D", VAR_14);
 }

      if (VAR_10 == VAR_6)
 break;
      if ((VAR_10->kind == VAR_4 || VAR_10->kind == VAR_2) && !VAR_12)
 {
   if (!VAR_11)
     {
       FUNC_3 (VAR_5, VAR_9);
       VAR_11 = 1;
     }
   if (VAR_10->kind == VAR_4)
     FUNC_2 ("  enters try block");
   else
     FUNC_2 ("  enters catch block");
   VAR_12 = 1;
 }
      if (VAR_10->kind == VAR_3 && !VAR_13)
 {
   if (!VAR_11)
     {
       FUNC_3 (VAR_5, VAR_9);
       VAR_11 = 1;
     }
   FUNC_2 ("  enters OpenMP structured block");
   VAR_13 = 1;
 }
    }

  return !VAR_11;
}
