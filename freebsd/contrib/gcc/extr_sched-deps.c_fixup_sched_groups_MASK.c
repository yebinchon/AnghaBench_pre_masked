
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_1)
{
  rtx VAR_2, VAR_3;

  for (VAR_2 = FUNC_1 (VAR_1); VAR_2 ; VAR_2 = FUNC_4 (VAR_2, 1))
    {
      rtx VAR_4 = VAR_1;
      do
 {
   VAR_4 = FUNC_7 (VAR_4);

   if (FUNC_4 (VAR_2, 0) == VAR_4)
     goto next_link;
 } while (FUNC_3 (VAR_4));
      if (! FUNC_8 (VAR_4, FUNC_4 (VAR_2, 0)))
 FUNC_5 (VAR_4, FUNC_4 (VAR_2, 0), FUNC_2 (VAR_2));
    next_link:;
    }

  FUNC_6 (VAR_1);

  VAR_3 = FUNC_7 (VAR_1);
  if (FUNC_0 (VAR_1) == FUNC_0 (VAR_3)
      && ! FUNC_8 (VAR_1, VAR_3))
    FUNC_5 (VAR_1, VAR_3, VAR_0);
}
