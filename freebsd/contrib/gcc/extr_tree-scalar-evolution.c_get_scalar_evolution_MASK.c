
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char*) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_6)
{
  tree VAR_7;

  if (VAR_3)
    {
      if (VAR_4 & VAR_0)
 {
   FUNC_2 (VAR_3, "(get_scalar_evolution \n");
   FUNC_2 (VAR_3, "  (scalar = ");
   FUNC_3 (VAR_3, VAR_6, 0);
   FUNC_2 (VAR_3, ")\n");
 }
      if (VAR_4 & VAR_1)
 VAR_5++;
    }

  switch (FUNC_0 (VAR_6))
    {
    case 128:
      VAR_7 = *FUNC_1 (VAR_6);
      break;

    case 129:
    case 130:
      VAR_7 = VAR_6;
      break;

    default:
      VAR_7 = VAR_2;
      break;
    }

  if (VAR_3 && (VAR_4 & VAR_0))
    {
      FUNC_2 (VAR_3, "  (scalar_evolution = ");
      FUNC_3 (VAR_3, VAR_7, 0);
      FUNC_2 (VAR_3, "))\n");
    }

  return VAR_7;
}
