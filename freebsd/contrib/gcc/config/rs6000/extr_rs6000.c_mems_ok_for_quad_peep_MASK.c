
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5, VAR_6;
  unsigned int VAR_7, VAR_8;
  int VAR_9, VAR_10;


  if (FUNC_2 (VAR_3) || FUNC_2 (VAR_4))
    return 0;

  VAR_5 = FUNC_4 (VAR_3, 0);
  VAR_6 = FUNC_4 (VAR_4, 0);


  if (FUNC_0 (VAR_5) == VAR_1)
    {

      if (FUNC_0 (FUNC_4 (VAR_5, 0)) != VAR_2)
 return 0;
      else
 {
   VAR_7 = FUNC_3 (FUNC_4 (VAR_5, 0));

   if (FUNC_0 (FUNC_4 (VAR_5, 1)) != VAR_0)
     return 0;
   VAR_9 = FUNC_1 (FUNC_4 (VAR_5, 1));
 }
    }
  else if (FUNC_0 (VAR_5) != VAR_2)
    return 0;
  else
    {
      VAR_7 = FUNC_3 (VAR_5);

      VAR_9 = 0;
    }


  if (FUNC_0 (VAR_6) == VAR_1)
    {

      if (FUNC_0 (FUNC_4 (VAR_6, 0)) != VAR_2)
 return 0;
      else
 {
   VAR_8 = FUNC_3 (FUNC_4 (VAR_6, 0));

   if (FUNC_0 (FUNC_4 (VAR_6, 1)) != VAR_0)
     return 0;
   VAR_10 = FUNC_1 (FUNC_4 (VAR_6, 1));
 }
    }
  else if (FUNC_0 (VAR_6) != VAR_2)
    return 0;
  else
    {
      VAR_8 = FUNC_3 (VAR_6);

      VAR_10 = 0;
    }


  if (VAR_7 != VAR_8)
    return 0;


  if (VAR_10 != VAR_9 + 8)
    return 0;



  return 1;
}
