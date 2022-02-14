
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char*) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (tree VAR_6, tree VAR_7)
{
  tree *VAR_8;

  if (FUNC_0 (VAR_6) != VAR_0)
    return;

  VAR_8 = FUNC_1 (VAR_6);

  if (VAR_3)
    {
      if (VAR_4 & VAR_1)
 {
   FUNC_2 (VAR_3, "(set_scalar_evolution \n");
   FUNC_2 (VAR_3, "  (scalar = ");
   FUNC_3 (VAR_3, VAR_6, 0);
   FUNC_2 (VAR_3, ")\n  (scalar_evolution = ");
   FUNC_3 (VAR_3, VAR_7, 0);
   FUNC_2 (VAR_3, "))\n");
 }
      if (VAR_4 & VAR_2)
 VAR_5++;
    }

  *VAR_8 = VAR_7;
}
