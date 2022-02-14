
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_6)
{
  int VAR_7 = 0;

  if (!FUNC_1 (VAR_6) || !FUNC_5 (VAR_6))
    return 0;


  if (FUNC_0 (FUNC_2 (VAR_6)) == VAR_5
      && FUNC_4 (FUNC_2 (VAR_6), 1) == VAR_4)
    return 0;
  if (FUNC_0 (VAR_6) == VAR_3
      && (FUNC_0 (FUNC_2 (VAR_6)) == VAR_1
   || FUNC_0 (FUNC_2 (VAR_6)) == VAR_0))
    return 0;



  if (FUNC_0 (VAR_6) == VAR_2
      && FUNC_8 (FUNC_2 (VAR_6))
      && !FUNC_3 (VAR_6))
    return 5;
  if (FUNC_6 (VAR_6) <= 1)
    return 1;




  if (FUNC_0 (VAR_6) != VAR_3)
    {
      VAR_7 = FUNC_7 (VAR_6);
      if (VAR_7 < 4 && FUNC_8 (FUNC_2 (VAR_6)))
 VAR_7 = 4;
    }
  if (VAR_7)
    return 1+VAR_7;
  else
    return 2;
}
