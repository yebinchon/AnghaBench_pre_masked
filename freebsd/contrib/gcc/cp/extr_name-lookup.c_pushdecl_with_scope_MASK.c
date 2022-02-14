
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cp_binding_level {scalar_t__ kind; } ;
typedef struct cp_binding_level cxx_scope ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 struct cp_binding_level* VAR_2 ;
 struct cp_binding_level* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;

tree
FUNC_4 (tree VAR_6, cxx_scope *VAR_7, bool VAR_8)
{
  struct cp_binding_level *VAR_9;
  tree VAR_10 = VAR_4;

  FUNC_3 (VAR_1);
  VAR_4 = VAR_0;
  if (VAR_7->kind == VAR_5)
    {
      VAR_9 = VAR_2;
      VAR_2 = VAR_7;
      FUNC_1 (VAR_6);
      VAR_2 = VAR_9;
    }
  else
    {
      VAR_9 = VAR_3;
      VAR_3 = VAR_7;
      VAR_6 = FUNC_2 (VAR_6, VAR_8);
      VAR_3 = VAR_9;
    }
  VAR_4 = VAR_10;
  FUNC_0 (VAR_1, VAR_6);
}
