
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int flag; int cost; scalar_t__ exp; struct table_elt* next_same_value; struct table_elt* first_same_value; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 unsigned int FUNC_4 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,int,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int VAR_11 ;
 struct table_elt* FUNC_15 (scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_19 (rtx VAR_12, rtx *VAR_13, enum machine_mode VAR_14)
{
  struct table_elt *VAR_15;
  rtx VAR_16 = *VAR_13;
  struct table_elt *VAR_17;
  int VAR_18 = 1;
  int VAR_19 = VAR_9;
  int VAR_20 = VAR_11;
  int VAR_21;
  int VAR_22;
  unsigned VAR_23;
  if ((FUNC_3 (VAR_16) == VAR_7
       && FUNC_6 (FUNC_7 (VAR_16, 0))
       && FUNC_3 (FUNC_7 (VAR_16, 1)) == VAR_1
       && (VAR_22 = FUNC_5 (FUNC_7 (VAR_16, 0)),
    VAR_22 == VAR_3 || VAR_22 == VAR_4
    || VAR_22 == VAR_0))
      || (FUNC_6 (VAR_16)
   && (VAR_22 = FUNC_5 (VAR_16), VAR_22 == VAR_3
       || VAR_22 == VAR_4
       || VAR_22 == VAR_0))
      || FUNC_1 (VAR_16))
    return;





  if (!FUNC_6 (VAR_16))
    {
      rtx VAR_24 = FUNC_10 (FUNC_14 (VAR_16, VAR_6));

      if (VAR_24 != VAR_16)
 {
   int VAR_25 = FUNC_8 (VAR_24, VAR_14);
   int VAR_26 = FUNC_8 (VAR_16, VAR_14);

   if ((VAR_25 < VAR_26
        || (VAR_25 == VAR_26


     && (FUNC_16 (VAR_24, VAR_5) > FUNC_16 (VAR_16, VAR_5)
         || FUNC_9 (VAR_24) < FUNC_9 (VAR_16))))
       && FUNC_18 (VAR_12, VAR_13, VAR_24, 0))
     VAR_16 = VAR_24;
 }
    }




  VAR_9 = 0;
  VAR_23 = FUNC_4 (VAR_16, VAR_8);
  VAR_21 = VAR_9;
  VAR_9 = VAR_19;
  VAR_11 = VAR_20;

  if (VAR_21)
    return;

  VAR_15 = FUNC_15 (VAR_16, VAR_23, VAR_8);

  if (VAR_15)
    {





      for (VAR_17 = VAR_15->first_same_value; VAR_17; VAR_17 = VAR_17->next_same_value)
 VAR_17->flag = 0;

      while (VAR_18)
 {
   int VAR_27 = FUNC_8 (*VAR_13, VAR_14);
   int VAR_28 = (VAR_15->cost + 1) >> 1;
   int VAR_29;
   struct table_elt *VAR_30 = VAR_15;

   VAR_18 = 0;
   for (VAR_17 = VAR_15->first_same_value; VAR_17; VAR_17 = VAR_17->next_same_value)
     if (! VAR_17->flag)
       {
  if ((FUNC_6 (VAR_17->exp)
       || FUNC_13 (VAR_17->exp, VAR_17->exp, 1, 0))
      && ((VAR_29 = FUNC_8 (VAR_17->exp, VAR_14)) < VAR_27
   || (VAR_29 == VAR_27
       && ((VAR_17->cost + 1) >> 1) > VAR_28)))
    {
      VAR_18 = 1;
      VAR_27 = VAR_29;
      VAR_28 = (VAR_17->cost + 1) >> 1;
      VAR_30 = VAR_17;
    }
       }

   if (VAR_18)
     {
       if (FUNC_18 (VAR_12, VAR_13,
       FUNC_11 (FUNC_12 (VAR_30->exp),
           VAR_6), 0))
  return;
       else
  VAR_30->flag = 1;
     }
 }
    }
  if (VAR_10
      && FUNC_0 (*VAR_13)
      && FUNC_6 (FUNC_7 (*VAR_13, 0)))
    {
      rtx VAR_31 = FUNC_7 (*VAR_13, 1);

      VAR_9 = 0;
      VAR_23 = FUNC_4 (FUNC_7 (*VAR_13, 0), VAR_8);
      VAR_9 = VAR_19;
      VAR_11 = VAR_20;

      VAR_15 = FUNC_15 (FUNC_7 (*VAR_13, 0), VAR_23, VAR_8);
      if (VAR_15 == 0)
 return;






      for (VAR_17 = VAR_15->first_same_value; VAR_17; VAR_17 = VAR_17->next_same_value)
 VAR_17->flag = 0;

      while (VAR_18)
 {
   int VAR_32 = FUNC_8 (*VAR_13, VAR_14);
   int VAR_33 = (FUNC_2 (*VAR_13) + 1) >> 1;
   struct table_elt *VAR_34 = VAR_15;
   rtx VAR_35 = *VAR_13;
   int VAR_36;







   VAR_18 = 0;
   for (VAR_17 = VAR_15->first_same_value, VAR_36 = 0;
        VAR_17 && VAR_36 < 32;
        VAR_17 = VAR_17->next_same_value, VAR_36++)
     if (! VAR_17->flag
  && (FUNC_6 (VAR_17->exp)
      || (FUNC_3 (VAR_17->exp) != VAR_2
   && FUNC_13 (VAR_17->exp, VAR_17->exp, 1, 0))))

       {
  rtx VAR_37 = FUNC_17 (FUNC_3 (*VAR_13), VAR_8,
            VAR_17->exp, VAR_31);
  int VAR_38;



  VAR_37 = FUNC_10 (VAR_37);

  VAR_38 = FUNC_8 (VAR_37, VAR_14);

  if (VAR_38 < VAR_32
      || (VAR_38 == VAR_32
   && (FUNC_2 (VAR_37) + 1) >> 1 > VAR_33))
    {
      VAR_18 = 1;
      VAR_32 = VAR_38;
      VAR_33 = (FUNC_2 (VAR_37) + 1) >> 1;
      VAR_34 = VAR_17;
      VAR_35 = VAR_37;
    }
       }

   if (VAR_18)
     {
       if (FUNC_18 (VAR_12, VAR_13,
       FUNC_11 (FUNC_12 (VAR_35),
           VAR_6), 0))
  return;
       else
  VAR_34->flag = 1;
     }
 }
    }
}
