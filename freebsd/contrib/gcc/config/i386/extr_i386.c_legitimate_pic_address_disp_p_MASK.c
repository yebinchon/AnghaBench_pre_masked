
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int const VAR_0 ;
 int const FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int const VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;




 int VAR_9 ;



 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

int
FUNC_10 (rtx VAR_10)
{
  bool VAR_11;



  if (VAR_3)
    {
      rtx VAR_12 = VAR_10, VAR_13;

      switch (FUNC_0 (VAR_10))
 {
 case 136:
   return 1;

 case 137:
   if (FUNC_0 (FUNC_5 (VAR_10, 0)) != VAR_1)
     break;
   VAR_12 = FUNC_5 (FUNC_5 (VAR_10, 0), 0);
   VAR_13 = FUNC_5 (FUNC_5 (VAR_10, 0), 1);
   if (FUNC_0 (VAR_13) != VAR_0
       || FUNC_1 (VAR_13) >= 16*1024*1024
       || FUNC_1 (VAR_13) < -16*1024*1024)
            break;
   if (FUNC_0 (VAR_12) == 136)
     return 1;
   if (FUNC_0 (VAR_12) != 135)
     break;


 case 135:

   if (FUNC_4 (VAR_12))
     return 0;
   if (!FUNC_2 (VAR_12) && FUNC_3 (VAR_12))
     return 1;
   break;

 default:
   break;
 }
    }
  if (FUNC_0 (VAR_10) != 137)
    return 0;
  VAR_10 = FUNC_5 (VAR_10, 0);

  if (VAR_3)
    {


      if (FUNC_0 (VAR_10) != VAR_8
   || (FUNC_6 (VAR_10, 1) != VAR_9
       && FUNC_6 (VAR_10, 1) != 131))
 return 0;

      if (FUNC_0 (FUNC_7 (VAR_10, 0, 0)) != 135
   && FUNC_0 (FUNC_7 (VAR_10, 0, 0)) != 136)
 return 0;
      return 1;
    }

  VAR_11 = 0;
  if (FUNC_0 (VAR_10) == VAR_1)
    {
      if (FUNC_0 (FUNC_5 (VAR_10, 1)) != VAR_0)
 return 0;
      VAR_10 = FUNC_5 (VAR_10, 0);
      VAR_11 = 1;
    }

  if (VAR_4 && FUNC_8 (VAR_10))
    return 1;

  if (FUNC_0 (VAR_10) != VAR_8)
    return 0;

  switch (FUNC_6 (VAR_10, 1))
    {
    case 133:
      if (VAR_11)
 return 0;
      return FUNC_0 (FUNC_7 (VAR_10, 0, 0)) == 135;
    case 131:



      if ((FUNC_0 (FUNC_7 (VAR_10, 0, 0)) == 135
    || FUNC_0 (FUNC_7 (VAR_10, 0, 0)) == 136)
   && !VAR_3)
        return FUNC_9 (FUNC_7 (VAR_10, 0, 0), VAR_2);
      return 0;
    case 130:
    case 132:
    case 129:
      if (VAR_11)
 return 0;
      VAR_10 = FUNC_7 (VAR_10, 0, 0);
      return (FUNC_0 (VAR_10) == 135
       && FUNC_4 (VAR_10) == VAR_5);
    case 128:
      VAR_10 = FUNC_7 (VAR_10, 0, 0);
      return (FUNC_0 (VAR_10) == 135
       && FUNC_4 (VAR_10) == VAR_7);
    case 134:
      VAR_10 = FUNC_7 (VAR_10, 0, 0);
      return (FUNC_0 (VAR_10) == 135
       && FUNC_4 (VAR_10) == VAR_6);
    }

  return 0;
}
