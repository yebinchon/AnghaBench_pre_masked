
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ce_if_block {scalar_t__ num_multiple_test_blocks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ce_if_block*,int) ;
 scalar_t__ FUNC_2 (struct ce_if_block*) ;
 scalar_t__ FUNC_3 (struct ce_if_block*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_4 (struct ce_if_block * VAR_5)
{
  if (! VAR_4
      && FUNC_3 (VAR_5))
    return VAR_3;

  if (VAR_2
      && FUNC_2 (VAR_5))
    return VAR_3;

  if (VAR_1 && VAR_4)
    {




      if (FUNC_1 (VAR_5, VAR_3))
 return VAR_3;

      if (VAR_5->num_multiple_test_blocks)
 {
   FUNC_0 (0);

   if (FUNC_1 (VAR_5, VAR_0))
     return VAR_3;
 }
    }

  return VAR_0;
}
