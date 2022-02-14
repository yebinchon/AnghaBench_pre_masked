
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct printf_info {int prec; char showsign; int spec; scalar_t__ left; int width; scalar_t__ alt; int pad; scalar_t__ is_long_double; } ;
struct __printf_io {int dummy; } ;
struct TYPE_2__ {char* thousands_sep; char* grouping; char* decimal_point; } ;


 int VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,char const,int) ;
 char* FUNC_1 (double,char const*,int,int*,int*,char**) ;
 char* FUNC_2 (long double,char const*,int,int*,int*,char**) ;
 char* FUNC_3 (long double*,int,int,int*,int*,char**) ;
 char* VAR_5 ;
 int FUNC_4 (struct __printf_io*) ;
 scalar_t__ FUNC_5 (struct __printf_io*,int,int) ;
 scalar_t__ FUNC_6 (struct __printf_io*,char*,int) ;
 char* VAR_6 ;
 int FUNC_7 (int) ;
 char* FUNC_8 (double,int,int,int*,int*,char**) ;
 int FUNC_9 (char*,int,char) ;
 int FUNC_10 (char*) ;
 TYPE_1__* FUNC_11 () ;

int
FUNC_12(struct __printf_io *VAR_7, const struct printf_info *VAR_8, const void *const *VAR_9)
{
 int VAR_10;
 char *VAR_11;
 char VAR_12;
 char *VAR_13;
 int VAR_14;
 int VAR_15;
 char *VAR_16;
 char VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 char VAR_21[VAR_4+2];
 int VAR_22;
 int VAR_23;
 const char *VAR_24;
 int VAR_25;
 long double VAR_26;
 double VAR_27;
 int VAR_28;
 int VAR_29;
 char VAR_30[2];
 int VAR_31;
 char *VAR_32;
 int VAR_33;
 char VAR_34;
 char VAR_35[VAR_0];
 const char *VAR_36;
 int VAR_37;

 VAR_10 = VAR_8->prec;
 VAR_30[1] = '\0';
 VAR_17 = VAR_8->showsign;
 VAR_37 = 0;
 VAR_31 = 0;

 VAR_34 = *(FUNC_11()->thousands_sep);
 VAR_24 = ((void*)0);
 if (VAR_8->alt)
  VAR_24 = FUNC_11()->grouping;
 VAR_32 = FUNC_11()->decimal_point;
 VAR_29 = -1;

 switch(VAR_8->spec) {
 case 'a':
 case 'A':
  if (VAR_8->spec == 'a') {
   VAR_30[1] = 'x';
   VAR_36 = VAR_5;
   VAR_12 = 'p';
  } else {
   VAR_30[1] = 'X';
   VAR_36 = VAR_6;
   VAR_12 = 'P';
  }
  if (VAR_10 >= 0)
   VAR_10++;
  if (VAR_8->is_long_double) {
   VAR_26 = *((long double *)VAR_9[0]);
   VAR_11 = VAR_13 =
       FUNC_2(VAR_26, VAR_36, VAR_10,
       &VAR_14, &VAR_15, &VAR_16);
  } else {
   VAR_27 = *((double *)VAR_9[0]);
   VAR_11 = VAR_13 =
       FUNC_1(VAR_27, VAR_36, VAR_10,
       &VAR_14, &VAR_15, &VAR_16);
  }
  if (VAR_10 < 0)
   VAR_10 = VAR_16 - VAR_13;
  if (VAR_14 == VAR_3)
   VAR_30[1] = '\0';
  goto fp_common;
 case 'e':
 case 'E':
  VAR_12 = VAR_8->spec;
  if (VAR_10 < 0)
   VAR_10 = VAR_2 + 1;
  else
   VAR_10++;
  break;
 case 'f':
 case 'F':
  VAR_12 = '\0';
  break;
 case 'g':
 case 'G':
  VAR_12 = VAR_8->spec - ('g' - 'e');
  if (VAR_10 == 0)
   VAR_10 = 1;
  break;
 default:
  FUNC_7(VAR_8->spec == 'f');
 }

 if (VAR_10 < 0)
  VAR_10 = VAR_2;
 if (VAR_8->is_long_double) {
  VAR_26 = *((long double *)VAR_9[0]);
  VAR_11 = VAR_13 =
      FUNC_3(&VAR_26, VAR_12 ? 2 : 3, VAR_10,
      &VAR_14, &VAR_15, &VAR_16);
 } else {
  VAR_27 = *((double *)VAR_9[0]);
  VAR_11 = VAR_13 =
      FUNC_8(VAR_27, VAR_12 ? 2 : 3, VAR_10,
      &VAR_14, &VAR_15, &VAR_16);
  if (VAR_14 == 9999)
   VAR_14 = VAR_3;
 }
fp_common:
 if (VAR_15)
  VAR_17 = '-';
 if (VAR_14 == VAR_3) {
  if (*VAR_13 == 'N') {
   VAR_13 = (VAR_8->spec >= 'a') ? "nan" : "NAN";
   VAR_17 = '\0';
  } else
   VAR_13 = (VAR_8->spec >= 'a') ? "inf" : "INF";
  VAR_18 = 3;
  VAR_37 = 1;
  goto here;
 }
 VAR_19 = VAR_16 - VAR_13;
 if (VAR_8->spec == 'g' || VAR_8->spec == 'G') {
  if (VAR_14 > -4 && VAR_14 <= VAR_10) {

   VAR_12 = '\0';
   if (VAR_8->alt)
    VAR_10 -= VAR_14;
   else
    VAR_10 = VAR_19 - VAR_14;
   if (VAR_10 < 0)
    VAR_10 = 0;
  } else {




   if (!VAR_8->alt)
    VAR_10 = VAR_19;
  }
 }
 if (VAR_12) {
  VAR_20 = FUNC_9(VAR_21, VAR_14 - 1, VAR_12);
  VAR_18 = VAR_20 + VAR_10;
  if (VAR_10 > 1 || VAR_8->alt)
   ++VAR_18;
 } else {

  if (VAR_14 > 0)
   VAR_18 = VAR_14;
  else
   VAR_18 = 1;

  if (VAR_10 || VAR_8->alt)
   VAR_18 += VAR_10 + 1;
  if (VAR_24 && VAR_14 > 0) {

   VAR_22 = VAR_23 = 0;
   VAR_25 = VAR_14;
   while (*VAR_24 != VAR_1) {
    if (VAR_25 <= *VAR_24)
     break;
    VAR_25 -= *VAR_24;
    if (*(VAR_24+1)) {
     VAR_22++;
     VAR_24++;
    } else
     VAR_23++;
   }
   VAR_18 += VAR_22 + VAR_23;
  } else
   VAR_25 = VAR_14;
 }

here:
 VAR_28 = VAR_29 > VAR_18 ? VAR_29 : VAR_18;
 if (VAR_17)
  VAR_28++;
 if (VAR_30[1])
  VAR_28 += 2;


 if (VAR_8->pad != '0' && VAR_8->left == 0)
  VAR_31 += FUNC_5(VAR_7, VAR_8->width - VAR_28, 0);


 if (VAR_17)
  VAR_31 += FUNC_6(VAR_7, &VAR_17, 1);

 if (VAR_30[1]) {
  VAR_30[0] = '0';
  VAR_31 += FUNC_6(VAR_7, VAR_30, 2);
 }


 if (VAR_8->pad == '0' && VAR_8->left == 0)
  VAR_31 += FUNC_5(VAR_7, VAR_8->width - VAR_28, 1);


 VAR_31 += FUNC_5(VAR_7, VAR_29 - VAR_18, 1);

 if (VAR_37)
  VAR_31 += FUNC_6(VAR_7, VAR_13, VAR_18);
 else {

  if (!VAR_12) {
   if (VAR_14 <= 0) {
    VAR_31 += FUNC_6(VAR_7, "0", 1);
    if (VAR_10 || VAR_8->alt)
     VAR_31 += FUNC_6(VAR_7, VAR_32, 1);
    VAR_31 += FUNC_5(VAR_7, -VAR_14, 1);

    VAR_10 += VAR_14;
   } else {
    FUNC_0(VAR_13, VAR_16, VAR_25, 1);
    VAR_13 += VAR_25;
    if (VAR_24) {
     while (VAR_22>0 || VAR_23>0) {
      if (VAR_23 > 0)
       VAR_23--;
      else {
       VAR_24--;
       VAR_22--;
      }
      VAR_31 += FUNC_6(VAR_7, &VAR_34, 1);
      FUNC_0(VAR_13,VAR_16,
          *VAR_24, 1);
      VAR_13 += *VAR_24;
     }
     if (VAR_13 > VAR_16)
      VAR_13 = VAR_16;
    }
    if (VAR_10 || VAR_8->alt)
     VAR_31 += FUNC_6(VAR_7, VAR_32,1);
   }
   FUNC_0(VAR_13, VAR_16, VAR_10, 1);
  } else {
   if (VAR_10 > 1 || VAR_8->alt) {
    VAR_35[0] = *VAR_13++;
    VAR_35[1] = *VAR_32;
    VAR_31 += FUNC_6(VAR_7, VAR_35, 2);
    VAR_31 += FUNC_6(VAR_7, VAR_13, VAR_19-1);
    VAR_31 += FUNC_5(VAR_7, VAR_10 - VAR_19, 1);
   } else
    VAR_31 += FUNC_6(VAR_7, VAR_13, 1);
   VAR_31 += FUNC_6(VAR_7, VAR_21, VAR_20);
  }
 }

 if (VAR_8->left)
  VAR_31 += FUNC_5(VAR_7, VAR_8->width - VAR_28, 0);

 FUNC_4(VAR_7);
 if (VAR_11 != ((void*)0))
  FUNC_10(VAR_11);

 return (VAR_31);
}
