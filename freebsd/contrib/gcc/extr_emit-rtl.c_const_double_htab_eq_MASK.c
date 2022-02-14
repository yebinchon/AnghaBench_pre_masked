
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5 (const void *VAR_1, const void *VAR_2)
{
  rtx VAR_3 = (rtx)VAR_1, VAR_4 = (rtx)VAR_2;

  if (FUNC_3 (VAR_3) != FUNC_3 (VAR_4))
    return 0;
  if (FUNC_3 (VAR_3) == VAR_0)
    return (FUNC_1 (VAR_3) == FUNC_1 (VAR_4)
     && FUNC_0 (VAR_3) == FUNC_0 (VAR_4));
  else
    return FUNC_4 (FUNC_2 (VAR_3),
      FUNC_2 (VAR_4));
}
