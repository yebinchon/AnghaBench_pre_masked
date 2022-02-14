
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; int tm_mon; int tm_year; int tm_mday; int tm_hour; int tm_yday; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const**,int ) ;
 int FUNC_2 (char const**,int) ;

char *
FUNC_3(const char *VAR_6, const char *VAR_7, struct tm *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11 = 0;

 while ((VAR_9 = *VAR_7) != '\0') {

  if (FUNC_0((unsigned char)VAR_9)) {



   while (FUNC_0((unsigned char)*VAR_6))
    VAR_6++;
  }
  else if (VAR_9 == '%') {
   VAR_7++;
   VAR_9 = *VAR_7;
   switch (VAR_9) {
    case '%':
     if (*VAR_6 != VAR_9) {
      return ((void*)0);
     }
     VAR_6++;
     break;
    case 'a':
    case 'A':
     VAR_10 = FUNC_1(&VAR_6, VAR_5);
     if (VAR_10 < 0)
      VAR_10 = FUNC_1(&VAR_6, VAR_2);
     if (VAR_10 < 0) {
      return ((void*)0);
     }
     VAR_8->tm_wday = VAR_10;
     break;
    case 'b':
    case 'B':
    case 'h':
     VAR_10 = FUNC_1(&VAR_6, VAR_4);
     if (VAR_10 < 0)
      VAR_10 = FUNC_1(&VAR_6, VAR_1);
     if (VAR_10 < 0) {
      return ((void*)0);
     }
     VAR_8->tm_mon = VAR_10;
     break;
    case 'c':
     if (!(VAR_6 = FUNC_3(VAR_6, "%x %X", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'C':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 0 || VAR_10 > 99) {
      return ((void*)0);
     }

     if (VAR_11) {
      VAR_8->tm_year = VAR_10*100 + (VAR_8->tm_year%100);
     }
     else {
      VAR_8->tm_year = VAR_10*100 - VAR_0;
      VAR_11 = 1;
     }
     break;
    case 'd':
    case 'e':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 1 || VAR_10 > 31) {
      return ((void*)0);
     }
     VAR_8->tm_mday = VAR_10;
     break;
    case 'D':
     if (!(VAR_6 = FUNC_3(VAR_6, "%m/%d/%y", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'H':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 0 || VAR_10 > 23) {
      return ((void*)0);
     }
     VAR_8->tm_hour = VAR_10;
     break;
    case 'I':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 1 || VAR_10 > 12) {
      return ((void*)0);
     }
     if (VAR_10 == 12)
      VAR_10 = 0;
     VAR_8->tm_hour = VAR_10;
     break;
    case 'j':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 1 || VAR_10 > 366) {
      return ((void*)0);
     }
     VAR_8->tm_yday = VAR_10;
     break;
    case 'm':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 1 || VAR_10 > 12) {
      return ((void*)0);
     }

     VAR_8->tm_mon = (VAR_10-1);
     break;
    case 'M':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 0 || VAR_10 > 59) {
      return ((void*)0);
     }
     VAR_8->tm_min = VAR_10;
     break;
    case 'n':
    case 't':
     while (FUNC_0((unsigned char)*VAR_6))
      VAR_6++;
     break;
    case 'p':
     VAR_10 = FUNC_1(&VAR_6, VAR_3);
     if (VAR_10 < 0) {
      return ((void*)0);
     }
     if (VAR_8->tm_hour < 0 || VAR_8->tm_hour > 11) {
      return ((void*)0);
     }

     if (VAR_10 == 1)
      VAR_8->tm_hour += 12;
     break;
    case 'r':
     if (!(VAR_6 = FUNC_3(VAR_6, "%I:%M:%S %p", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'R':
     if (!(VAR_6 = FUNC_3(VAR_6, "%H:%M", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'S':
     VAR_10 = FUNC_2(&VAR_6, 2);


     if (VAR_10 < 0 || VAR_10 > 60) {
      return ((void*)0);
     }
     VAR_8->tm_sec = VAR_10;
     break;
    case 'T':
     if (!(VAR_6 = FUNC_3(VAR_6, "%H:%M:%S", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'U':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 0 || VAR_10 > 53) {
      return ((void*)0);
     }



     break;
    case 'w':
     VAR_10 = FUNC_2(&VAR_6, 1);
     if (VAR_10 < 0 || VAR_10 > 6) {
      return ((void*)0);
     }
     VAR_8->tm_wday = VAR_10;
     break;
    case 'W':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 0 || VAR_10 > 53) {
      return ((void*)0);
     }



     break;
    case 'x':
     if (!(VAR_6 = FUNC_3(VAR_6, "%m/%d/%y", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'X':
     if (!(VAR_6 = FUNC_3(VAR_6, "%H:%M:%S", VAR_8))) {
      return ((void*)0);
     }
     break;
    case 'y':
     VAR_10 = FUNC_2(&VAR_6, 2);
     if (VAR_10 < 0 || VAR_10 > 99) {
      return ((void*)0);
     }
     if (VAR_11) {
      VAR_8->tm_year = ((VAR_8->tm_year/100) * 100) + VAR_10;
     }
     else {
      VAR_11 = 1;





      if (VAR_10 < 69)
       VAR_10 += 100;
      VAR_8->tm_year = VAR_10;
     }
     break;
    case 'Y':
     VAR_10 = FUNC_2(&VAR_6, 4);
     if (VAR_10 < 0 || VAR_10 > 9999) {
      return ((void*)0);
     }
     VAR_8->tm_year = VAR_10 - VAR_0;
     break;
    case '\0':
    default:
     return ((void*)0);
     break;
   }
  }
  else {

   if (*VAR_6 != VAR_9)
    return ((void*)0);
   VAR_6++;
  }

  VAR_7++;
 }


 return (char*) VAR_6;
}
