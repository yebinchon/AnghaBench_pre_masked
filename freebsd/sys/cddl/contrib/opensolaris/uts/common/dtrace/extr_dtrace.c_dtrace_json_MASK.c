
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef uintptr_t uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int dtrace_json_state_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (uintptr_t) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,uintptr_t) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;

__attribute__((used)) static char *
FUNC_7(uint64_t VAR_3, uintptr_t VAR_4, char *VAR_5, int VAR_6,
    char *VAR_7)
{
 dtrace_json_state_t VAR_8 = 132;
 int64_t VAR_9 = VAR_2;
 int64_t VAR_10 = 0;
 uint8_t VAR_11 = 0;
 boolean_t VAR_12 = VAR_0;
 boolean_t VAR_13 = VAR_0;
 boolean_t VAR_14 = VAR_0;
 boolean_t VAR_15 = VAR_0;
 uint32_t VAR_16 = 0, VAR_17 = 0;
 char *VAR_18 = VAR_5;
 char *VAR_19 = VAR_7;
 uintptr_t VAR_20;

 for (VAR_20 = VAR_4; VAR_20 < VAR_4 + VAR_3; VAR_20++) {
  char VAR_21 = FUNC_0(VAR_20);
  if (VAR_21 == '\0')
   return (((void*)0));

  switch (VAR_8) {
  case 132:
   if (FUNC_5(VAR_21))
    break;

   if (VAR_21 == '{') {
    VAR_8 = 133;
    break;
   }

   if (VAR_21 == '[') {
    VAR_15 = VAR_1;
    VAR_10 = 0;
    VAR_9 = FUNC_2(VAR_18, 10, VAR_3);
    VAR_14 = VAR_9 == 0 ? VAR_1 : VAR_0;
    VAR_8 = 128;
    break;
   }




   return (((void*)0));
  case 133:
   if (FUNC_5(VAR_21))
    break;

   if (VAR_21 == '"') {
    VAR_8 = 131;
    VAR_12 = VAR_1;
    break;
   }






   return (((void*)0));
  case 131:
   if (VAR_21 == '\\') {
    *VAR_19++ = '\\';
    VAR_8 = 130;
    break;
   }

   if (VAR_21 == '"') {
    if (VAR_13) {





     *VAR_19++ = VAR_21;
     VAR_13 = VAR_0;
     VAR_8 = 140;
     break;
    }
    *VAR_19 = '\0';
    VAR_19 = VAR_7;
    if (VAR_12) {
     if (FUNC_1(VAR_7, VAR_18,
         VAR_3) == 0)
      VAR_14 = VAR_1;
    } else if (VAR_14) {
     if (VAR_6 > 1) {




      return (((void*)0));
     }
     return (VAR_7);
    }
    VAR_8 = VAR_12 ? 139 :
        138;
    VAR_12 = VAR_0;
    break;
   }

   *VAR_19++ = VAR_21;
   break;
  case 130:
   *VAR_19++ = VAR_21;
   if (VAR_21 == 'u') {
    VAR_11 = 0;
    VAR_8 = 129;
   } else {
    VAR_8 = 131;
   }
   break;
  case 129:
   if (!FUNC_6(VAR_21)) {




    return (((void*)0));
   }

   *VAR_19++ = VAR_21;
   if (++VAR_11 == 4)
    VAR_8 = 131;
   break;
  case 139:
   if (FUNC_5(VAR_21))
    break;

   if (VAR_21 == ':') {
    VAR_8 = 128;
    break;
   }




   return (((void*)0));
  case 138:
   if (FUNC_5(VAR_21))
    break;

   if (VAR_21 == ',') {
    if (VAR_15) {
     VAR_8 = 128;
     if (++VAR_10 == VAR_9)
      VAR_14 = VAR_1;
    } else {
     VAR_8 = 133;
    }
    break;
   }






   return (((void*)0));
  case 137:
   if (FUNC_4(VAR_21)) {
    *VAR_19++ = VAR_21;
    break;
   }

   *VAR_19 = '\0';
   VAR_19 = VAR_7;

   if (FUNC_1(VAR_7, "true", 5) == 0 ||
       FUNC_1(VAR_7, "false", 6) == 0 ||
       FUNC_1(VAR_7, "null", 5) == 0) {
    if (VAR_14) {
     if (VAR_6 > 1) {




      return (((void*)0));
     }
     return (VAR_7);
    } else {
     VAR_20--;
     VAR_8 = 138;
     break;
    }
   }





   return (((void*)0));
  case 136:
   if (VAR_21 == '.') {
    *VAR_19++ = VAR_21;
    VAR_8 = 134;
    break;
   }

   if (VAR_21 == 'x' || VAR_21 == 'X') {




    return (((void*)0));
   }


  case 134:
   if (VAR_21 == 'e' || VAR_21 == 'E') {
    *VAR_19++ = VAR_21;
    VAR_8 = 135;
    break;
   }

   if (VAR_21 == '+' || VAR_21 == '-') {



    return (((void*)0));
   }

  case 135:
   if (FUNC_3(VAR_21) || VAR_21 == '+' || VAR_21 == '-') {
    *VAR_19++ = VAR_21;
    break;
   }

   *VAR_19 = '\0';
   VAR_19 = VAR_7;
   if (VAR_14) {
    if (VAR_6 > 1) {




     return (((void*)0));
    }
    return (VAR_7);
   }

   VAR_20--;
   VAR_8 = 138;
   break;
  case 128:
   if (FUNC_5(VAR_21))
    break;

   if (VAR_21 == '{' || VAR_21 == '[') {
    if (VAR_6 > 1 && VAR_14) {
     VAR_15 = VAR_21 == '[' ? VAR_1 : VAR_0;







     while (*VAR_18 != '\0')
      VAR_18++;
     VAR_18++;
     VAR_6--;
     VAR_19 = VAR_7;
     if (VAR_15) {
      VAR_8 = 128;
      VAR_10 = 0;
      VAR_9 = FUNC_2(
          VAR_18, 10, VAR_3);
      VAR_14 = VAR_9 == 0 ?
          VAR_1 : VAR_0;
     } else {
      VAR_14 = VAR_0;
      VAR_8 = 133;
     }
     break;
    }





    if (VAR_21 == '[')
     VAR_17 = 1;
    else
     VAR_16 = 1;
    *VAR_19++ = VAR_21;
    VAR_8 = 140;
    break;
   }

   if (VAR_21 == '"') {
    VAR_8 = 131;
    break;
   }

   if (FUNC_4(VAR_21)) {



    *VAR_19++ = VAR_21;
    VAR_8 = 137;
    break;
   }

   if (VAR_21 == '-' || FUNC_3(VAR_21)) {
    *VAR_19++ = VAR_21;
    VAR_8 = 136;
    break;
   }




   return (((void*)0));
  case 140:
   if (VAR_21 == '\0')



    return (((void*)0));

   *VAR_19++ = VAR_21;
   if (VAR_21 == '"') {
    VAR_13 = VAR_1;
    VAR_8 = 131;
    break;
   }

   if (VAR_21 == ']') {
    if (VAR_17-- == 0) {



     return (((void*)0));
    }
   } else if (VAR_21 == '}') {
    if (VAR_16-- == 0) {



     return (((void*)0));
    }
   } else if (VAR_21 == '{') {
    VAR_16++;
   } else if (VAR_21 == '[') {
    VAR_17++;
   }

   if (VAR_17 == 0 && VAR_16 == 0) {
    if (VAR_14) {
     *VAR_19 = '\0';
     return (VAR_7);
    }
    VAR_19 = VAR_7;
    VAR_8 = 138;
   }
   break;
  }
 }
 return (((void*)0));
}
