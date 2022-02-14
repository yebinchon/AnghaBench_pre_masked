
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct propagate_block_info {int dummy; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct propagate_block_info*,int ) ;

__attribute__((used)) static int
FUNC_4 (rtx *VAR_1, void *VAR_2)
{
  rtx VAR_3 = *VAR_1;
  struct propagate_block_info *VAR_4 = VAR_2;

  if (FUNC_1 (FUNC_0 (VAR_3)) == VAR_0)
    {
      FUNC_3 (VAR_4, FUNC_2 (VAR_3, 0));
      return -1;
    }

  return 0;
}
