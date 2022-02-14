
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct propagate_block_info {int dummy; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (struct propagate_block_info*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static int
FUNC_14 (struct propagate_block_info *VAR_4, rtx VAR_5, rtx VAR_6)
{
  rtx VAR_7 = FUNC_13 (VAR_6);

  if (VAR_7)
    {
      rtx VAR_8 = FUNC_8 (VAR_7);

      if (FUNC_7 (VAR_8) || FUNC_1 (VAR_8) == VAR_3)
 {
   rtx VAR_9 = FUNC_9 (VAR_5, 0);
   rtx VAR_10;
   int VAR_11;


   while (VAR_9 != VAR_6 && !FUNC_0 (VAR_9))
     VAR_9 = FUNC_3 (VAR_9);



   if (VAR_9 == VAR_6)
     return 0;



   VAR_10 = FUNC_4 (VAR_9);
   if (FUNC_1 (VAR_10) == VAR_1)
     {
       for (VAR_11 = FUNC_11 (VAR_10, 0) - 1; VAR_11 >= 0; VAR_11--)
  if (FUNC_1 (FUNC_10 (VAR_10, 0, VAR_11)) == VAR_2
      && FUNC_1 (FUNC_8 (FUNC_10 (VAR_10, 0, VAR_11))) == VAR_0)
    break;




       if (VAR_11 < 0)
  return 0;

       VAR_10 = FUNC_10 (VAR_10, 0, VAR_11);
     }

   if (! FUNC_12 (VAR_4, VAR_10, 1, FUNC_6 (VAR_9)))
     return 0;

   while ((VAR_6 = FUNC_5 (VAR_6)) != VAR_9)
     {
       if (! FUNC_2 (VAR_6))
  continue;
       if (! FUNC_12 (VAR_4, FUNC_4 (VAR_6), 0, FUNC_6 (VAR_6)))
  return 0;
     }
   return 1;
 }
    }
  return 0;
}
