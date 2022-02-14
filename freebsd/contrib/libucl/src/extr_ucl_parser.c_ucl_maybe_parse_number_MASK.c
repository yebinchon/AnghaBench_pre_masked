
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double dv; double iv; } ;
struct TYPE_5__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ ucl_object_t ;
typedef double int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 double FUNC_2 (char const*,char**) ;
 double FUNC_3 (char const*,char**,int) ;
 char FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 double FUNC_6 (char const,int) ;
 double FUNC_7 (char const) ;
 int FUNC_8 (char const,int ) ;

int
FUNC_9 (ucl_object_t *VAR_7,
  const char *VAR_8, const char *VAR_9, const char **VAR_10,
  bool VAR_11, bool VAR_12, bool VAR_13)
{
 const char *VAR_14 = VAR_8, *VAR_15 = VAR_8;
 char *VAR_16;
 bool VAR_17 = 0, VAR_18 = 0, VAR_19 = 0,
   VAR_20 = 0, VAR_21 = 0, VAR_22 = 0,
   VAR_23 = 0;
 double VAR_24 = 0;
 int64_t VAR_25 = 0;

 if (*VAR_14 == '-') {
  VAR_23 = 1;
  VAR_15 ++;
  VAR_14 ++;
 }
 while (VAR_14 < VAR_9) {
  if (VAR_22 && FUNC_1 (*VAR_14)) {
   VAR_14 ++;
  }
  else if (FUNC_0 (*VAR_14)) {
   VAR_21 = 1;
   VAR_14 ++;
  }
  else if (!VAR_22 && (*VAR_14 == 'x' || *VAR_14 == 'X')) {
   VAR_22 = 1;
   VAR_11 = 0;
   VAR_15 = VAR_14 + 1;
  }
  else if (VAR_11) {
   if (VAR_14 == VAR_15) {

    *VAR_10 = VAR_8;
    return VAR_0;
   }
   else if (*VAR_14 == '.') {
    if (VAR_17) {

     *VAR_10 = VAR_8;
     return VAR_0;
    }
    else {
     VAR_17 = 1;
     VAR_19 = 1;
     VAR_14 ++;
    }
   }
   else if (*VAR_14 == 'e' || *VAR_14 == 'E') {
    if (VAR_18) {

     *VAR_10 = VAR_8;
     return VAR_0;
    }
    else {
     VAR_18 = 1;
     VAR_19 = 1;
     VAR_14 ++;
     if (VAR_14 >= VAR_9) {
      *VAR_10 = VAR_8;
      return VAR_0;
     }
     if (!FUNC_0 (*VAR_14) && *VAR_14 != '+' && *VAR_14 != '-') {

      *VAR_10 = VAR_8;
      return VAR_0;
     }
     else {
      VAR_14 ++;
     }
    }
   }
   else {

    break;
   }
  }
  else {
   break;
  }
 }

 if (!VAR_21) {
  *VAR_10 = VAR_8;
  return VAR_0;
 }

 VAR_6 = 0;
 if (VAR_19) {
  VAR_24 = FUNC_2 (VAR_15, &VAR_16);
 }
 else {
  if (VAR_22) {
   VAR_25 = FUNC_3 (VAR_15, &VAR_16, 16);
  }
  else {
   VAR_25 = FUNC_3 (VAR_15, &VAR_16, 10);
  }
 }
 if (VAR_6 == VAR_1) {
  *VAR_10 = VAR_8;
  return VAR_1;
 }


 if (VAR_16 == ((void*)0) || FUNC_5 (*VAR_16) || *VAR_16 == '\0') {
  VAR_14 = VAR_16;
  goto set_obj;
 }

 if (VAR_16 < VAR_9 && VAR_16 != VAR_8) {
  VAR_14 = VAR_16;
  switch (*VAR_14) {
  case 'm':
  case 'M':
  case 'g':
  case 'G':
  case 'k':
  case 'K':
   if (VAR_9 - VAR_14 >= 2) {
    if (VAR_14[1] == 's' || VAR_14[1] == 'S') {

     if (!VAR_19) {
      VAR_19 = 1;
      VAR_24 = VAR_25;
     }
     VAR_20 = 1;
     if (VAR_14[0] == 'm' || VAR_14[0] == 'M') {
      VAR_24 /= 1000.;
     }
     else {
      VAR_24 *= FUNC_6 (*VAR_14, 0);
     }
     VAR_14 += 2;
     goto set_obj;
    }
    else if (VAR_12 || (VAR_14[1] == 'b' || VAR_14[1] == 'B')) {

     if (VAR_19) {
      VAR_19 = 0;
      VAR_25 = VAR_24;
     }
     VAR_25 *= FUNC_6 (*VAR_14, 1);
     VAR_14 += 2;
     goto set_obj;
    }
    else if (FUNC_5 (VAR_14[1])) {
     if (VAR_19) {
      VAR_24 *= FUNC_6 (*VAR_14, 0);
     }
     else {
      VAR_25 *= FUNC_6 (*VAR_14, VAR_12);
     }
     VAR_14 ++;
     goto set_obj;
    }
    else if (VAR_13 && VAR_9 - VAR_14 >= 3) {
     if (FUNC_4 (VAR_14[0]) == 'm' &&
       FUNC_4 (VAR_14[1]) == 'i' &&
       FUNC_4 (VAR_14[2]) == 'n') {

      if (!VAR_19) {
       VAR_19 = 1;
       VAR_24 = VAR_25;
      }
      VAR_20 = 1;
      VAR_24 *= 60.;
      VAR_14 += 3;
      goto set_obj;
     }
    }
   }
   else {
    if (VAR_19) {
     VAR_24 *= FUNC_6 (*VAR_14, 0);
    }
    else {
     VAR_25 *= FUNC_6 (*VAR_14, VAR_12);
    }
    VAR_14 ++;
    goto set_obj;
   }
   break;
  case 'S':
  case 's':
   if (VAR_13 &&
     (VAR_14 == VAR_9 - 1 || FUNC_5 (VAR_14[1]))) {
    if (!VAR_19) {
     VAR_19 = 1;
     VAR_24 = VAR_25;
    }
    VAR_14 ++;
    VAR_20 = 1;
    goto set_obj;
   }
   break;
  case 'h':
  case 'H':
  case 'd':
  case 'D':
  case 'w':
  case 'W':
  case 'Y':
  case 'y':
   if (VAR_13 &&
     (VAR_14 == VAR_9 - 1 || FUNC_5 (VAR_14[1]))) {
    if (!VAR_19) {
     VAR_19 = 1;
     VAR_24 = VAR_25;
    }
    VAR_20 = 1;
    VAR_24 *= FUNC_7 (*VAR_14);
    VAR_14 ++;
    goto set_obj;
   }
   break;
  case '\t':
  case ' ':
   while (VAR_14 < VAR_9 && FUNC_8(*VAR_14, VAR_2)) {
    VAR_14++;
   }
   if (FUNC_5(*VAR_14))
    goto set_obj;
   break;
  }
 }
 else if (VAR_16 == VAR_9) {

  VAR_14 = VAR_16;
  goto set_obj;
 }

 *VAR_10 = VAR_15;
 return VAR_0;

set_obj:
 if (VAR_7 != ((void*)0)) {
  if (VAR_11 && (VAR_19 || VAR_20)) {
   if (!VAR_20) {
    VAR_7->type = VAR_3;
   }
   else {
    VAR_7->type = VAR_5;
   }
   VAR_7->value.dv = VAR_23 ? (-VAR_24) : VAR_24;
  }
  else {
   VAR_7->type = VAR_4;
   VAR_7->value.iv = VAR_23 ? (-VAR_25) : VAR_25;
  }
 }
 *VAR_10 = VAR_14;
 return 0;
}
