
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct keyent_t {int flgs; int* map; int spcl; } ;
struct TYPE_8__ {int* kb_lastact; TYPE_1__* kb_keymap; } ;
typedef TYPE_2__ keyboard_t ;
struct TYPE_7__ {struct keyent_t* key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;


 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;


 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

 int VAR_32 ;
 int VAR_33 ;



 int FUNC_0 (TYPE_2__*,int,int*) ;
 int FUNC_1 (TYPE_2__*,int,int*) ;
 int FUNC_2 (TYPE_2__*,int,int const) ;

int
FUNC_3(keyboard_t *VAR_34, int VAR_35, int VAR_36, int *VAR_37,
   int *VAR_38)
{
 struct keyent_t *VAR_39;
 int VAR_40 = *VAR_37;
 int VAR_41;
 int VAR_42;
 int VAR_43;

 VAR_43 = VAR_35;
 VAR_42 = VAR_40 & (VAR_0 | VAR_4);
 if ((VAR_42 == VAR_1) || (VAR_42 == VAR_2) || (VAR_42 == VAR_4))
  VAR_43 += VAR_5;
 VAR_39 = &VAR_34->kb_keymap->key[VAR_43];
 VAR_43 = ((VAR_40 & VAR_29) ? 1 : 0)
     | ((VAR_40 & VAR_12) ? 2 : 0)
     | ((VAR_40 & VAR_6) ? 4 : 0);
 if (((VAR_39->flgs & VAR_16) && (VAR_40 & VAR_11))
  || ((VAR_39->flgs & VAR_17) && (VAR_40 & VAR_26)) )
  VAR_43 ^= 1;

 if (VAR_36) {
  VAR_41 = VAR_34->kb_lastact[VAR_35];
  VAR_34->kb_lastact[VAR_35] = 142;
  switch (VAR_41) {
  case 147:
   if (VAR_40 & VAR_28) {
    FUNC_2(VAR_34, VAR_40, 159);
    VAR_40 &= ~VAR_3;
   }
   VAR_41 = 148;

  case 148:
   VAR_40 &= ~VAR_30;
   break;
  case 132:
   if (VAR_40 & VAR_28) {
    FUNC_2(VAR_34, VAR_40, 159);
    VAR_40 &= ~VAR_3;
   }
   VAR_41 = 133;

  case 133:
   VAR_40 &= ~VAR_31;
   break;
  case 149:
   if (VAR_40 & VAR_28) {
    FUNC_2(VAR_34, VAR_40, 159);
    VAR_40 &= ~VAR_3;
   }
   VAR_41 = 150;

  case 150:
   VAR_40 &= ~VAR_13;
   break;
  case 134:
   if (VAR_40 & VAR_28) {
    FUNC_2(VAR_34, VAR_40, 159);
    VAR_40 &= ~VAR_3;
   }
   VAR_41 = 135;

  case 135:
   VAR_40 &= ~VAR_14;
   break;
  case 151:
   if (VAR_40 & VAR_28) {
    FUNC_2(VAR_34, VAR_40, 159);
    VAR_40 &= ~VAR_3;
   }
   VAR_41 = 152;

  case 152:
   VAR_40 &= ~VAR_7;
   break;
  case 137:
   if (VAR_40 & VAR_28) {
    FUNC_2(VAR_34, VAR_40, 159);
    VAR_40 &= ~VAR_3;
   }
   VAR_41 = 138;

  case 138:
   VAR_40 &= ~VAR_8;
   break;
  case 158:
   VAR_40 &= ~VAR_1;
   break;
  case 146:
   VAR_40 &= ~VAR_23;
   break;
  case 144:
   VAR_40 &= ~VAR_25;
   break;
  case 156:
   VAR_40 &= ~VAR_10;
   break;
  case 131:
   VAR_40 &= ~VAR_32;
   break;
  case 159:
   VAR_40 &= ~VAR_3;
   break;
  case 142:

   *VAR_37 &= ~VAR_28;
   return (143);
  }
  *VAR_37 = VAR_40 & ~VAR_28;
  return (VAR_33 | VAR_27 | VAR_41);
 } else {
  VAR_41 = VAR_39->map[VAR_43];
  VAR_40 &= ~VAR_28;
  if (VAR_39->spcl & (0x80 >> VAR_43)) {

   if (VAR_34->kb_lastact[VAR_35] == 142)
    VAR_34->kb_lastact[VAR_35] = VAR_41;
   if (VAR_34->kb_lastact[VAR_35] != VAR_41)
    VAR_41 = 142;
   switch (VAR_41) {

   case 144:
    FUNC_2(VAR_34, VAR_40, 144);
    break;
   case 156:
    FUNC_2(VAR_34, VAR_40, 156);
    break;
   case 131:
    FUNC_2(VAR_34, VAR_40, 131);
    break;
   case 159:
    FUNC_2(VAR_34, VAR_40, 159);
    break;

   case 130: case 136: case 128: case 129:
   case 155: case 145: case 139: case 140:
   case 153: case 141:
    *VAR_38 = 0;
    break;
   case 157:
    *VAR_38 = 0;
    VAR_41 |= VAR_9;
    break;
   case 147:
    VAR_40 |= VAR_28;
    VAR_41 = 148;

   case 148:
    VAR_40 |= VAR_30;
    break;
   case 132:
    VAR_40 |= VAR_28;
    VAR_41 = 133;

   case 133:
    VAR_40 |= VAR_31;
    break;
   case 149:
    VAR_40 |= VAR_28;
    VAR_41 = 150;

   case 150:
    VAR_40 |= VAR_13;
    break;
   case 134:
    VAR_40 |= VAR_28;
    VAR_41 = 135;

   case 135:
    VAR_40 |= VAR_14;
    break;
   case 151:
    VAR_40 |= VAR_28;
    VAR_41 = 152;

   case 152:
    VAR_40 |= VAR_7;
    break;
   case 137:
    VAR_40 |= VAR_28;
    VAR_41 = 138;

   case 138:
    VAR_40 |= VAR_8;
    break;
   case 158:
    VAR_40 |= VAR_1;
    break;
   case 146:
    VAR_40 |= VAR_23;
    break;
   case 142:
    *VAR_37 = VAR_40;
    return (143);
   default:

    *VAR_37 = VAR_40;
    if (VAR_41 >= VAR_18 && VAR_41 <= VAR_20) {
     VAR_41 = FUNC_1(VAR_34, VAR_41,
         VAR_38);
     switch (VAR_41) {
     case 143:
     case 154:
      return (VAR_41);
     default:
      if (VAR_40 & VAR_22)
       return (VAR_41 | VAR_24);
      else
       return (VAR_41);
     }

    }

    if (*VAR_38 > 0) {
     *VAR_38 = 0;
     return (154);
    }
    if (VAR_41 >= VAR_19 && VAR_41 <= VAR_21)
     VAR_41 |= VAR_15;

    return (VAR_33 | VAR_41);
   }
   *VAR_37 = VAR_40;
   return (VAR_33 | VAR_41);
  } else {

   VAR_34->kb_lastact[VAR_35] = 142;
   *VAR_37 = VAR_40;
   if (*VAR_38 > 0) {

    VAR_41 = FUNC_0(VAR_34, VAR_41, VAR_38);
    if (VAR_41 == 154)
     return (VAR_41);
   }
   if (VAR_40 & VAR_22)
    VAR_41 |= VAR_24;
   return (VAR_41);
  }
 }

}
