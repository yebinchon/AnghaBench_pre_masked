
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (rtx VAR_5, int VAR_6)
{
  int VAR_7;

  if (FUNC_1 (VAR_5) != VAR_4)
    return 0;

  VAR_7 = FUNC_2 (VAR_5);

  if (VAR_6)
    return FUNC_0 (VAR_7);

  return (VAR_7 <= VAR_3
   || VAR_7 >= VAR_1
   || VAR_7 == VAR_2
   || VAR_7 == VAR_0);
}
