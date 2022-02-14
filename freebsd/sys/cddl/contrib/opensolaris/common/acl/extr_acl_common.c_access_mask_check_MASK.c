
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int a_type; int a_access_mask; } ;
typedef TYPE_1__ ace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;

__attribute__((used)) static int
FUNC_0(ace_t *VAR_40, int VAR_41, int VAR_42)
{
 int VAR_43, VAR_44;
 int VAR_45, VAR_46;
 int VAR_47;
 int VAR_48, VAR_49;

 if (VAR_40->a_type == VAR_1) {
  VAR_48 = (VAR_40->a_access_mask & VAR_7) ? 0 : 1;
  VAR_49 = (VAR_40->a_access_mask & VAR_3) ? 0 : 1;
 } else {
  VAR_48 = (VAR_40->a_access_mask & VAR_7) ? 1 : 0;
  VAR_49 = (VAR_40->a_access_mask & VAR_3) ? 1 : 0;
 }

 VAR_47 = (VAR_19 |
     VAR_11 |
     VAR_35 |
     VAR_34 |
     VAR_24 |
     VAR_23 |
     VAR_29 |
     VAR_26 |
     VAR_31 |
     VAR_15);

 if (VAR_41 == VAR_5) {
  VAR_43 = VAR_21;
  VAR_44 = VAR_19;
  VAR_45 = VAR_20;
  VAR_46 = VAR_18;
 } else if (VAR_41 == VAR_9) {
  VAR_43 = VAR_37;
  VAR_44 = VAR_35;
  VAR_45 = VAR_36;
  VAR_46 = VAR_34;
 } else if (VAR_41 == VAR_2) {
  VAR_43 = VAR_13;
  VAR_44 = VAR_11;
  VAR_45 = VAR_12;
  VAR_46 = VAR_10;
 } else if (VAR_41 == VAR_6) {
  if (VAR_42) {
   VAR_43 = VAR_25;
   VAR_44 = VAR_23;
   VAR_45 = VAR_24;
   VAR_46 = VAR_22;
  } else if (VAR_48) {
   VAR_43 = VAR_29;
   VAR_44 = VAR_27;
   VAR_45 = VAR_28;
   VAR_46 = VAR_26;
  } else {
   if ((VAR_40->a_access_mask & VAR_41) &&
       (VAR_40->a_type & VAR_0)) {
    return (VAR_39);
   }
   return (0);
  }
 } else if (VAR_41 == VAR_4) {
  if (!VAR_49)
   return (0);

  VAR_43 = VAR_17;
  VAR_44 = VAR_15;
  VAR_45 = VAR_16;
  VAR_46 = VAR_14;
 } else if (VAR_41 == VAR_8) {
  if (!VAR_48)
   return (0);

  VAR_43 = VAR_33;
  VAR_44 = VAR_31;
  VAR_45 = VAR_32;
  VAR_46 = VAR_30;
 } else {
  return (VAR_38);
 }

 if (VAR_40->a_type == VAR_1) {
  if (VAR_47 & VAR_43) {
   if (!(VAR_40->a_access_mask & VAR_41)) {
    return (VAR_39);
   }
  } else if (VAR_47 & VAR_44) {
   if (VAR_40->a_access_mask & VAR_41) {
    return (VAR_39);
   }
  }
 } else {

  if (VAR_47 & VAR_45) {
   if (!(VAR_40->a_access_mask & VAR_41)) {
    return (VAR_39);
   }
  } else if (VAR_47 & VAR_46) {
   if (VAR_40->a_access_mask & VAR_41) {
    return (VAR_39);
   }
  }
 }
 return (0);
}
