
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct scope_binding {scalar_t__ value; } ;
struct cp_binding_level {scalar_t__ kind; int using_directives; struct cp_binding_level* level_chain; } ;
typedef int cxx_binding ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct scope_binding VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (struct scope_binding*,int *,int) ;
 struct cp_binding_level* VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int * FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (scalar_t__,struct scope_binding*,int ,scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_7, int VAR_8)
{
  tree VAR_9 = FUNC_5 ();
  tree VAR_10 = VAR_9;
  tree VAR_11;
  struct cp_binding_level *VAR_12;
  tree VAR_13 = VAR_1;

  FUNC_8 (VAR_2);

  for (; !VAR_13; VAR_10 = FUNC_0 (VAR_10))
    {
      struct scope_binding VAR_14 = VAR_0;
      cxx_binding *VAR_15 =
  FUNC_6 (FUNC_2 (VAR_10), VAR_7);

      if (VAR_15)

 FUNC_4 (&VAR_14, VAR_15, VAR_8);


      for (VAR_12 = VAR_3;
    VAR_12->kind != VAR_6;
    VAR_12 = VAR_12->level_chain)
 if (!FUNC_7 (VAR_7, &VAR_14, VAR_12->using_directives,
         VAR_10, VAR_8))

   FUNC_3 (VAR_2, VAR_4);



      VAR_11 = VAR_9;
      while (1)
 {
   if (!FUNC_7 (VAR_7, &VAR_14,
           FUNC_1 (VAR_11),
           VAR_10, VAR_8))

     FUNC_3 (VAR_2, VAR_4);
   if (VAR_11 == VAR_10) break;
   VAR_11 = FUNC_0 (VAR_11);
 }

      VAR_13 = VAR_14.value;
      if (VAR_10 == VAR_5)
 break;
    }
  FUNC_3 (VAR_2, VAR_13);
}
