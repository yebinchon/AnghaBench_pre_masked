
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct omp_for_data {scalar_t__ chunk_size; scalar_t__ step; scalar_t__ n2; scalar_t__ n1; } ;
typedef int basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct omp_for_data*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (basic_block VAR_2, basic_block VAR_3)
{
  struct omp_for_data VAR_4;
  tree VAR_5, VAR_6;

  VAR_5 = FUNC_4 (VAR_2);
  VAR_6 = FUNC_4 (VAR_3);

  if (FUNC_0 (VAR_6) == VAR_1)
    return 1;

  FUNC_2 (FUNC_0 (VAR_6) == VAR_0);

  FUNC_1 (VAR_6, &VAR_4);






  if (!FUNC_3 (VAR_4.n1)
      || !FUNC_3 (VAR_4.n2)
      || !FUNC_3 (VAR_4.step)
      || (VAR_4.chunk_size && !FUNC_3 (VAR_4.chunk_size)))
    return 0;

  return 1;
}
