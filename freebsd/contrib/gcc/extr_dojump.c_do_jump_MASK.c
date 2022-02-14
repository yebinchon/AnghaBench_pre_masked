
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ rtx ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {TYPE_2__* handlers; } ;
struct TYPE_5__ {int (* type_for_size ) (int,int) ;int (* type_for_mode ) (int,int) ;} ;
struct TYPE_7__ {TYPE_1__ types; } ;
struct TYPE_6__ {int insn_code; } ;
typedef int HOST_WIDE_INT ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;



 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;


 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;


 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;




 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

 int FUNC_6 (scalar_t__) ;

 int const VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int const FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;





 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_27 ;

 int VAR_28 ;

 int VAR_29 ;

 int VAR_30 ;

 int VAR_31 ;

 int VAR_32 ;

 scalar_t__ FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (int const,int ,int ,int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int,int,int ) ;
 int VAR_33 ;
 TYPE_4__* VAR_34 ;
 int FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int FUNC_23 (int ,int,int,scalar_t__,scalar_t__) ;
 int FUNC_24 (scalar_t__,int ,int,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_25 (int ,scalar_t__,scalar_t__) ;
 int FUNC_26 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_27 () ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (scalar_t__) ;
 int FUNC_30 (scalar_t__) ;
 int VAR_35 ;
 scalar_t__ FUNC_31 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_32 (int ) ;
 int FUNC_33 (int,int ,int ,int ) ;
 int FUNC_34 (int ,int ) ;
 int FUNC_35 (int) ;
 int FUNC_36 () ;
 scalar_t__ FUNC_37 () ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ,int*,int*,int *,int*,int*,int*,int) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 TYPE_3__ VAR_36 ;
 int FUNC_42 (int,int ,int ) ;
 int FUNC_43 (int,int) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (int,int) ;
 int FUNC_46 (int,int) ;
 int FUNC_47 (int ) ;

void
FUNC_48 (tree VAR_37, rtx VAR_38, rtx VAR_39)
{
  enum tree_code VAR_40 = FUNC_9 (VAR_37);
  rtx VAR_41;
  int VAR_42;
  tree VAR_43;
  enum machine_mode VAR_44;
  rtx VAR_45 = 0;

  switch (VAR_40)
    {
    case 153:
      break;

    case 150:
      VAR_41 = FUNC_41 (VAR_37) ? VAR_38 : VAR_39;
      if (VAR_41)
        FUNC_29 (VAR_41);
      break;
    case 141:
      if (FUNC_9 (FUNC_11 (VAR_37, 0)) == 158
          || FUNC_9 (FUNC_11 (VAR_37, 0)) == 160
          || FUNC_9 (FUNC_11 (VAR_37, 0)) == 162
          || FUNC_9 (FUNC_11 (VAR_37, 0)) == 163)
        goto normal;
    case 155:


      if ((FUNC_15 (FUNC_13 (VAR_37))
           < FUNC_15 (FUNC_13 (FUNC_11 (VAR_37, 0)))))
        goto normal;
    case 142:
    case 165:
    case 144:
    case 148:
    case 139:

      FUNC_48 (FUNC_11 (VAR_37, 0), VAR_38, VAR_39);
      break;

    case 161:



      if (FUNC_40 (FUNC_11 (VAR_37, 1)))
 {
   tree VAR_46 = FUNC_11 (VAR_37, 0);
   rtx VAR_47, VAR_48;


   while ((FUNC_9 (VAR_46) == 141
    || FUNC_9 (VAR_46) == 155
    || FUNC_9 (VAR_46) == 142)
   && FUNC_11 (VAR_46, 0) != VAR_35
   && FUNC_15 (FUNC_13 (VAR_46))
      <= FUNC_15 (FUNC_13 (FUNC_11 (VAR_46, 0))))
     VAR_46 = FUNC_11 (VAR_46, 0);


   if (FUNC_9 (VAR_46) == VAR_0
       && FUNC_40 (FUNC_11 (VAR_46, 1)))
     {
       VAR_46 = FUNC_11 (VAR_46, 0);
       VAR_48 = VAR_39;
       VAR_47 = VAR_38;
     }
   else
     {
       VAR_48 = VAR_38;
       VAR_47 = VAR_39;
     }

   if (FUNC_9 (VAR_46) == VAR_24)
     {
       tree VAR_49 = FUNC_11 (VAR_46, 0);
       tree VAR_50 = FUNC_11 (VAR_46, 1);
       tree VAR_51 = FUNC_13 (VAR_49);
       if (FUNC_9 (VAR_50) == 150
    && FUNC_21 (VAR_50, 0) >= 0
    && FUNC_21 (VAR_50, VAR_11) < 0
    && FUNC_43 (FUNC_14 (VAR_51),
       FUNC_10 (VAR_50)))
  {
    HOST_WIDE_INT VAR_52 = (HOST_WIDE_INT) 1
           << FUNC_10 (VAR_50);
    FUNC_48 (FUNC_18 (161, VAR_51, VAR_49,
       FUNC_19 (VAR_51, VAR_52)),
      VAR_48, VAR_47);
    break;
  }
     }
 }
      if (! VAR_25
          && FUNC_9 (FUNC_11 (VAR_37, 1)) == 150
          && FUNC_15 (FUNC_13 (VAR_37)) <= VAR_11
          && (VAR_42 = FUNC_47 (FUNC_11 (VAR_37, 1))) >= 0
          && (VAR_44 = FUNC_42 (VAR_42 + 1, VAR_19, 0)) != VAR_1
          && (VAR_43 = VAR_36.types.type_for_mode (VAR_44, 1)) != 0
          && FUNC_15 (VAR_43) < FUNC_15 (FUNC_13 (VAR_37))
          && (VAR_34->handlers[(int) FUNC_14 (VAR_43)].insn_code
              != VAR_5))
        {
          FUNC_48 (FUNC_34 (VAR_43, VAR_37), VAR_38, VAR_39);
          break;
        }
      goto normal;

    case 136:
      FUNC_48 (FUNC_11 (VAR_37, 0), VAR_39, VAR_38);
      break;

    case 156:
      {
 rtx VAR_53 = FUNC_37 ();
 if (!VAR_39 || !VAR_38)
   {
     VAR_45 = FUNC_37 ();
     if (!VAR_39)
       VAR_39 = VAR_45;
     if (!VAR_38)
       VAR_38 = VAR_45;
   }

        FUNC_27 ();
        FUNC_48 (FUNC_11 (VAR_37, 0), VAR_53, VAR_21);
        FUNC_48 (FUNC_11 (VAR_37, 1), VAR_38, VAR_39);
        FUNC_30 (VAR_53);
        FUNC_48 (FUNC_11 (VAR_37, 2), VAR_38, VAR_39);
 break;
      }

    case 138:
    case 135:
    case 157:

      FUNC_36 ();

    case 158:
    case 160:
    case 162:
    case 163:
      {
        HOST_WIDE_INT VAR_54, VAR_55;
        int VAR_56;
        enum machine_mode VAR_57;
        tree VAR_58;
        tree VAR_59;
        int VAR_60 = 0;



        FUNC_39 (VAR_37, &VAR_54, &VAR_55, &VAR_59, &VAR_57,
                             &VAR_56, &VAR_60, 0);

        VAR_58 = VAR_36.types.type_for_size (VAR_54, VAR_56);
        if (! VAR_25
            && VAR_58 != 0 && VAR_54 >= 0
            && FUNC_15 (VAR_58) < FUNC_15 (FUNC_13 (VAR_37))
            && (VAR_34->handlers[(int) FUNC_14 (VAR_58)].insn_code
  != VAR_5))
          {
            FUNC_48 (FUNC_34 (VAR_58, VAR_37), VAR_38, VAR_39);
            break;
          }
        goto normal;
      }

    case 154:
      {
        tree VAR_61 = FUNC_13 (FUNC_11 (VAR_37, 0));

        FUNC_35 (FUNC_5 (FUNC_14 (VAR_61))
      != VAR_17);
 FUNC_35 (FUNC_5 (FUNC_14 (VAR_61))
      != VAR_18);

        if (FUNC_41 (FUNC_11 (VAR_37, 1)))
          FUNC_48 (FUNC_11 (VAR_37, 0), VAR_39, VAR_38);
        else if (FUNC_5 (FUNC_14 (VAR_61)) == VAR_19
                 && !FUNC_20 (VAR_6, FUNC_14 (VAR_61), VAR_33))
          FUNC_25 (VAR_37, VAR_38, VAR_39);
        else
          FUNC_23 (VAR_37, VAR_6, VAR_6, VAR_38, VAR_39);
        break;
      }

    case 145:

      VAR_37 = FUNC_18 (143, FUNC_13 (VAR_37),
      FUNC_11 (VAR_37, 0),
      FUNC_11 (VAR_37, 1));

    case 143:
      {
        tree VAR_62 = FUNC_13 (FUNC_11 (VAR_37, 0));

        FUNC_35 (FUNC_5 (FUNC_14 (VAR_62))
      != VAR_17);
 FUNC_35 (FUNC_5 (FUNC_14 (VAR_62))
      != VAR_18);

        if (FUNC_41 (FUNC_11 (VAR_37, 1)))
          FUNC_48 (FUNC_11 (VAR_37, 0), VAR_38, VAR_39);
        else if (FUNC_5 (FUNC_14 (VAR_62)) == VAR_19
           && !FUNC_20 (VAR_20, FUNC_14 (VAR_62), VAR_33))
          FUNC_25 (VAR_37, VAR_39, VAR_38);
        else
          FUNC_23 (VAR_37, VAR_20, VAR_20, VAR_38, VAR_39);
        break;
      }

    case 146:
      VAR_44 = FUNC_14 (FUNC_13 (FUNC_11 (VAR_37, 0)));
      if (FUNC_5 (VAR_44) == VAR_19
          && ! FUNC_20 (VAR_14, VAR_44, VAR_33))
        FUNC_26 (VAR_37, 1, VAR_38, VAR_39);
      else
        FUNC_23 (VAR_37, VAR_14, VAR_16, VAR_38, VAR_39);
      break;

    case 149:
      VAR_44 = FUNC_14 (FUNC_13 (FUNC_11 (VAR_37, 0)));
      if (FUNC_5 (VAR_44) == VAR_19
          && ! FUNC_20 (VAR_12, VAR_44, VAR_33))
        FUNC_26 (VAR_37, 0, VAR_39, VAR_38);
      else
        FUNC_23 (VAR_37, VAR_12, VAR_13, VAR_38, VAR_39);
      break;

    case 151:
      VAR_44 = FUNC_14 (FUNC_13 (FUNC_11 (VAR_37, 0)));
      if (FUNC_5 (VAR_44) == VAR_19
          && ! FUNC_20 (VAR_9, VAR_44, VAR_33))
        FUNC_26 (VAR_37, 0, VAR_38, VAR_39);
      else
        FUNC_23 (VAR_37, VAR_9, VAR_10, VAR_38, VAR_39);
      break;

    case 152:
      VAR_44 = FUNC_14 (FUNC_13 (FUNC_11 (VAR_37, 0)));
      if (FUNC_5 (VAR_44) == VAR_19
          && ! FUNC_20 (VAR_7, VAR_44, VAR_33))
        FUNC_26 (VAR_37, 1, VAR_39, VAR_38);
      else
        FUNC_23 (VAR_37, VAR_7, VAR_8, VAR_38, VAR_39);
      break;

    case 128:
    case 140:
      {
        enum rtx_code VAR_63, VAR_64;
        int VAR_65;

        if (VAR_40 == 128)
          VAR_63 = VAR_32, VAR_64 = VAR_23;
        else
          VAR_63 = VAR_23, VAR_64 = VAR_32;
        VAR_44 = FUNC_14 (FUNC_13 (FUNC_11 (VAR_37, 0)));

        VAR_65 = 0;
        if (! FUNC_20 (VAR_63, VAR_44, VAR_33)
            && (FUNC_20 (VAR_64, VAR_44, VAR_33)


          || VAR_64 == VAR_32))
          VAR_65 = 1;

        if (! VAR_65)
          FUNC_23 (VAR_37, VAR_63, VAR_63, VAR_38, VAR_39);
        else
          FUNC_23 (VAR_37, VAR_64, VAR_64, VAR_39, VAR_38);
      }
      break;

    {
      enum rtx_code VAR_66;
      enum tree_code VAR_67, VAR_68;

      case 129:
        VAR_66 = VAR_31;
        VAR_67 = 128;
        VAR_68 = 146;
        goto unordered_bcc;
      case 130:
        VAR_66 = VAR_30;
        VAR_67 = 128;
        VAR_68 = 149;
        goto unordered_bcc;
      case 131:
        VAR_66 = VAR_29;
        VAR_67 = 128;
        VAR_68 = 151;
        goto unordered_bcc;
      case 132:
        VAR_66 = VAR_28;
        VAR_67 = 128;
        VAR_68 = 152;
        goto unordered_bcc;
      case 133:
        VAR_66 = VAR_27;
        VAR_67 = 128;
        VAR_68 = 154;
        goto unordered_bcc;
      case 147:


        VAR_66 = VAR_15;
        VAR_67 = 146;
        VAR_68 = 151;
        goto unordered_bcc;

      unordered_bcc:
        VAR_44 = FUNC_14 (FUNC_13 (FUNC_11 (VAR_37, 0)));
        if (FUNC_20 (VAR_66, VAR_44, VAR_33))
          FUNC_23 (VAR_37, VAR_66, VAR_66, VAR_38,
                               VAR_39);
        else
          {
            tree VAR_69 = FUNC_44 (FUNC_11 (VAR_37, 0));
            tree VAR_70 = FUNC_44 (FUNC_11 (VAR_37, 1));
            tree VAR_71, VAR_72;



     if (VAR_39 == 0)
       VAR_45 = VAR_39 = FUNC_37 ();

            VAR_71 = FUNC_33 (VAR_67, FUNC_13 (VAR_37), VAR_69, VAR_70);
            VAR_72 = FUNC_33 (VAR_68, FUNC_13 (VAR_37), VAR_69, VAR_70);
     FUNC_48 (VAR_71, 0, VAR_39);
     FUNC_48 (VAR_72, VAR_38, VAR_39);
          }
      }
      break;

    case 137:



      if (VAR_2 >= 4 || FUNC_12 (FUNC_11 (VAR_37, 1)))
 goto normal;

      if (VAR_38 == VAR_21)
        {
   VAR_45 = FUNC_37 ();
          FUNC_48 (FUNC_11 (VAR_37, 0), VAR_45, VAR_21);
          FUNC_48 (FUNC_11 (VAR_37, 1), VAR_21, VAR_39);
 }
      else
 {
   FUNC_48 (FUNC_11 (VAR_37, 0), VAR_38, VAR_21);
          FUNC_48 (FUNC_11 (VAR_37, 1), VAR_38, VAR_39);
 }
      break;

    case 134:



      if (VAR_2 >= 4 || FUNC_12 (FUNC_11 (VAR_37, 1)))
 goto normal;

      if (VAR_39 == VAR_21)
 {
          VAR_45 = FUNC_37 ();
          FUNC_48 (FUNC_11 (VAR_37, 0), VAR_21, VAR_45);
          FUNC_48 (FUNC_11 (VAR_37, 1), VAR_38, VAR_21);
 }
      else
 {
          FUNC_48 (FUNC_11 (VAR_37, 0), VAR_21, VAR_39);
          FUNC_48 (FUNC_11 (VAR_37, 1), VAR_38, VAR_39);
 }
      break;
    case 159:

      {
 tree VAR_73 = FUNC_38 (VAR_37);
 tree VAR_74 = FUNC_11 (VAR_37, 1);

 if (VAR_73
     && FUNC_1 (VAR_73) == VAR_4
     && FUNC_2 (VAR_73) == VAR_3
     && VAR_74 != VAR_22
     && FUNC_8 (VAR_74) != VAR_22)
   {
     rtx VAR_75 = FUNC_31 (VAR_37, VAR_38,
        VAR_39);

     if (VAR_75 != VAR_21)
       {
  FUNC_28 (VAR_75);
  return;
       }
   }
      }


    default:
    normal:
      VAR_41 = FUNC_32 (VAR_37);
      FUNC_27 ();

      if (FUNC_3 (VAR_41) == VAR_26)
 {

   if (FUNC_7 (VAR_41)
       && FUNC_6 (FUNC_17 (VAR_41, 0)))
     VAR_41 = FUNC_17 (VAR_41, 0);
   else
     VAR_41 = FUNC_22 (VAR_41);
 }
      FUNC_24 (VAR_41, FUNC_0 (FUNC_4 (VAR_41)),
          VAR_20, FUNC_16 (FUNC_13 (VAR_37)),
          FUNC_4 (VAR_41), VAR_21,
          VAR_38, VAR_39);
    }

  if (VAR_45)
    {
      FUNC_27 ();
      FUNC_30 (VAR_45);
    }
}
