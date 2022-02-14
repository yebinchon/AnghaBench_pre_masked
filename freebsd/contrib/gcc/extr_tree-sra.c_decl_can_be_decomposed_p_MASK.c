
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_3)
{

  if (FUNC_4 (FUNC_1 (VAR_3)))
    return 0;


  if (!FUNC_3 (VAR_3))
    {
      if (VAR_1 && (VAR_2 & VAR_0))
 {
   FUNC_2 (VAR_1, "Cannot scalarize variable ");
   FUNC_5 (VAR_1, VAR_3, VAR_2);
   FUNC_2 (VAR_1, " because it must live in memory\n");
 }
      return 0;
    }


  if (FUNC_0 (VAR_3))
    {
      if (VAR_1 && (VAR_2 & VAR_0))
 {
   FUNC_2 (VAR_1, "Cannot scalarize variable ");
   FUNC_5 (VAR_1, VAR_3, VAR_2);
   FUNC_2 (VAR_1, " because it is declared volatile\n");
 }
      return 0;
    }


  if (!FUNC_6 (FUNC_1 (VAR_3)))
    {
      if (VAR_1 && (VAR_2 & VAR_0))
 {
   FUNC_2 (VAR_1, "Cannot scalarize variable ");
   FUNC_5 (VAR_1, VAR_3, VAR_2);
   FUNC_2 (VAR_1, " because its type cannot be decomposed\n");
 }
      return 0;
    }

  return 1;
}
