
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {scalar_t__ attributes; } ;
typedef TYPE_1__ cp_decl_specifier_seq ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,...) ;

tree
FUNC_9 (cp_decl_specifier_seq *VAR_3)
{
  tree VAR_4 = FUNC_2 (VAR_3);

  if (!VAR_4)
    return VAR_1;

  if (VAR_3->attributes)
    {
      FUNC_8 (0, "attribute ignored in declaration of %q+#T", VAR_4);
      FUNC_8 (0, "attribute for %q+#T must follow the %qs keyword",
        VAR_4, FUNC_3 (VAR_4));

    }

  if (FUNC_7 (VAR_4) == VAR_2)
    return VAR_1;






  if (FUNC_0 (VAR_4))
    {
      FUNC_5 (VAR_4);

      if (FUNC_1 (VAR_4))
 {
   tree VAR_5 = FUNC_6 ( ((void*)0),
          VAR_3, VAR_0, 0, ((void*)0));
   FUNC_4 (VAR_5);
 }
    }

  return VAR_4;
}
