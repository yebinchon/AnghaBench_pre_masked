
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_3__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_1__ ;
typedef struct TYPE_54__ TYPE_19__ ;


typedef TYPE_3__* tree ;
typedef int rtx ;
struct TYPE_56__ {int rtl; } ;
struct TYPE_57__ {TYPE_2__ decl_with_rtl; } ;
struct TYPE_55__ {TYPE_3__* (* type_for_mode ) (int ,int) ;TYPE_3__* (* unsigned_type ) (TYPE_3__*) ;TYPE_3__* (* signed_type ) (TYPE_3__*) ;} ;
struct TYPE_54__ {TYPE_1__ types; } ;
typedef int REAL_VALUE_TYPE ;
typedef int HOST_WIDE_INT ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

 int const FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 TYPE_3__* VAR_5 ;

 int VAR_6 ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ) ;
 int VAR_8 ;


 TYPE_3__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;

 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (int ,int) ;

 TYPE_3__* FUNC_16 (int ,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_17 (int ,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_18 (TYPE_3__*) ;
 TYPE_3__* FUNC_19 (TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_20 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_21 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_22 (int ,int ) ;
 TYPE_3__* FUNC_23 (int ,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_24 (int ,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_25 (TYPE_3__*,TYPE_3__*) ;
 TYPE_19__ VAR_12 ;
 TYPE_3__* FUNC_26 (TYPE_3__*) ;
 TYPE_3__* FUNC_27 (TYPE_3__*) ;
 TYPE_3__* FUNC_28 (TYPE_3__*) ;
 TYPE_3__* FUNC_29 (TYPE_3__*) ;
 TYPE_3__* FUNC_30 (int ,int) ;
 TYPE_3__* FUNC_31 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;

tree
FUNC_32 (tree VAR_13, rtx VAR_14)
{
  tree VAR_15;

  switch (FUNC_4 (VAR_14))
    {
    case 139:
      {
 HOST_WIDE_INT VAR_16 = 0;

 if (FUNC_7 (VAR_14) < 0
     && !(FUNC_14 (VAR_13)
   && (FUNC_6 (FUNC_13 (VAR_13))
       < VAR_0)))
   VAR_16 = -1;

 VAR_15 = FUNC_19 (VAR_13, FUNC_7 (VAR_14), VAR_16);

 return VAR_15;
      }

    case 140:
      if (FUNC_5 (VAR_14) == VAR_11)
 VAR_15 = FUNC_19 (VAR_13,
    FUNC_1 (VAR_14), FUNC_0 (VAR_14));
      else
 {
   REAL_VALUE_TYPE VAR_17;

   FUNC_9 (VAR_17, VAR_14);
   VAR_15 = FUNC_20 (VAR_13, VAR_17);
 }

      return VAR_15;

    case 138:
      {
 int VAR_18 = FUNC_3 (VAR_14);
 tree VAR_19 = FUNC_12 (VAR_13);
 tree VAR_20 = VAR_5;
 int VAR_21;



 for (VAR_21 = VAR_18 - 1; VAR_21 >= 0; --VAR_21)
   {
     rtx VAR_22 = FUNC_2 (VAR_14, VAR_21);
     VAR_20 = FUNC_31 (VAR_5, FUNC_32 (VAR_19, VAR_22), VAR_20);
   }

 return FUNC_21 (VAR_13, VAR_20);
      }

    case 132:
      return FUNC_24 (VAR_6, VAR_13, FUNC_32 (VAR_13, FUNC_15 (VAR_14, 0)),
     FUNC_32 (VAR_13, FUNC_15 (VAR_14, 1)));

    case 135:
      return FUNC_24 (VAR_2, VAR_13, FUNC_32 (VAR_13, FUNC_15 (VAR_14, 0)),
     FUNC_32 (VAR_13, FUNC_15 (VAR_14, 1)));

    case 133:
      return FUNC_23 (VAR_4, VAR_13, FUNC_32 (VAR_13, FUNC_15 (VAR_14, 0)));

    case 134:
      return FUNC_24 (VAR_3, VAR_13, FUNC_32 (VAR_13, FUNC_15 (VAR_14, 0)),
     FUNC_32 (VAR_13, FUNC_15 (VAR_14, 1)));

    case 143:
      return FUNC_24 (VAR_1, VAR_13, FUNC_32 (VAR_13, FUNC_15 (VAR_14, 0)),
     FUNC_32 (VAR_13, FUNC_15 (VAR_14, 1)));

    case 136:
      VAR_15 = VAR_12.types.unsigned_type (VAR_13);
      return FUNC_25 (VAR_13, FUNC_16 (VAR_8, VAR_15,
          FUNC_32 (VAR_15, FUNC_15 (VAR_14, 0)),
          FUNC_32 (VAR_13, FUNC_15 (VAR_14, 1))));

    case 142:
      VAR_15 = VAR_12.types.signed_type (VAR_13);
      return FUNC_25 (VAR_13, FUNC_16 (VAR_8, VAR_15,
      FUNC_32 (VAR_15, FUNC_15 (VAR_14, 0)),
          FUNC_32 (VAR_13, FUNC_15 (VAR_14, 1))));

    case 137:
      if (FUNC_11 (VAR_13) != VAR_7)
 VAR_15 = VAR_12.types.signed_type (VAR_13);
      else
 VAR_15 = VAR_13;

      return FUNC_25 (VAR_13, FUNC_16 (VAR_9, VAR_15,
          FUNC_32 (VAR_15, FUNC_15 (VAR_14, 0)),
          FUNC_32 (VAR_15, FUNC_15 (VAR_14, 1))));
    case 129:
      VAR_15 = VAR_12.types.unsigned_type (VAR_13);
      return FUNC_25 (VAR_13, FUNC_16 (VAR_9, VAR_15,
          FUNC_32 (VAR_15, FUNC_15 (VAR_14, 0)),
          FUNC_32 (VAR_15, FUNC_15 (VAR_14, 1))));

    case 131:
    case 128:
      VAR_15 = VAR_12.types.type_for_mode (FUNC_5 (FUNC_15 (VAR_14, 0)),
       FUNC_4 (VAR_14) == 128);
      return FUNC_25 (VAR_13, FUNC_32 (VAR_15, FUNC_15 (VAR_14, 0)));

    case 141:
      return FUNC_32 (VAR_13, FUNC_15 (VAR_14, 0));

    case 130:
      VAR_15 = FUNC_10 (VAR_14);
      if (VAR_15)
 return FUNC_25 (VAR_13, FUNC_18 (VAR_15));


    default:
      VAR_15 = FUNC_17 (VAR_10, VAR_5, VAR_13);



      if (FUNC_8 (VAR_13))
 VAR_14 = FUNC_22 (FUNC_13 (VAR_13), VAR_14);



      VAR_15->decl_with_rtl.rtl = VAR_14;

      return VAR_15;
    }
}
