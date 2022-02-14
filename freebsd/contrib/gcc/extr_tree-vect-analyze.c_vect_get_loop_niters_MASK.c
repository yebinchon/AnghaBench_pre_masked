
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct loop*) ;
 scalar_t__ FUNC_2 (struct loop*) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static tree
FUNC_5 (struct loop *VAR_5, tree *VAR_6)
{
  tree VAR_7;

  if (FUNC_4 (VAR_1))
    FUNC_0 (VAR_4, "=== get_loop_niters ===");

  VAR_7 = FUNC_2 (VAR_5);

  if (VAR_7 != VAR_0
      && VAR_7 != VAR_3)
    {
      *VAR_6 = VAR_7;

      if (FUNC_4 (VAR_1))
 {
   FUNC_0 (VAR_4, "==> get_loop_niters:" );
   FUNC_3 (VAR_4, *VAR_6, VAR_2);
 }
    }

  return FUNC_1 (VAR_5);
}
