
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef char uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef char u_long ;
typedef int u_int ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int bhnd_nvram_type ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int) ;
 size_t FUNC_7 (int) ;

int
FUNC_8(const char *VAR_16, size_t VAR_17, u_int VAR_18,
    size_t *VAR_19, void *VAR_20, size_t *VAR_21, bhnd_nvram_type VAR_22)
{
 uint64_t VAR_23;
 uint64_t VAR_24, VAR_25;
 uint64_t VAR_26;
 size_t VAR_27, VAR_28;
 size_t VAR_29;
 bool VAR_30, VAR_31, VAR_32;


 if (!FUNC_6(VAR_22))
  return (VAR_1);


 if (VAR_20 != ((void*)0))
  VAR_27 = *VAR_21;
 else
  VAR_27 = 0;



 if (VAR_19 == ((void*)0))
  VAR_19 = &VAR_28;

 VAR_23 = 0;
 VAR_29 = 0;
 *VAR_19 = 0;
 VAR_30 = 0;
 VAR_31 = 0;


 if (VAR_18 != 0 && !(VAR_18 >= 2 && VAR_18 <= 36))
  return (VAR_1);


 for (; *VAR_19 < VAR_17; (*VAR_19)++) {
  if (!FUNC_3(VAR_16[*VAR_19]))
   break;
 }


 if (*VAR_19 == VAR_17)
  return (VAR_0);


 if (VAR_16[*VAR_19] == '-') {
  VAR_30 = 1;
  VAR_31 = 1;
  (*VAR_19)++;
 } else if (VAR_16[*VAR_19] == '+') {
  VAR_31 = 1;
  (*VAR_19)++;
 }


 if (*VAR_19 == VAR_17)
  return (VAR_0);


 if (VAR_18 == 16 || VAR_18 == 0) {

  if (VAR_17 - *VAR_19 >= 2 && VAR_16[*VAR_19] == '0' &&
      (VAR_16[*VAR_19+1] == 'x' || VAR_16[*VAR_19+1] == 'X'))
  {
   VAR_18 = 16;
   (*VAR_19) += 2;
  }
 }


 if (*VAR_19 == VAR_17)
  return (VAR_0);


 if (VAR_18 == 0) {
  if (VAR_16[*VAR_19] == '0') {
   VAR_18 = 8;
  } else {
   VAR_18 = 10;
  }
 }



 if (!VAR_31 && VAR_18 == 16)
  VAR_32 = 1;
 else
  VAR_32 = 0;


 switch (VAR_22) {
 case 136:
 case 128:
  VAR_26 = (uint64_t)VAR_15;
  break;
 case 131:
  VAR_26 = (uint64_t)VAR_12;
  break;
 case 130:
  VAR_26 = (uint64_t)VAR_13;
  break;
 case 129:
  VAR_26 = (uint64_t)VAR_14;
  break;

 case 132:
  if (VAR_32)
   VAR_26 = (uint64_t)VAR_15;
  else if (VAR_30)
   VAR_26 = -(uint64_t)VAR_11;
  else
   VAR_26 = (uint64_t)VAR_10;
  break;

 case 135:
  if (VAR_32)
   VAR_26 = (uint64_t)VAR_12;
  else if (VAR_30)
   VAR_26 = -(uint64_t)VAR_5;
  else
   VAR_26 = (uint64_t)VAR_4;
  break;

 case 134:
  if (VAR_32)
   VAR_26 = (uint64_t)VAR_13;
  else if (VAR_30)
   VAR_26 = -(uint64_t)VAR_7;
  else
   VAR_26 = (uint64_t)VAR_6;
  break;

 case 133:
  if (VAR_32)
   VAR_26 = (uint64_t)VAR_14;
  else if (VAR_30)
   VAR_26 = -(uint64_t)VAR_9;
  else
   VAR_26 = (uint64_t)VAR_8;
  break;

 default:
  FUNC_0("unsupported integer type: %d\n", VAR_22);
  return (VAR_1);
 }


 VAR_25 = VAR_26 / (uint64_t)VAR_18;


 VAR_24 = VAR_26 % (uint64_t)VAR_18;


 for (; *VAR_19 < VAR_17; (*VAR_19)++) {
  u_long VAR_33;
  char VAR_34;


  VAR_34 = VAR_16[*VAR_19];
  if (FUNC_2(VAR_34)) {
   VAR_33 = VAR_34 - '0';
  } else if (FUNC_5(VAR_34)) {
   if (FUNC_4(VAR_34))
    VAR_33 = (VAR_34 - 'A') + 10;
   else
    VAR_33 = (VAR_34 - 'a') + 10;
  } else {

   break;
  }




  if (VAR_33 >= (uint64_t)VAR_18)
   break;


  VAR_29++;

  if (VAR_23 > VAR_25) {

   return (VAR_3);
  } else if (VAR_23 == VAR_25 && VAR_33 > VAR_24) {

   return (VAR_3);
  }

  VAR_23 *= (uint64_t)VAR_18;
  VAR_23 += VAR_33;
 }



 if (VAR_29 == 0)
  return (VAR_0);

 if (VAR_30)
  VAR_23 = -VAR_23;


 *VAR_21 = FUNC_7(VAR_22);
 if (VAR_20 == ((void*)0))
  return (0);
 else if (VAR_27 < *VAR_21)
  return (VAR_2);


 switch (VAR_22) {
 case 136:
 case 128:
  *(uint8_t *)VAR_20 = (uint8_t)VAR_23;
  break;
 case 131:
  *(uint16_t *)VAR_20 = (uint16_t)VAR_23;
  break;
 case 130:
  *(uint32_t *)VAR_20 = (uint32_t)VAR_23;
  break;
 case 129:
  *(uint64_t *)VAR_20 = (uint64_t)VAR_23;
  break;

 case 132:
  *(int8_t *)VAR_20 = (int8_t)(int64_t)VAR_23;
  break;
 case 135:
  *(int16_t *)VAR_20 = (int16_t)(int64_t)VAR_23;
  break;
 case 134:
  *(int32_t *)VAR_20 = (int32_t)(int64_t)VAR_23;
  break;
 case 133:
  *(int64_t *)VAR_20 = (int64_t)VAR_23;
  break;
 default:

  FUNC_1("unhandled type %d\n", VAR_22);
 }

 return (0);
}
