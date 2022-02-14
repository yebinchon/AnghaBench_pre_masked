
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_7)
{
  rtx VAR_8, VAR_9, VAR_10;;

  if (VAR_7 == VAR_3 || FUNC_0 (VAR_7) != VAR_1)
    return 0;

  VAR_8 = FUNC_1 (VAR_7);

  if (FUNC_0 (VAR_8) != VAR_5)
    return 0;

  VAR_9 = FUNC_5 (VAR_8, 0);
  VAR_10 = FUNC_5 (VAR_8, 1);

  VAR_9 = FUNC_4 (VAR_9);



  if (FUNC_0 (VAR_9) != VAR_4
      || FUNC_3 (FUNC_2 (VAR_9)) != VAR_0)
    return 0;




  return (FUNC_0 (VAR_10) == VAR_2
   || FUNC_0 (VAR_10) == VAR_6
   || FUNC_6 (VAR_7, -1, 0));
}
