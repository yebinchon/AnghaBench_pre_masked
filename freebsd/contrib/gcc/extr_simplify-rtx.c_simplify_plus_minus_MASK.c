
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simplify_plus_minus_op_data {scalar_t__ op; int neg; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;



 scalar_t__ FUNC_0 (scalar_t__) ;

 int const FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;



 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (int,int,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct simplify_plus_minus_op_data*,int ,int) ;
 scalar_t__ FUNC_10 (int,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (struct simplify_plus_minus_op_data*,struct simplify_plus_minus_op_data*) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_16 (enum rtx_code VAR_2, enum machine_mode VAR_3, rtx VAR_4,
       rtx VAR_5)
{
  struct simplify_plus_minus_op_data VAR_6[8];
  rtx VAR_7, VAR_8;
  int VAR_9 = 2, VAR_10 = 2;
  int VAR_11, VAR_12 = 0, VAR_13 = 0;
  int VAR_14, VAR_15;

  FUNC_9 (VAR_6, 0, sizeof VAR_6);





  VAR_6[0].op = VAR_4;
  VAR_6[0].neg = 0;
  VAR_6[1].op = VAR_5;
  VAR_6[1].neg = (VAR_2 == 131);

  do
    {
      VAR_11 = 0;

      for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
 {
   rtx VAR_16 = VAR_6[VAR_14].op;
   int VAR_17 = VAR_6[VAR_14].neg;
   enum rtx_code VAR_18 = FUNC_1 (VAR_16);

   switch (VAR_18)
     {
     case 128:
     case 131:
       if (VAR_9 == 7)
  return VAR_0;

       VAR_6[VAR_9].op = FUNC_4 (VAR_16, 1);
       VAR_6[VAR_9].neg = (VAR_18 == 131) ^ VAR_17;
       VAR_9++;

       VAR_6[VAR_14].op = FUNC_4 (VAR_16, 0);
       VAR_10++;
       VAR_11 = 1;
       VAR_13 |= VAR_17;
       break;

     case 130:
       VAR_6[VAR_14].op = FUNC_4 (VAR_16, 0);
       VAR_6[VAR_14].neg = ! VAR_17;
       VAR_11 = 1;
       VAR_13 = 1;
       break;

     case 133:
       if (VAR_9 < 7
    && FUNC_1 (FUNC_4 (VAR_16, 0)) == 128
    && FUNC_0 (FUNC_4 (FUNC_4 (VAR_16, 0), 0))
    && FUNC_0 (FUNC_4 (FUNC_4 (VAR_16, 0), 1)))
  {
    VAR_6[VAR_14].op = FUNC_4 (FUNC_4 (VAR_16, 0), 0);
    VAR_6[VAR_9].op = FUNC_4 (FUNC_4 (VAR_16, 0), 1);
    VAR_6[VAR_9].neg = VAR_17;
    VAR_9++;
    VAR_11 = 1;
           VAR_13 = 1;
  }
       break;

     case 129:

       if (VAR_9 != 7)
  {
    VAR_6[VAR_9].op = VAR_1;
    VAR_6[VAR_9++].neg = VAR_17;
    VAR_6[VAR_14].op = FUNC_4 (VAR_16, 0);
    VAR_6[VAR_14].neg = !VAR_17;
    VAR_11 = 1;
           VAR_13 = 1;
  }
       break;

     case 132:
       VAR_12++;
       if (VAR_17)
  {
    VAR_6[VAR_14].op = FUNC_10 (VAR_3, VAR_16);
    VAR_6[VAR_14].neg = 0;
    VAR_11 = 1;
           VAR_13 = 1;
  }
       break;

     default:
       break;
     }
 }
    }
  while (VAR_11);

  if (VAR_12 > 1)
    VAR_13 = 1;

  FUNC_5 (VAR_9 >= 2);


  if (VAR_9 == 2)
    {
      enum rtx_code VAR_19 = VAR_6[0].neg || VAR_6[1].neg ? 131 : 128;
      rtx VAR_20, VAR_21;



      if (VAR_6[0].neg && VAR_6[1].neg)
 {
   VAR_20 = FUNC_7 (VAR_3, VAR_6[0].op);
   VAR_21 = VAR_6[1].op;
 }
      else if (VAR_6[0].neg)
 {
   VAR_20 = VAR_6[1].op;
   VAR_21 = VAR_6[0].op;
 }
      else
 {
   VAR_20 = VAR_6[0].op;
   VAR_21 = VAR_6[1].op;
 }

      return FUNC_13 (VAR_19, VAR_3, VAR_20, VAR_21);
    }


  do
    {

      for (VAR_14 = 1; VAR_14 < VAR_9; VAR_14++)
        {
          struct simplify_plus_minus_op_data VAR_22;
          VAR_15 = VAR_14 - 1;
          if (FUNC_14 (&VAR_6[VAR_15], &VAR_6[VAR_14]) < 0)
     continue;

          VAR_13 = 1;
          VAR_22 = VAR_6[VAR_14];
          do
     VAR_6[VAR_15 + 1] = VAR_6[VAR_15];
          while (VAR_15-- && FUNC_14 (&VAR_6[VAR_15], &VAR_22) > 0);
          VAR_6[VAR_15 + 1] = VAR_22;
        }


      if (!VAR_13)
        return VAR_0;

      VAR_11 = 0;
      for (VAR_14 = VAR_9 - 1; VAR_14 > 0; VAR_14--)
 for (VAR_15 = VAR_14 - 1; VAR_15 >= 0; VAR_15--)
   {
     rtx VAR_23 = VAR_6[VAR_15].op, VAR_24 = VAR_6[VAR_14].op;
     int VAR_25 = VAR_6[VAR_15].neg, VAR_26 = VAR_6[VAR_14].neg;

     if (VAR_23 != 0 && VAR_24 != 0)
       {
  enum rtx_code VAR_27 = 128;

  if (VAR_25 != VAR_26)
    {
      VAR_27 = 131;
      if (VAR_25)
        VAR_8 = VAR_23, VAR_23 = VAR_24, VAR_24 = VAR_8;
    }
  else if (FUNC_15 (VAR_23, VAR_24))
    VAR_8 = VAR_23, VAR_23 = VAR_24, VAR_24 = VAR_8;

  if ((FUNC_1 (VAR_23) == 133 || FUNC_1 (VAR_23) == 132)
      && (FUNC_1 (VAR_24) == 133 || FUNC_1 (VAR_24) == 132))
    {
      rtx VAR_28, VAR_29;

      VAR_28 = FUNC_1 (VAR_23) == 133 ? FUNC_4 (VAR_23, 0) : VAR_23;
      VAR_29 = FUNC_1 (VAR_24) == 133 ? FUNC_4 (VAR_24, 0) : VAR_24;
      VAR_8 = FUNC_12 (VAR_27, VAR_3, VAR_28, VAR_29);

      if (VAR_8 && !FUNC_0 (VAR_8))
        VAR_8 = FUNC_6 (FUNC_2 (VAR_8), VAR_8);
    }
  else
    VAR_8 = FUNC_12 (VAR_27, VAR_3, VAR_23, VAR_24);





  if (VAR_8
      && ! (FUNC_1 (VAR_8) == 133
     && FUNC_1 (FUNC_4 (VAR_8, 0)) == VAR_27
     && FUNC_4 (FUNC_4 (VAR_8, 0), 0) == VAR_23
     && FUNC_4 (FUNC_4 (VAR_8, 0), 1) == VAR_24))
    {
      VAR_25 &= VAR_26;
      if (FUNC_1 (VAR_8) == 130)
        VAR_8 = FUNC_4 (VAR_8, 0), VAR_25 = !VAR_25;
      if (FUNC_1 (VAR_8) == 132 && VAR_25)
        VAR_8 = FUNC_10 (VAR_3, VAR_8), VAR_25 = 0;

      VAR_6[VAR_14].op = VAR_8;
      VAR_6[VAR_14].neg = VAR_25;
      VAR_6[VAR_15].op = VAR_0;
      VAR_11 = 1;
    }
       }
   }


      for (VAR_14 = 0, VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
        if (VAR_6[VAR_15].op)
          {
     VAR_6[VAR_14] = VAR_6[VAR_15];
     VAR_14++;
          }
      VAR_9 = VAR_14;
    }
  while (VAR_11);


  if (VAR_9 == 2
      && FUNC_1 (VAR_6[1].op) == 132
      && FUNC_0 (VAR_6[0].op)
      && VAR_6[0].neg)
    return FUNC_8 (131, VAR_3, VAR_6[1].op, VAR_6[0].op);







  if (VAR_9 > 1
      && FUNC_1 (VAR_6[VAR_9 - 1].op) == 132
      && FUNC_0 (VAR_6[VAR_9 - 2].op))
    {
      rtx VAR_30 = VAR_6[VAR_9 - 1].op;
      if (VAR_6[VAR_9 - 1].neg ^ VAR_6[VAR_9 - 2].neg)
 VAR_30 = FUNC_10 (VAR_3, VAR_30);
      VAR_6[VAR_9 - 2].op = FUNC_11 (VAR_6[VAR_9 - 2].op, FUNC_3 (VAR_30));
      VAR_9--;
    }



  for (VAR_14 = 0; VAR_14 < VAR_9 && VAR_6[VAR_14].neg; VAR_14++)
    continue;
  if (VAR_14 == VAR_9)
    VAR_6[0].op = FUNC_7 (VAR_3, VAR_6[0].op);
  else if (VAR_14 != 0)
    {
      VAR_8 = VAR_6[0].op;
      VAR_6[0] = VAR_6[VAR_14];
      VAR_6[VAR_14].op = VAR_8;
      VAR_6[VAR_14].neg = 1;
    }


  VAR_7 = VAR_6[0].op;
  for (VAR_14 = 1; VAR_14 < VAR_9; VAR_14++)
    VAR_7 = FUNC_8 (VAR_6[VAR_14].neg ? 131 : 128,
        VAR_3, VAR_7, VAR_6[VAR_14].op);

  return VAR_7;
}
