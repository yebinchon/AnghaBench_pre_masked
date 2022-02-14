
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct loop*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;

tree
FUNC_5 (struct loop *VAR_5, tree VAR_6)
{
  tree VAR_7;

  if (VAR_3 && (VAR_4 & VAR_1))
    {
      FUNC_2 (VAR_3, "(analyze_scalar_evolution \n");
      FUNC_2 (VAR_3, "  (loop_nb = %d)\n", VAR_5->num);
      FUNC_2 (VAR_3, "  (scalar = ");
      FUNC_4 (VAR_3, VAR_6, 0);
      FUNC_2 (VAR_3, ")\n");
    }

  VAR_7 = FUNC_1 (VAR_5, VAR_6, FUNC_3 (VAR_6));

  if (FUNC_0 (VAR_6) == VAR_0 && VAR_7 == VAR_2)
    VAR_7 = VAR_6;

  if (VAR_3 && (VAR_4 & VAR_1))
    FUNC_2 (VAR_3, ")\n");

  return VAR_7;
}
