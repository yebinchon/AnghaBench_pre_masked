
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred_data {int allows_non_const; int special; int allows_non_lvalue; } ;
typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int RTX_CODE ;


 int const VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char const* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 size_t FUNC_4 (int) ;







 int * VAR_7 ;
 int const VAR_8 ;

 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

 int VAR_9 ;
 int * FUNC_7 (int *,size_t) ;
 char const* FUNC_8 (int *,int ) ;
 char* FUNC_9 (int *,int) ;
 int * FUNC_10 (int *,size_t,int) ;
 int FUNC_11 (int *,size_t) ;

 int VAR_10 ;
 int FUNC_12 (int *,char const*) ;
 int * FUNC_13 (int *,char const*,int *) ;
 int FUNC_14 () ;
 struct pred_data* FUNC_15 (char const*) ;
 int FUNC_16 (int ,char*,char const*,...) ;
 int VAR_11 ;
 char const** VAR_12 ;
 int FUNC_17 (char*,char*) ;
 int * FUNC_18 (char const*,char*) ;

__attribute__((used)) static void
FUNC_19 (rtx VAR_13, rtx VAR_14, rtx VAR_15, int VAR_16)
{
  const char *VAR_17;
  RTX_CODE VAR_18;
  size_t VAR_19, VAR_20;
  int VAR_21;

  VAR_18 = FUNC_0 (VAR_13);
  switch (VAR_18)
    {
    case 131:
      return;
    case 136:
    case 133:
    case 132:
      if (FUNC_13 (VAR_14, FUNC_8 (VAR_13, 0), VAR_13) == VAR_13)
 {
   FUNC_16 (VAR_11,
        "operand %i duplicated before defined",
        FUNC_8 (VAR_13, 0));
          VAR_10++;
 }
      break;
    case 135:
    case 134:
      {
 const char *VAR_22 = FUNC_9 (VAR_13, 1);
 const struct pred_data *VAR_23;
 const char *VAR_24;

 if (FUNC_0 (VAR_14) == VAR_4)
   VAR_24 = FUNC_9 (VAR_14, 2);
 else
   VAR_24 = FUNC_9 (VAR_14, 1);

 if (VAR_22[0] != 0)
   {
     VAR_23 = FUNC_15 (VAR_22);
     if (!VAR_23)
       FUNC_16 (VAR_11,
     "warning: unknown predicate '%s'",
     VAR_22);
   }
 else
   VAR_23 = 0;

 if (VAR_18 == 135)
   {
     const char VAR_25 = FUNC_9 (VAR_13, 2)[0];





     if (FUNC_0 (VAR_14) == VAR_3
  || FUNC_0 (VAR_14) == VAR_6
  || FUNC_0 (VAR_14) == VAR_5)
       {
  if (VAR_25)
    FUNC_16 (VAR_11,
         "warning: constraints not supported in %s",
         VAR_12[FUNC_0 (VAR_14)]);
       }


     else if (VAR_15 && VAR_25)
       {
  if (VAR_16 == '+')
    {
      if (VAR_25 == '+')
        ;


      else if (VAR_25 == '='
        && FUNC_12 (VAR_14, FUNC_8 (VAR_13, 0)))
        ;
      else
        {
   FUNC_16 (VAR_11,
        "operand %d missing in-out reload",
        FUNC_8 (VAR_13, 0));
   VAR_10++;
        }
    }
  else if (VAR_25 != '=' && VAR_25 != '+')
    {
      FUNC_16 (VAR_11,
           "operand %d missing output reload",
           FUNC_8 (VAR_13, 0));
      VAR_10++;
    }
       }
   }




 if (VAR_15 && VAR_23 && VAR_23->allows_non_lvalue)
   FUNC_16 (VAR_11,
        "warning: destination operand %d "
        "allows non-lvalue",
        FUNC_8 (VAR_13, 0));
 if (FUNC_1 (VAR_13) == VAR_9
     && VAR_18 == 135
     && FUNC_0 (VAR_14) == VAR_4
     && VAR_23
     && !VAR_23->special
     && VAR_23->allows_non_const
     && FUNC_18 (VAR_24, "operands") == ((void*)0)
     && ! (VAR_15
    && FUNC_0 (VAR_15) == 130
    && FUNC_0 (FUNC_6 (VAR_15)) == VAR_0))
   FUNC_16 (VAR_11,
        "warning: operand %d missing mode?",
        FUNC_8 (VAR_13, 0));
 return;
      }

    case 130:
      {
 enum machine_mode VAR_26, VAR_27;
 rtx VAR_28, VAR_29;

 VAR_28 = FUNC_5 (VAR_13);
 VAR_29 = FUNC_6 (VAR_13);



 if (FUNC_0 (VAR_28) == 129)
   VAR_28 = FUNC_7 (VAR_28, 0);



 if (FUNC_0 (VAR_28) == 136
     || FUNC_0 (VAR_28) == 133
     || FUNC_0 (VAR_28) == 132)
   VAR_28 = FUNC_13 (VAR_14, FUNC_8 (VAR_28, 0), ((void*)0));

 if (FUNC_0 (VAR_29) == 136
     || FUNC_0 (VAR_29) == 133
     || FUNC_0 (VAR_29) == 132)
   VAR_29 = FUNC_13 (VAR_14, FUNC_8 (VAR_29, 0), ((void*)0));

 VAR_26 = FUNC_1 (VAR_28);
 VAR_27 = FUNC_1 (VAR_29);



 if (FUNC_0 (VAR_29) == 135
     && ! FUNC_17 (FUNC_9 (VAR_29, 1), "address_operand"))
   ;



        else if (VAR_26 != VAR_9 && VAR_27 != VAR_9 && VAR_26 != VAR_27)
   {
     FUNC_16 (VAR_11,
          "mode mismatch in set: %smode vs %smode",
          FUNC_2 (VAR_26), FUNC_2 (VAR_27));
     VAR_10++;
   }



 else if (VAR_26 != VAR_27
   && FUNC_0 (VAR_28) != VAR_8
   && FUNC_0 (VAR_28) != VAR_1
   && FUNC_0 (VAR_29) != VAR_8
   && FUNC_0 (VAR_29) != VAR_1
   && FUNC_0 (VAR_29) != VAR_2)
   {
     const char *VAR_30;
     VAR_30 = (VAR_26 == VAR_9 ? "destination" : "source");
     FUNC_16 (VAR_11,
          "warning: %s missing a mode?", VAR_30);
   }

 if (VAR_28 != FUNC_5 (VAR_13))
   FUNC_19 (VAR_28, VAR_14, VAR_13, '=');
 FUNC_19 (FUNC_5 (VAR_13), VAR_14, VAR_13, '=');
        FUNC_19 (FUNC_6 (VAR_13), VAR_14, VAR_7, 0);
        return;
      }

    case 138:
      FUNC_19 (FUNC_5 (VAR_13), VAR_14, VAR_13, '=');
      return;

    case 128:
      FUNC_19 (FUNC_7 (VAR_13, 0), VAR_14, VAR_15, VAR_15 ? '+' : 0);
      FUNC_19 (FUNC_7 (VAR_13, 1), VAR_14, VAR_7, 0);
      FUNC_19 (FUNC_7 (VAR_13, 2), VAR_14, VAR_7, 0);
      return;

    case 129:
      FUNC_19 (FUNC_7 (VAR_13, 0), VAR_14, VAR_15, VAR_15 ? '+' : 0);
      return;

    case 137:
      if (FUNC_1 (FUNC_7 (VAR_13, 0)) != VAR_9)
 {
   FUNC_16 (VAR_11,
        "operand to label_ref %smode not VOIDmode",
        FUNC_2 (FUNC_1 (FUNC_7 (VAR_13, 0))));
   VAR_10++;
 }
      break;

    default:
      break;
    }

  VAR_17 = FUNC_3 (VAR_18);
  VAR_20 = FUNC_4 (VAR_18);
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
    {
      switch (VAR_17[VAR_19])
 {
 case 'e': case 'u':
   FUNC_19 (FUNC_7 (VAR_13, VAR_19), VAR_14, VAR_7, 0);
   break;

 case 'E':
   for (VAR_21 = 0; VAR_21 < FUNC_11 (VAR_13, VAR_19); VAR_21++)
     FUNC_19 (FUNC_10 (VAR_13, VAR_19, VAR_21), VAR_14, VAR_7, 0);
   break;

 case 'i': case 'w': case '0': case 's':
   break;

 default:
   FUNC_14 ();
 }
    }
}
