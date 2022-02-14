
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long time_t ;
struct tm {int tm_yday; int tm_min; int tm_sec; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_isdst; int tm_year; } ;
struct lc_time_T {char* date_fmt; char* c_fmt; char* ampm_fmt; char* X_fmt; char* x_fmt; int * month; int * mon; int * alt_month; int * weekday; int * wday; int pm; int am; } ;
typedef int locale_t ;


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
 struct lc_time_T* FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int * FUNC_4 (long*,struct tm*) ;
 int FUNC_5 (unsigned char,int ) ;
 int FUNC_6 (unsigned char,int ) ;
 size_t FUNC_7 (int) ;
 scalar_t__ FUNC_8 (unsigned char,int ) ;
 int FUNC_9 (unsigned char,int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*,int ,int,int ) ;
 int FUNC_13 (char*,char const*,int) ;
 long FUNC_14 (char const*,char**,int,int ) ;
 char** VAR_11 ;
 int FUNC_15 () ;

__attribute__((used)) static char *
FUNC_16(const char *VAR_12, const char *VAR_13, struct tm *VAR_14, int *VAR_15,
  locale_t VAR_16)
{
 char VAR_17;
 const char *VAR_18;
 int VAR_19 = -1, VAR_20;
 int VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;
 int VAR_25, VAR_26;
 int VAR_27, VAR_28;
 const struct lc_time_T *VAR_29 = FUNC_0(VAR_16);
 static int VAR_30[2][13] = {
  {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
  {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366}
 };

 VAR_24 = VAR_3;
 VAR_27 = -1;
 VAR_28 = -1;

 VAR_18 = VAR_13;
 while (*VAR_18 != 0) {
  VAR_17 = *VAR_18++;

  if (VAR_17 != '%') {
   if (FUNC_8((unsigned char)VAR_17, VAR_16))
    while (*VAR_12 != 0 &&
           FUNC_8((unsigned char)*VAR_12, VAR_16))
     VAR_12++;
   else if (VAR_17 != *VAR_12++)
    return (((void*)0));
   continue;
  }

  VAR_25 = 0;
  VAR_26 = 0;
label:
  VAR_17 = *VAR_18++;
  switch (VAR_17) {
  case '%':
   if (*VAR_12++ != '%')
    return (((void*)0));
   break;

  case '+':
   VAR_12 = FUNC_16(VAR_12, VAR_29->date_fmt, VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   VAR_24 |= VAR_4 | VAR_2 | VAR_1 | VAR_6;
   break;

  case 'C':
   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));


   VAR_23 = 2;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++) {
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }

   VAR_27 = VAR_22;
   VAR_24 |= VAR_6;

   break;

  case 'c':
   VAR_12 = FUNC_16(VAR_12, VAR_29->c_fmt, VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   VAR_24 |= VAR_4 | VAR_2 | VAR_1 | VAR_6;
   break;

  case 'D':
   VAR_12 = FUNC_16(VAR_12, "%m/%d/%y", VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   VAR_24 |= VAR_2 | VAR_1 | VAR_6;
   break;

  case 'E':
   if (VAR_25 || VAR_26)
    break;
   VAR_25++;
   goto label;

  case 'O':
   if (VAR_25 || VAR_26)
    break;
   VAR_26++;
   goto label;

  case 'F':
   VAR_12 = FUNC_16(VAR_12, "%Y-%m-%d", VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   VAR_24 |= VAR_2 | VAR_1 | VAR_6;
   break;

  case 'R':
   VAR_12 = FUNC_16(VAR_12, "%H:%M", VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   break;

  case 'r':
   VAR_12 = FUNC_16(VAR_12, VAR_29->ampm_fmt, VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   break;

  case 'T':
   VAR_12 = FUNC_16(VAR_12, "%H:%M:%S", VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   break;

  case 'X':
   VAR_12 = FUNC_16(VAR_12, VAR_29->X_fmt, VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   break;

  case 'x':
   VAR_12 = FUNC_16(VAR_12, VAR_29->x_fmt, VAR_14, VAR_15, VAR_16);
   if (VAR_12 == ((void*)0))
    return (((void*)0));
   VAR_24 |= VAR_2 | VAR_1 | VAR_6;
   break;

  case 'j':
   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_23 = 3;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++){
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }
   if (VAR_22 < 1 || VAR_22 > 366)
    return (((void*)0));

   VAR_14->tm_yday = VAR_22 - 1;
   VAR_24 |= VAR_5;

   break;

  case 'M':
  case 'S':
   if (*VAR_12 == 0 ||
    FUNC_8((unsigned char)*VAR_12, VAR_16))
    break;

   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_23 = 2;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
    FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++){
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }

   if (VAR_17 == 'M') {
    if (VAR_22 > 59)
     return (((void*)0));
    VAR_14->tm_min = VAR_22;
   } else {
    if (VAR_22 > 60)
     return (((void*)0));
    VAR_14->tm_sec = VAR_22;
   }

   break;

  case 'H':
  case 'I':
  case 'k':
  case 'l':
   VAR_23 = 2;
   if ((VAR_17 == 'k' || VAR_17 == 'l') &&
       FUNC_5((unsigned char)*VAR_12, VAR_16)) {
    VAR_12++;
    VAR_23 = 1;
   }

   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++) {
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }
   if (VAR_17 == 'H' || VAR_17 == 'k') {
    if (VAR_22 > 23)
     return (((void*)0));
   } else if (VAR_22 == 0 || VAR_22 > 12)
    return (((void*)0));

   VAR_14->tm_hour = VAR_22;

   break;

  case 'p':




   if (VAR_14->tm_hour > 12)
    return (((void*)0));

   VAR_23 = FUNC_11(VAR_29->am);
   if (FUNC_12(VAR_12, VAR_29->am, VAR_23, VAR_16) == 0) {
    if (VAR_14->tm_hour == 12)
     VAR_14->tm_hour = 0;
    VAR_12 += VAR_23;
    break;
   }

   VAR_23 = FUNC_11(VAR_29->pm);
   if (FUNC_12(VAR_12, VAR_29->pm, VAR_23, VAR_16) == 0) {
    if (VAR_14->tm_hour != 12)
     VAR_14->tm_hour += 12;
    VAR_12 += VAR_23;
    break;
   }

   return (((void*)0));

  case 'A':
  case 'a':
   for (VAR_22 = 0; VAR_22 < FUNC_2(VAR_29->weekday); VAR_22++) {
    VAR_23 = FUNC_11(VAR_29->weekday[VAR_22]);
    if (FUNC_12(VAR_12, VAR_29->weekday[VAR_22],
      VAR_23, VAR_16) == 0)
     break;
    VAR_23 = FUNC_11(VAR_29->wday[VAR_22]);
    if (FUNC_12(VAR_12, VAR_29->wday[VAR_22],
      VAR_23, VAR_16) == 0)
     break;
   }
   if (VAR_22 == FUNC_2(VAR_29->weekday))
    return (((void*)0));

   VAR_12 += VAR_23;
   VAR_14->tm_wday = VAR_22;
   VAR_24 |= VAR_4;
   break;

  case 'U':
  case 'W':






   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_23 = 2;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++) {
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }
   if (VAR_22 > 53)
    return (((void*)0));

   if (VAR_17 == 'U')
    VAR_19 = VAR_8;
   else
    VAR_19 = VAR_7;


   VAR_21 = VAR_22;

   break;

  case 'u':
  case 'w':
   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_22 = *VAR_12++ - '0';
   if (VAR_22 < 0 || VAR_22 > 7 || (VAR_17 == 'u' && VAR_22 < 1) ||
       (VAR_17 == 'w' && VAR_22 > 6))
    return (((void*)0));

   VAR_14->tm_wday = VAR_22 % 7;
   VAR_24 |= VAR_4;

   break;

  case 'e':




   if (*VAR_12 != 0 &&
       FUNC_8((unsigned char)*VAR_12, VAR_16))
          VAR_12++;

  case 'd':
   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_23 = 2;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++) {
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }
   if (VAR_22 == 0 || VAR_22 > 31)
    return (((void*)0));

   VAR_14->tm_mday = VAR_22;
   VAR_24 |= VAR_1;

   break;

  case 'B':
  case 'b':
  case 'h':
   for (VAR_22 = 0; VAR_22 < FUNC_2(VAR_29->month); VAR_22++) {
    if (VAR_26) {
     if (VAR_17 == 'B') {
      VAR_23 = FUNC_11(VAR_29->alt_month[VAR_22]);
      if (FUNC_12(VAR_12,
        VAR_29->alt_month[VAR_22],
        VAR_23, VAR_16) == 0)
       break;
     }
    } else {
     VAR_23 = FUNC_11(VAR_29->month[VAR_22]);
     if (FUNC_12(VAR_12, VAR_29->month[VAR_22],
       VAR_23, VAR_16) == 0)
      break;
    }
   }




   if (VAR_22 == FUNC_2(VAR_29->month) && !VAR_26) {
    for (VAR_22 = 0; VAR_22 < FUNC_2(VAR_29->month); VAR_22++) {
     VAR_23 = FUNC_11(VAR_29->mon[VAR_22]);
     if (FUNC_12(VAR_12, VAR_29->mon[VAR_22],
       VAR_23, VAR_16) == 0)
      break;
    }
   }
   if (VAR_22 == FUNC_2(VAR_29->month))
    return (((void*)0));

   VAR_14->tm_mon = VAR_22;
   VAR_12 += VAR_23;
   VAR_24 |= VAR_2;

   break;

  case 'm':
   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_23 = 2;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++) {
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }
   if (VAR_22 < 1 || VAR_22 > 12)
    return (((void*)0));

   VAR_14->tm_mon = VAR_22 - 1;
   VAR_24 |= VAR_2;

   break;

  case 's':
   {
   char *VAR_31;
   int VAR_32;
   long VAR_33;
   time_t VAR_34;

   VAR_32 = VAR_10;
   VAR_10 = 0;
   VAR_33 = FUNC_14(VAR_12, &VAR_31, 10, VAR_16);
   if (VAR_10 == VAR_0 || (long)(VAR_34 = VAR_33) != VAR_33) {
    VAR_10 = VAR_32;
    return (((void*)0));
   }
   VAR_10 = VAR_32;
   VAR_12 = VAR_31;
   if (FUNC_4(&VAR_34, VAR_14) == ((void*)0))
    return (((void*)0));
   *VAR_15 = 1;
   VAR_24 |= VAR_5 | VAR_4 | VAR_2 |
       VAR_1 | VAR_6;
   }
   break;

  case 'Y':
  case 'y':
   if (*VAR_12 == 0 ||
       FUNC_8((unsigned char)*VAR_12, VAR_16))
    break;

   if (!FUNC_6((unsigned char)*VAR_12, VAR_16))
    return (((void*)0));

   VAR_23 = (VAR_17 == 'Y') ? 4 : 2;
   for (VAR_22 = 0; VAR_23 && *VAR_12 != 0 &&
        FUNC_6((unsigned char)*VAR_12, VAR_16); VAR_12++) {
    VAR_22 *= 10;
    VAR_22 += *VAR_12 - '0';
    VAR_23--;
   }
   if (VAR_17 == 'Y')
    VAR_27 = VAR_22 / 100;
   VAR_28 = VAR_22 % 100;

   VAR_24 |= VAR_6;

   break;

  case 'Z':
   {
   const char *VAR_35;
   char *VAR_36;

   for (VAR_35 = VAR_12; *VAR_35 &&
        FUNC_9((unsigned char)*VAR_35, VAR_16); ++VAR_35) {
             }
   if (VAR_35 - VAR_12) {
    VAR_36 = FUNC_1(VAR_35 - VAR_12 + 1);
    FUNC_13(VAR_36, VAR_12, VAR_35 - VAR_12);
    VAR_36[VAR_35 - VAR_12] = '\0';
    FUNC_15();
    if (0 == FUNC_10(VAR_36, "GMT") ||
        0 == FUNC_10(VAR_36, "UTC")) {
        *VAR_15 = 1;
    } else if (0 == FUNC_10(VAR_36, VAR_11[0])) {
        VAR_14->tm_isdst = 0;
    } else if (0 == FUNC_10(VAR_36, VAR_11[1])) {
        VAR_14->tm_isdst = 1;
    } else {
        return (((void*)0));
    }
    VAR_12 += VAR_35 - VAR_12;
   }
   }
   break;

  case 'z':
   {
   int VAR_37 = 1;

   if (*VAR_12 != '+') {
    if (*VAR_12 == '-')
     VAR_37 = -1;
    else
     return (((void*)0));
   }

   VAR_12++;
   VAR_22 = 0;
   for (VAR_23 = 4; VAR_23 > 0; VAR_23--) {
    if (FUNC_6((unsigned char)*VAR_12, VAR_16)) {
     VAR_22 *= 10;
     VAR_22 += *VAR_12 - '0';
     VAR_12++;
    } else if (VAR_23 == 2) {
     VAR_22 *= 100;
     break;
    } else
     return (((void*)0));
   }

   if (VAR_22 > 1400 || (VAR_37 == -1 && VAR_22 > 1200) ||
       (VAR_22 % 100) >= 60)
    return (((void*)0));
   VAR_14->tm_hour -= VAR_37 * (VAR_22 / 100);
   VAR_14->tm_min -= VAR_37 * (VAR_22 % 100);
   *VAR_15 = 1;
   }
   break;

  case 'n':
  case 't':
   while (FUNC_8((unsigned char)*VAR_12, VAR_16))
    VAR_12++;
   break;

  default:
   return (((void*)0));
  }
 }

 if (VAR_27 != -1 || VAR_28 != -1) {
  if (VAR_28 == -1)
   VAR_28 = 0;
  if (VAR_27 == -1) {
   if (VAR_28 < 69)
    VAR_28 += 100;
  } else
   VAR_28 += VAR_27 * 100 - VAR_9;
  VAR_14->tm_year = VAR_28;
 }

 if (!(VAR_24 & VAR_5) && (VAR_24 & VAR_6)) {
  if ((VAR_24 & (VAR_2 | VAR_1)) ==
      (VAR_2 | VAR_1)) {
   VAR_14->tm_yday = VAR_30[FUNC_7(VAR_14->tm_year +
       VAR_9)][VAR_14->tm_mon] + (VAR_14->tm_mday - 1);
   VAR_24 |= VAR_5;
  } else if (VAR_19 != -1) {
   int VAR_38, VAR_39, VAR_40;

   VAR_40 = FUNC_3(VAR_14->tm_year + VAR_9);

   if (VAR_21 == 0 && VAR_40 == VAR_19)
    return (((void*)0));




   VAR_38 = (VAR_24 & VAR_4) ? VAR_14->tm_wday :
       VAR_19;
   VAR_39 = (7 - VAR_40 + VAR_19) % 7 +
       (VAR_21 - 1) * 7 +
       (VAR_38 - VAR_19 + 7) % 7;

   if (VAR_39 < 0) {
    if (VAR_24 & VAR_4)
     return (((void*)0));
    VAR_39 = 0;
   }
   VAR_14->tm_yday = VAR_39;
   VAR_24 |= VAR_5;
  }
 }

 if ((VAR_24 & (VAR_6 | VAR_5)) == (VAR_6 | VAR_5)) {
  if (!(VAR_24 & VAR_2)) {
   VAR_22 = 0;
   while (VAR_14->tm_yday >=
       VAR_30[FUNC_7(VAR_14->tm_year +
       VAR_9)][VAR_22])
    VAR_22++;
   if (VAR_22 > 12) {
    VAR_22 = 1;
    VAR_14->tm_yday -=
        VAR_30[FUNC_7(VAR_14->tm_year +
        VAR_9)][12];
    VAR_14->tm_year++;
   }
   VAR_14->tm_mon = VAR_22 - 1;
   VAR_24 |= VAR_2;
  }
  if (!(VAR_24 & VAR_1)) {
   VAR_14->tm_mday = VAR_14->tm_yday -
       VAR_30[FUNC_7(VAR_14->tm_year + VAR_9)]
       [VAR_14->tm_mon] + 1;
   VAR_24 |= VAR_1;
  }
  if (!(VAR_24 & VAR_4)) {
   VAR_22 = 0;
   VAR_20 = FUNC_3(VAR_14->tm_year);
   while (VAR_22++ <= VAR_14->tm_yday) {
    if (VAR_20++ >= 6)
     VAR_20 = 0;
   }
   VAR_14->tm_wday = VAR_20;
   VAR_24 |= VAR_4;
  }
 }

 return ((char *)VAR_12);
}
