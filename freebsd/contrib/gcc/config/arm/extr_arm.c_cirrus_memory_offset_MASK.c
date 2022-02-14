
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int
FUNC_4 (rtx VAR_13)
{

  if (! (VAR_8 || VAR_7)
      && ( FUNC_3 (VAR_6, VAR_13)
   || FUNC_3 (VAR_5, VAR_13)
   || FUNC_3 (VAR_9, VAR_13)
   || FUNC_3 (VAR_10, VAR_13)
   || FUNC_3 (VAR_11, VAR_13)
   || FUNC_3 (VAR_12, VAR_13)))
    return 0;

  if (FUNC_0 (VAR_13) == VAR_1)
    {
      rtx VAR_14;

      VAR_14 = FUNC_2 (VAR_13, 0);


      if (FUNC_0 (VAR_14) == VAR_3)
 return 1;




      if (FUNC_0 (VAR_14) == VAR_2
   && FUNC_0 (FUNC_2 (VAR_14, 0)) == VAR_3
   && FUNC_1 (FUNC_2 (VAR_14, 0), VAR_4)
   && FUNC_0 (FUNC_2 (VAR_14, 1)) == VAR_0)
 return 1;
    }

  return 0;
}
