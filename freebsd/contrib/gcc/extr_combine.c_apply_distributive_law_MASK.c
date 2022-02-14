
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;





 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;

 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;
 int VAR_5 ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (int,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static rtx
FUNC_19 (rtx VAR_6)
{
  enum rtx_code VAR_7 = FUNC_2 (VAR_6);
  enum rtx_code VAR_8;
  rtx VAR_9, VAR_10, VAR_11;
  rtx VAR_12;



  if (FUNC_1 (FUNC_3 (VAR_6))
      && ! VAR_5)
    return VAR_6;


  if (VAR_7 != 131 && VAR_7 != 134 && VAR_7 != VAR_4
      && VAR_7 != VAR_2 && VAR_7 != VAR_0)
    return VAR_6;

  VAR_9 = FUNC_12 (VAR_6, 0);
  VAR_10 = FUNC_12 (VAR_6, 1);



  if (FUNC_7 (VAR_9) || FUNC_7 (VAR_10))
    return VAR_6;

  VAR_9 = FUNC_13 (VAR_9);
  VAR_10 = FUNC_13 (VAR_10);
  VAR_8 = FUNC_2 (VAR_9);
  if (VAR_8 != FUNC_2 (VAR_10))
    return VAR_6;


  switch (VAR_8)
    {
    case 130:
    case 132:
    case 134:
    case 131:

      if (VAR_7 == VAR_2 || VAR_7 == VAR_0)
 return VAR_6;
      break;

    case 129:
      if (VAR_7 != VAR_2 && VAR_7 != VAR_0)
 return VAR_6;
      break;

    case 133:

      break;

    case 128:
      if (FUNC_3 (FUNC_9 (VAR_9)) != FUNC_3 (FUNC_9 (VAR_10))
   || FUNC_8 (VAR_9) != FUNC_8 (VAR_10)
   || ! FUNC_18 (VAR_9)
   || (FUNC_5 (FUNC_3 (VAR_9))
       != FUNC_5 (FUNC_3 (FUNC_9 (VAR_9))))
   || (FUNC_6 (FUNC_3 (VAR_9))
       > FUNC_6 (FUNC_3 (FUNC_9 (VAR_9))))
   || FUNC_11 (FUNC_3 (VAR_9))
   || FUNC_6 (FUNC_3 (FUNC_9 (VAR_9))) > VAR_3


   || !FUNC_10
        (FUNC_4 (FUNC_3 (VAR_6)),
  FUNC_4 (FUNC_3 (FUNC_9 (VAR_9)))))
 return VAR_6;

      VAR_12 = FUNC_16 (VAR_7, FUNC_3 (FUNC_9 (VAR_9)),
     FUNC_9 (VAR_9), FUNC_9 (VAR_10));
      return FUNC_14 (FUNC_3 (VAR_6), VAR_12);

    default:
      return VAR_6;
    }





  if (FUNC_0 (VAR_9)
      && FUNC_15 (FUNC_12 (VAR_9, 0), FUNC_12 (VAR_10, 0)))
    VAR_11 = FUNC_12 (VAR_9, 0), VAR_9 = FUNC_12 (VAR_9, 1), VAR_10 = FUNC_12 (VAR_10, 1);
  else if (FUNC_0 (VAR_9)
    && FUNC_15 (FUNC_12 (VAR_9, 0), FUNC_12 (VAR_10, 1)))
    VAR_11 = FUNC_12 (VAR_9, 0), VAR_9 = FUNC_12 (VAR_9, 1), VAR_10 = FUNC_12 (VAR_10, 0);
  else if (FUNC_0 (VAR_9)
    && FUNC_15 (FUNC_12 (VAR_9, 1), FUNC_12 (VAR_10, 0)))
    VAR_11 = FUNC_12 (VAR_9, 1), VAR_9 = FUNC_12 (VAR_9, 0), VAR_10 = FUNC_12 (VAR_10, 1);
  else if (FUNC_15 (FUNC_12 (VAR_9, 1), FUNC_12 (VAR_10, 1)))
    VAR_11 = FUNC_12 (VAR_9, 1), VAR_9 = FUNC_12 (VAR_9, 0), VAR_10 = FUNC_12 (VAR_10, 0);
  else
    return VAR_6;


  VAR_12 = FUNC_16 (VAR_7, FUNC_3 (VAR_6), VAR_9, VAR_10);



  if (VAR_7 == VAR_4 && VAR_8 == 131)
    {
      VAR_8 = 134;
      VAR_11 = FUNC_17 (VAR_1, FUNC_3 (VAR_6), VAR_11, FUNC_3 (VAR_6));
    }




  return FUNC_16 (VAR_8, FUNC_3 (VAR_6),
         FUNC_19 (VAR_12), VAR_11);
}
