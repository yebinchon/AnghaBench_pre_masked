
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lambda_linear_expression ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int ,int,char) ;

void
FUNC_6 (FILE * VAR_0,
    lambda_linear_expression VAR_1,
    int VAR_2, int VAR_3, char VAR_4)
{
  FUNC_4 (VAR_0, "\tLinear expression: ");
  FUNC_5 (VAR_0, FUNC_0 (VAR_1), VAR_2, VAR_4);
  FUNC_4 (VAR_0, " constant: %d ", FUNC_1 (VAR_1));
  FUNC_4 (VAR_0, "  invariants: ");
  FUNC_5 (VAR_0, FUNC_3 (VAR_1),
      VAR_3, 'A');
  FUNC_4 (VAR_0, "  denominator: %d\n", FUNC_2 (VAR_1));
}
