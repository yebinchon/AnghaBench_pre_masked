
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int** lambda_matrix ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (lambda_matrix VAR_1, tree VAR_2, unsigned VAR_3, int VAR_4)
{
  FUNC_3 (VAR_2);

  if (FUNC_2 (VAR_2) != VAR_0)
    return FUNC_4 (VAR_2);

  VAR_1[VAR_3][0] = VAR_4 * FUNC_4 (FUNC_1 (VAR_2));
  return FUNC_5 (VAR_1, FUNC_0 (VAR_2), VAR_3 + 1, VAR_4);
}
