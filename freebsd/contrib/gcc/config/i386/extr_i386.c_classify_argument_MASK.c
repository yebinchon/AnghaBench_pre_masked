
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum x86_64_reg_class { ____Placeholder_x86_64_reg_class } x86_64_reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* must_pass_in_stack ) (int,scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;

 int FUNC_1 (scalar_t__,int,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;



 scalar_t__ FUNC_5 (int) ;





 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;


 int VAR_0 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;

 int VAR_3 ;
 int FUNC_18 (int) ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 scalar_t__ VAR_15 ;
 int FUNC_19 (int) ;
 int FUNC_20 () ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (int,int) ;
 scalar_t__ FUNC_24 (int,scalar_t__) ;
 TYPE_2__ VAR_16 ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static int
FUNC_26 (enum machine_mode VAR_17, tree VAR_18,
     enum x86_64_reg_class VAR_19[VAR_1], int VAR_20)
{
  HOST_WIDE_INT VAR_21 =
    (VAR_17 == 163) ? FUNC_22 (VAR_18) : (int) FUNC_11 (VAR_17);
  int VAR_22 = (VAR_21 + (VAR_20 % 64) / 8 + VAR_3 - 1) / VAR_3;


  if (VAR_21 < 0)
    return 0;

  if (VAR_17 != 130
      && VAR_16.calls.must_pass_in_stack (VAR_17, VAR_18))
    return 0;

  if (VAR_18 && FUNC_0 (VAR_18))
    {
      int VAR_23;
      tree VAR_24;
      enum x86_64_reg_class VAR_25[VAR_1];


      if (VAR_21 > 16)
 return 0;

      for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
 VAR_19[VAR_23] = VAR_8;



      if (!VAR_22)
 {
   VAR_19[0] = VAR_8;
   return 1;
 }


      switch (FUNC_13 (VAR_18))
 {
 case 150:

   if (FUNC_15 (VAR_18))
     {
       tree VAR_26, VAR_27;
       int VAR_28;

       for (VAR_26 = FUNC_15 (VAR_18), VAR_28 = 0;
     FUNC_1 (VAR_26, VAR_28, VAR_27); VAR_28++)
  {
     int VAR_29;
     int VAR_30 = FUNC_25 (FUNC_3 (VAR_27), 0) * 8;
     tree VAR_31 = FUNC_4 (VAR_27);

     VAR_29 = FUNC_26 (FUNC_17 (VAR_31),
         VAR_31, VAR_25,
         (VAR_30 + VAR_20) % 256);
     if (!VAR_29)
       return 0;
     for (VAR_23 = 0; VAR_23 < VAR_29; VAR_23++)
       {
         int VAR_32 = (VAR_30 + (VAR_20 % 64)) / 8 / 8;
         VAR_19[VAR_23 + VAR_32] =
    FUNC_23 (VAR_25[VAR_23], VAR_19[VAR_23 + VAR_32]);
       }
  }
     }

   for (VAR_24 = FUNC_16 (VAR_18); VAR_24; VAR_24 = FUNC_12 (VAR_24))
     {
       if (FUNC_13 (VAR_24) == VAR_0)
  {
    int VAR_33;

    if (FUNC_14 (VAR_24) == VAR_15)
      continue;




    if (FUNC_6 (VAR_24))
      {
        for (VAR_23 = (FUNC_21 (VAR_24) + (VAR_20 % 64)) / 8 / 8;
      VAR_23 < ((FUNC_21 (VAR_24) + (VAR_20 % 64))
           + FUNC_25 (FUNC_7 (VAR_24), 0)
    + 63) / 8 / 8; VAR_23++)
   VAR_19[VAR_23] =
     FUNC_23 (VAR_6,
      VAR_19[VAR_23]);
      }
    else
      {
        VAR_33 = FUNC_26 (FUNC_17 (FUNC_14 (VAR_24)),
            FUNC_14 (VAR_24), VAR_25,
            (FUNC_21 (VAR_24)
      + VAR_20) % 256);
        if (!VAR_33)
   return 0;
        for (VAR_23 = 0; VAR_23 < VAR_33; VAR_23++)
   {
     int VAR_34 =
       (FUNC_21 (VAR_24) + (VAR_20 % 64)) / 8 / 8;
     VAR_19[VAR_23 + VAR_34] =
       FUNC_23 (VAR_25[VAR_23], VAR_19[VAR_23 + VAR_34]);
   }
      }
  }
     }
   break;

 case 164:

   {
     int VAR_35;
     VAR_35 = FUNC_26 (FUNC_17 (FUNC_14 (VAR_18)),
         FUNC_14 (VAR_18), VAR_25, VAR_20);
     if (!VAR_35)
       return 0;


     if (VAR_25[0] == VAR_10 && VAR_21 != 4)
       VAR_25[0] = VAR_12;
     if (VAR_25[0] == VAR_5 && VAR_21 != 4)
       VAR_25[0] = VAR_6;

     for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
       VAR_19[VAR_23] = VAR_25[VAR_23 % VAR_35];

     break;
   }
 case 141:
 case 151:




   FUNC_19 (!FUNC_15 (VAR_18)
        || !FUNC_2 (FUNC_15 (VAR_18)));
   for (VAR_24 = FUNC_16 (VAR_18); VAR_24; VAR_24 = FUNC_12 (VAR_24))
     {
       if (FUNC_13 (VAR_24) == VAR_0)
  {
    int VAR_36;

    if (FUNC_14 (VAR_24) == VAR_15)
      continue;

    VAR_36 = FUNC_26 (FUNC_17 (FUNC_14 (VAR_24)),
        FUNC_14 (VAR_24), VAR_25,
        VAR_20);
    if (!VAR_36)
      return 0;
    for (VAR_23 = 0; VAR_23 < VAR_36; VAR_23++)
      VAR_19[VAR_23] = FUNC_23 (VAR_25[VAR_23], VAR_19[VAR_23]);
  }
     }
   break;

 default:
   FUNC_20 ();
 }


      for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
 {


   if (VAR_19[VAR_23] == VAR_7)
     return 0;



   if (VAR_19[VAR_23] == VAR_11
       && (VAR_23 == 0 || VAR_19[VAR_23 - 1] != VAR_12))
     VAR_19[VAR_23] = VAR_12;


   if (VAR_19[VAR_23] == VAR_13
       && (VAR_23 == 0 || VAR_19[VAR_23 - 1] != VAR_14))
     VAR_19[VAR_23] = VAR_12;
 }
      return VAR_22;
    }



  if (VAR_17 != 130 && VAR_17 != 163)
    {
      int VAR_37 = FUNC_8 (VAR_17);

      if (VAR_17 == 128)
 VAR_37 = 128;
      else if (VAR_17 == 129)
 VAR_37 = 256;
      if (FUNC_5 (VAR_17))
 VAR_37 /= 2;

      if (VAR_20 % VAR_37)
 return 0;
    }


  if (FUNC_18 (VAR_17)
      && FUNC_11 (FUNC_10 (VAR_17)) == VAR_21)
    VAR_17 = FUNC_10 (VAR_17);


  switch (VAR_17)
    {
    case 148:
    case 156:
      VAR_19[0] = VAR_12;
      return 1;
    case 144:
      VAR_19[0] = VAR_12;
      VAR_19[1] = VAR_11;
      return 2;
    case 154:
    case 146:
    case 153:
    case 152:
    case 159:
    case 161:
    case 160:
      if (VAR_20 + FUNC_8 (VAR_17) <= 32)
 VAR_19[0] = VAR_5;
      else
 VAR_19[0] = VAR_6;
      return 1;
    case 162:
    case 142:
      VAR_19[0] = VAR_19[1] = VAR_6;
      return 2;
    case 158:
      return 0;
    case 147:
      if (!(VAR_20 % 64))
 VAR_19[0] = VAR_10;
      else
 VAR_19[0] = VAR_12;
      return 1;
    case 155:
      VAR_19[0] = VAR_9;
      return 1;
    case 128:
      VAR_19[0] = VAR_14;
      VAR_19[1] = VAR_13;
      return 2;
    case 143:
      VAR_19[0] = VAR_12;
      VAR_19[1] = VAR_11;
      return 2;
    case 149:
      VAR_19[0] = VAR_12;
      return 1;
    case 157:
      VAR_19[0] = VAR_9;
      VAR_19[1] = VAR_9;
      return 2;
    case 129:
      VAR_19[0] = VAR_4;
      return 1;
    case 145:

      return 0;
    case 134:
    case 133:
    case 140:
    case 132:
    case 139:
    case 138:
      VAR_19[0] = VAR_12;
      VAR_19[1] = VAR_11;
      return 2;
    case 137:
    case 136:
    case 135:
    case 131:
      VAR_19[0] = VAR_12;
      return 1;
    case 163:
    case 130:
      return 0;
    default:
      FUNC_19 (FUNC_18 (VAR_17));

      if (VAR_21 > 16)
 return 0;

      FUNC_19 (FUNC_9 (FUNC_10 (VAR_17)) == VAR_2);

      if (VAR_20 + FUNC_8 (VAR_17) <= 32)
 VAR_19[0] = VAR_5;
      else
 VAR_19[0] = VAR_6;
      VAR_19[1] = VAR_6;
      return 1 + (VAR_21 > 8);
    }
}
