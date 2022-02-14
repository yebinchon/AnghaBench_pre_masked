
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int location_t ;
typedef int block_stmt_iterator ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 int FUNC_2 (scalar_t__) ;
 int const VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;

 int const FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int const VAR_12 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_13 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_16 (scalar_t__,scalar_t__,int *,int *,scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__) ;
 int VAR_20 ;
 scalar_t__ FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (int ,char*) ;

__attribute__((used)) static void
FUNC_22 (block_stmt_iterator *VAR_21, tree *VAR_22,
                   location_t *VAR_23, tree VAR_24)
{
  tree VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;


  if (VAR_24 == VAR_17 && VAR_15)
    return;


  if (FUNC_18 (*VAR_22))
    return;

  VAR_30 = *VAR_22;
  VAR_25 = FUNC_5 (VAR_30);

  if (VAR_25 == VAR_14)
    return;

  VAR_29 = FUNC_6 (VAR_25);

  switch (FUNC_3 (VAR_30))
    {
    case 132:
    case 130:
      {
        tree VAR_31;
        int VAR_32 = (FUNC_3 (VAR_30) == 130);



 tree VAR_33 = VAR_5;
 int VAR_34 = (FUNC_3 (VAR_30) == 130
         && FUNC_0 (FUNC_4 (VAR_30, 1)));



        VAR_31 = FUNC_4 (VAR_30, 0);
        while (1)
          {
     if (VAR_34 && VAR_33 == VAR_5
  && (FUNC_3 (VAR_31) == 132 || FUNC_3 (VAR_31) == 130))
       VAR_33 = VAR_31;

            if (FUNC_3 (VAR_31) == 132)
              {
                VAR_32 = 0;
                VAR_31 = FUNC_4 (VAR_31, 0);
              }
            else if (FUNC_3 (VAR_31) == 130)
              VAR_31 = FUNC_4 (VAR_31, 0);
            else if (FUNC_2 (VAR_31))
              {
  VAR_26 = FUNC_4 (VAR_31, 0);
                break;
              }
            else
              {
                FUNC_15 (FUNC_3 (VAR_31) == VAR_12
                            || FUNC_3 (VAR_31) == VAR_6
                            || FUNC_3 (VAR_31) == VAR_8
                            || FUNC_3 (VAR_31) == VAR_9);




                if (! FUNC_17 (VAR_31) || VAR_32)
                  return;
                else
    {
      VAR_26 = FUNC_8 (VAR_0, FUNC_10 (FUNC_5 (VAR_31)), VAR_31);
      break;
    }
              }
          }
        if (VAR_34)
          {
            tree VAR_35 = FUNC_4 (VAR_30, 1);

            if (FUNC_3 (FUNC_1 (VAR_35)) == VAR_3)
              VAR_29 = FUNC_1 (VAR_35);

     if (VAR_33)
       VAR_33 = FUNC_8 (VAR_0, FUNC_10 (FUNC_5 (VAR_33)), VAR_33);
            VAR_28 = FUNC_14 (VAR_19, VAR_33 ? VAR_33 : VAR_26);
            VAR_28 = FUNC_13 (VAR_7, VAR_19,
    VAR_28, FUNC_14 (VAR_19,
          FUNC_11 (VAR_35)));
          }
        else
          VAR_28 = FUNC_8 (VAR_0, FUNC_10 (VAR_25), VAR_30);

        VAR_27 = FUNC_13 (VAR_4, VAR_18,
                             FUNC_13 (VAR_7, VAR_18,
       FUNC_12 (VAR_18, VAR_28),
       VAR_29),
                             VAR_16);
      }
      break;

    case 129:
      VAR_28 = FUNC_4 (VAR_30, 0);
      VAR_26 = VAR_28;
      VAR_27 = FUNC_13 (VAR_4, VAR_19,
                           FUNC_13 (VAR_7, VAR_19, VAR_26, VAR_29),
                           VAR_16);
      break;

    case 128:
      VAR_28 = FUNC_20 (VAR_19, VAR_30);
      VAR_26 = VAR_28;
      VAR_27 = FUNC_13 (VAR_4, VAR_19,
      FUNC_13 (VAR_7, VAR_19, VAR_26, VAR_29),
      FUNC_9 (VAR_19, 1));
      break;

    case 133:
      FUNC_21 (0, "mudflap checking not yet implemented for ARRAY_RANGE_REF");
      return;

    case 131:

      {
        tree VAR_36, VAR_37, VAR_38;



        if (FUNC_3 (FUNC_4 (VAR_30, 0)) != 129)
          return;

        VAR_38 = FUNC_7 (VAR_1);
        VAR_36 = FUNC_12 (VAR_13, FUNC_4 (VAR_30, 2));
        VAR_37 = FUNC_19 (VAR_11, VAR_36, VAR_38);
        VAR_36 = FUNC_19 (VAR_10, VAR_36, VAR_38);

        VAR_29 = FUNC_12 (VAR_13, FUNC_4 (VAR_30, 1));
        VAR_29 = FUNC_19 (VAR_7, VAR_29, VAR_37);
        VAR_29 = FUNC_19 (VAR_2, VAR_29, VAR_38);
        VAR_29 = FUNC_12 (VAR_20, VAR_29);

        VAR_28 = FUNC_4 (FUNC_4 (VAR_30, 0), 0);
        VAR_28 = FUNC_12 (VAR_19, VAR_28);
        VAR_28 = FUNC_13 (VAR_7, VAR_19, VAR_28, VAR_36);

        VAR_26 = VAR_28;
        VAR_27 = FUNC_13 (VAR_4, VAR_19,
                             FUNC_13 (VAR_7, VAR_19, VAR_26, VAR_29),
                             VAR_16);
      }
      break;

    default:
      return;
    }

  FUNC_16 (VAR_26, VAR_27, VAR_21, VAR_23, VAR_24);
}
