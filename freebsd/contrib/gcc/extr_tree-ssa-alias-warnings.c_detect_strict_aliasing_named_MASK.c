
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct ptr_info_def {scalar_t__ name_mem_tag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct ptr_info_def* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  unsigned int VAR_2;

  for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
    {
      tree VAR_3 = FUNC_3 (VAR_2);
      struct ptr_info_def *VAR_4;

      if (VAR_3 == VAR_0)
 continue;

      VAR_4 = FUNC_1 (VAR_3);

      if (!FUNC_0 (VAR_3) && VAR_4 && VAR_4->name_mem_tag)
 FUNC_2 (VAR_3);
    }
}
