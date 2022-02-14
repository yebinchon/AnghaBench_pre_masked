
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct scope_binding {scalar_t__ value; } ;
typedef int cxx_binding ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_6 (struct scope_binding*,int *,int) ;
 int * FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_2, struct scope_binding *VAR_3,
   tree VAR_4, tree VAR_5, int VAR_6)
{
  tree VAR_7;
  FUNC_8 (VAR_0);


  for (VAR_7 = VAR_4; VAR_7; VAR_7 = FUNC_3 (VAR_7))
    if (FUNC_5 (VAR_7) == VAR_5)
      {
 tree VAR_8 = FUNC_1 (FUNC_4 (VAR_7));
 cxx_binding *VAR_9 =
   FUNC_7 (FUNC_0 (VAR_8), VAR_2);

 if (VAR_9)

   FUNC_6 (VAR_3, VAR_9, VAR_6);
      }
  FUNC_2 (VAR_0, VAR_3->value != VAR_1);
}
