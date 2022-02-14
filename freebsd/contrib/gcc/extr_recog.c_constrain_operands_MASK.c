
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct funny_match {int this; int other; } ;
typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int n_operands; scalar_t__ n_alternatives; char** constraints; int* operand_mode; scalar_t__* operand_type; int * operand; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char const*) ;
 int FUNC_5 (int ,int,char const*) ;
 int FUNC_6 (int,char const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int,char const*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_16 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 TYPE_1__ VAR_17 ;
 int FUNC_24 (int ,int,int,int) ;
 int VAR_18 ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int,int ) ;
 int FUNC_27 (char const*,char**,int) ;
 int FUNC_28 (scalar_t__,int,int ,int) ;
 int VAR_19 ;

int
FUNC_29 (int VAR_20)
{
  const char *VAR_21[VAR_6];
  int VAR_22[VAR_6];
  int VAR_23[VAR_6];
  int VAR_24;

  struct funny_match VAR_25[VAR_6];
  int VAR_26;

  VAR_19 = 0;
  if (VAR_17.n_operands == 0 || VAR_17.n_alternatives == 0)
    return 1;

  for (VAR_24 = 0; VAR_24 < VAR_17.n_operands; VAR_24++)
    {
      VAR_21[VAR_24] = VAR_17.constraints[VAR_24];
      VAR_22[VAR_24] = -1;
    }

  do
    {
      int VAR_27 = -1;
      int VAR_28;
      int VAR_29 = 0;
      VAR_26 = 0;

      for (VAR_28 = 0; VAR_28 < VAR_17.n_operands; VAR_28++)
 {
   rtx VAR_30 = VAR_17.operand[VAR_28];
   enum machine_mode VAR_31 = FUNC_8 (VAR_30);
   const char *VAR_32 = VAR_21[VAR_28];
   int VAR_33 = 0;
   int VAR_34 = 0;
   int VAR_35;
   int VAR_36;

   VAR_23[VAR_28] = 0;



   if (FUNC_17 (VAR_30))
     VAR_30 = FUNC_18 (VAR_30, 0);

   if (FUNC_7 (VAR_30) == VAR_15)
     {
       if (FUNC_14 (FUNC_16 (VAR_30))
    && FUNC_12 (FUNC_16 (VAR_30)) < VAR_4)
  VAR_33 = FUNC_28 (FUNC_12 (FUNC_16 (VAR_30)),
           FUNC_8 (FUNC_16 (VAR_30)),
           FUNC_15 (VAR_30),
           FUNC_8 (VAR_30));
       VAR_30 = FUNC_16 (VAR_30);
     }



   if (*VAR_32 == 0 || *VAR_32 == ',')
     VAR_34 = 1;

   do
     switch (VAR_24 = *VAR_32, VAR_36 = FUNC_1 (VAR_24, VAR_32), VAR_24)
       {
       case '\0':
  VAR_36 = 0;
  break;
       case ',':
  VAR_24 = '\0';
  break;

       case '?': case '!': case '*': case '%':
       case '=': case '+':
  break;

       case '#':


  do
    VAR_32++;
  while (*VAR_32 && *VAR_32 != ',');
  VAR_36 = 0;
  break;

       case '&':
  VAR_23[VAR_28] = 1;
  if (VAR_27 < 0)
    VAR_27 = VAR_28;
  break;

       case '0': case '1': case '2': case '3': case '4':
       case '5': case '6': case '7': case '8': case '9':
  {
    char *VAR_37;
    int VAR_38;

    VAR_38 = FUNC_27 (VAR_32, &VAR_37, 10);
    VAR_32 = VAR_37;

    if (VAR_20 < 0)
      VAR_35 = 1;
    else
      {
        rtx VAR_39 = VAR_17.operand[VAR_38];
        rtx VAR_40 = VAR_17.operand[VAR_28];



        if (FUNC_17 (VAR_39))
   VAR_39 = FUNC_18 (VAR_39, 0);
        if (FUNC_17 (VAR_40))
   VAR_40 = FUNC_18 (VAR_40, 0);

        VAR_35 = FUNC_23 (VAR_39, VAR_40);
      }

    VAR_22[VAR_28] = VAR_38;
    VAR_22[VAR_38] = VAR_28;

    if (VAR_35 != 0)
      VAR_34 = 1;




    if (VAR_35 == 2 && VAR_20 > 0)
      {
        VAR_25[VAR_26].this = VAR_28;
        VAR_25[VAR_26++].other = VAR_38;
      }
  }
  VAR_36 = 0;
  break;

       case 'p':




  if (VAR_20 <= 0
      || (FUNC_26 (VAR_17.operand_mode[VAR_28],
       VAR_30)))
    VAR_34 = 1;
  break;





       case 'g':


  if (FUNC_14 (VAR_30))
    {
      if (VAR_20 < 0
   || VAR_5 == VAR_0
   || (VAR_18
       && FUNC_12 (VAR_30) >= VAR_4)
   || FUNC_24 (VAR_30, VAR_5, VAR_33, VAR_31))
        VAR_34 = 1;
    }
  else if (VAR_20 < 0 || FUNC_19 (VAR_30, VAR_31))
    VAR_34 = 1;
  break;

       case 'X':



  VAR_34 = 1;
  break;

       case 'm':


  if (FUNC_11 (VAR_30))
    {
      if (VAR_20 > 0
   && !FUNC_26 (FUNC_8 (VAR_30),
           FUNC_18 (VAR_30, 0)))
        break;
      if (VAR_20 == 0
   && !FUNC_20 (FUNC_8 (VAR_30), FUNC_18 (VAR_30, 0)))
        break;
      VAR_34 = 1;
    }

  else if (VAR_20 < 0 && FUNC_0 (VAR_30))
    VAR_34 = 1;

  else if (VAR_18 && FUNC_14 (VAR_30)
    && FUNC_12 (VAR_30) >= VAR_4)
    VAR_34 = 1;
  break;

       case '<':
  if (FUNC_11 (VAR_30)
      && (FUNC_7 (FUNC_18 (VAR_30, 0)) == VAR_12
   || FUNC_7 (FUNC_18 (VAR_30, 0)) == VAR_10))
    VAR_34 = 1;
  break;

       case '>':
  if (FUNC_11 (VAR_30)
      && (FUNC_7 (FUNC_18 (VAR_30, 0)) == VAR_13
   || FUNC_7 (FUNC_18 (VAR_30, 0)) == VAR_11))
    VAR_34 = 1;
  break;

       case 'E':
       case 'F':
  if (FUNC_7 (VAR_30) == VAR_1
      || (FUNC_7 (VAR_30) == VAR_3
   && FUNC_9 (FUNC_8 (VAR_30)) == VAR_7))
    VAR_34 = 1;
  break;

       case 'G':
       case 'H':
  if (FUNC_7 (VAR_30) == VAR_1
      && FUNC_2 (VAR_30, VAR_24, VAR_32))
    VAR_34 = 1;
  break;

       case 's':
  if (FUNC_7 (VAR_30) == VAR_2
      || (FUNC_7 (VAR_30) == VAR_1
   && FUNC_8 (VAR_30) == VAR_16))
    break;
       case 'i':
  if (FUNC_0 (VAR_30))
    VAR_34 = 1;
  break;

       case 'n':
  if (FUNC_7 (VAR_30) == VAR_2
      || (FUNC_7 (VAR_30) == VAR_1
   && FUNC_8 (VAR_30) == VAR_16))
    VAR_34 = 1;
  break;

       case 'I':
       case 'J':
       case 'K':
       case 'L':
       case 'M':
       case 'N':
       case 'O':
       case 'P':
  if (FUNC_7 (VAR_30) == VAR_2
      && FUNC_3 (FUNC_10 (VAR_30), VAR_24, VAR_32))
    VAR_34 = 1;
  break;

       case 'V':
  if (FUNC_11 (VAR_30)
      && ((VAR_20 > 0 && ! FUNC_21 (VAR_30))
   || (VAR_20 < 0
       && !(FUNC_0 (VAR_30) || FUNC_11 (VAR_30)))
   || (VAR_18
       && !(FUNC_14 (VAR_30)
     && FUNC_12 (VAR_30) >= VAR_4))))
    VAR_34 = 1;
  break;

       case 'o':
  if ((VAR_20 > 0 && FUNC_21 (VAR_30))
      || (VAR_20 == 0 && FUNC_22 (VAR_30))

      || (VAR_20 < 0
   && (FUNC_0 (VAR_30) || FUNC_11 (VAR_30)))

      || (VAR_18 && FUNC_14 (VAR_30)
   && FUNC_12 (VAR_30) >= VAR_4))
    VAR_34 = 1;
  break;

       default:
  {
    enum reg_class VAR_41;

    VAR_41 = (VAR_24 == 'r'
      ? VAR_5 : FUNC_13 (VAR_24, VAR_32));
    if (VAR_41 != VAR_8)
      {
        if (VAR_20 < 0
     || (VAR_20 == 0
         && FUNC_14 (VAR_30)
         && FUNC_12 (VAR_30) >= VAR_4)
     || (VAR_20 == 0 && FUNC_7 (VAR_30) == VAR_14)
     || (FUNC_14 (VAR_30)
         && FUNC_24 (VAR_30, VAR_41, VAR_33, VAR_31)))
          VAR_34 = 1;
      }
    break;
  }
       }
   while (VAR_32 += VAR_36, VAR_24);

   VAR_21[VAR_28] = VAR_32;


   if (! VAR_34)
     VAR_29 = 1;
 }


      if (! VAR_29)
 {
   int VAR_42, VAR_43;




   if (VAR_20 > 0 && VAR_27 >= 0)
     for (VAR_43 = VAR_27;
   VAR_43 < VAR_17.n_operands;
   VAR_43++)



       if (VAR_23[VAR_43]
    && FUNC_14 (VAR_17.operand[VAR_43]))
  for (VAR_42 = 0; VAR_42 < VAR_17.n_operands; VAR_42++)
    if ((FUNC_11 (VAR_17.operand[VAR_42])
         || VAR_17.operand_type[VAR_42] != VAR_9)
        && VAR_42 != VAR_43

        && *VAR_17.constraints[VAR_42] != 0
        && ! (VAR_22[VAR_42] == VAR_43
       && FUNC_23 (VAR_17.operand[VAR_42],
       VAR_17.operand[VAR_43]))
        && ! FUNC_25 (VAR_17.operand[VAR_42],
         VAR_17.operand[VAR_43]))
      VAR_29 = 1;

   if (! VAR_29)
     {
       while (--VAR_26 >= 0)
  {
    VAR_17.operand[VAR_25[VAR_26].other]
      = VAR_17.operand[VAR_25[VAR_26].this];
  }

       return 1;
     }
 }

      VAR_19++;
    }
  while (VAR_19 < VAR_17.n_alternatives);

  VAR_19 = -1;


  if (VAR_20 == 0)
    return FUNC_29 (-1);
  else
    return 0;
}
