
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_decoder_function {int dummy; } ;
struct pt_config {int* begin; int* end; } ;


 struct pt_decoder_function VAR_0 ;
 struct pt_decoder_function VAR_1 ;
 struct pt_decoder_function VAR_2 ;
 struct pt_decoder_function VAR_3 ;
 struct pt_decoder_function VAR_4 ;
 struct pt_decoder_function VAR_5 ;
 struct pt_decoder_function VAR_6 ;
 struct pt_decoder_function VAR_7 ;
 struct pt_decoder_function VAR_8 ;
 struct pt_decoder_function VAR_9 ;
 struct pt_decoder_function VAR_10 ;
 struct pt_decoder_function VAR_11 ;
 struct pt_decoder_function VAR_12 ;
 struct pt_decoder_function VAR_13 ;
 struct pt_decoder_function VAR_14 ;
 struct pt_decoder_function VAR_15 ;
 struct pt_decoder_function VAR_16 ;
 struct pt_decoder_function VAR_17 ;
 struct pt_decoder_function VAR_18 ;
 struct pt_decoder_function VAR_19 ;
 struct pt_decoder_function VAR_20 ;
 struct pt_decoder_function VAR_21 ;
 struct pt_decoder_function VAR_22 ;
 struct pt_decoder_function VAR_23 ;
 struct pt_decoder_function VAR_24 ;
 struct pt_decoder_function VAR_25 ;
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
 int VAR_40 ;

int FUNC_0(const struct pt_decoder_function **VAR_41, const uint8_t *VAR_42,
  const struct pt_config *VAR_43)
{
 const uint8_t *VAR_44, *VAR_45;
 uint8_t VAR_46, VAR_47, VAR_48;

 if (!VAR_41 || !VAR_43)
  return -VAR_39;


 *VAR_41 = ((void*)0);

 VAR_44 = VAR_43->begin;
 VAR_45 = VAR_43->end;

 if (!VAR_42 || (VAR_42 < VAR_44) || (VAR_45 < VAR_42))
  return -VAR_40;

 if (VAR_42 == VAR_45)
  return -VAR_38;

 VAR_46 = *VAR_42++;
 switch (VAR_46) {
 default:

  if ((VAR_46 & VAR_37) == VAR_32) {
   *VAR_41 = &VAR_22;
   return 0;
  }

  if ((VAR_46 & VAR_33) == VAR_27) {
   *VAR_41 = &VAR_1;
   return 0;
  }

  if ((VAR_46 & VAR_36) == VAR_29) {
   *VAR_41 = &VAR_17;
   return 0;
  }

  if ((VAR_46 & VAR_34) == VAR_28) {
   *VAR_41 = &VAR_3;
   return 0;
  }

  if ((VAR_46 & VAR_36) == VAR_31) {
   *VAR_41 = &VAR_19;
   return 0;
  }

  if ((VAR_46 & VAR_36) == VAR_30) {
   *VAR_41 = &VAR_18;
   return 0;
  }

  *VAR_41 = &VAR_24;
  return 0;

 case 129:
  *VAR_41 = &VAR_9;
  return 0;

 case 131:
  *VAR_41 = &VAR_5;
  return 0;

 case 128:
  *VAR_41 = &VAR_23;
  return 0;

 case 130:
  *VAR_41 = &VAR_6;
  return 0;

 case 132:
  if (VAR_42 == VAR_45)
   return -VAR_38;

  VAR_47 = *VAR_42++;
  switch (VAR_47) {
  default:

   if ((VAR_47 & VAR_35) == VAR_26) {
    *VAR_41 = &VAR_13;
    return 0;
   }

   *VAR_41 = &VAR_24;
   return 0;

  case 140:
   *VAR_41 = &VAR_11;
   return 0;

  case 142:
   *VAR_41 = &VAR_8;
   return 0;

  case 134:
   *VAR_41 = &VAR_21;
   return 0;

  case 139:
   *VAR_41 = &VAR_12;
   return 0;

  case 147:
   *VAR_41 = &VAR_0;
   return 0;

  case 141:
   *VAR_41 = &VAR_10;
   return 0;

  case 135:
   *VAR_41 = &VAR_20;
   return 0;

  case 136:
   *VAR_41 = &VAR_16;
   return 0;

  case 133:
   *VAR_41 = &VAR_25;
   return 0;

  case 146:
  case 145:
   *VAR_41 = &VAR_2;
   return 0;

  case 143:
   *VAR_41 = &VAR_7;
   return 0;

  case 138:
   *VAR_41 = &VAR_14;
   return 0;

  case 137:
   *VAR_41 = &VAR_15;
   return 0;

  case 144:
   if (VAR_42 == VAR_45)
    return -VAR_38;

   VAR_48 = *VAR_42++;
   switch (VAR_48) {
   default:
    *VAR_41 = &VAR_24;
    return 0;

   case 148:
    *VAR_41 = &VAR_4;
    return 0;
   }
  }
 }
}
