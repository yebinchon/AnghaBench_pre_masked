
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loop_vec_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3 (loop_vec_info VAR_3)
{
  if (FUNC_2 (VAR_0))
    FUNC_0 (VAR_2, "=== vect_analyze_data_refs_alignment ===");

  if (!FUNC_1 (VAR_3))
    {
      if (FUNC_2 (VAR_1))
 FUNC_0 (VAR_2,
   "not vectorized: can't calculate alignment for data ref.");
      return 0;
    }

  return 1;
}
