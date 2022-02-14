
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; int tm_mon; int tm_mday; int tm_hour; int tm_yday; int tm_min; int tm_sec; int tm_year; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const**,int*,int,int) ;
 char* FUNC_2 (int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_3 (unsigned char const) ;
 int * VAR_9 ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned char const*,size_t) ;
 int VAR_10 ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_11, const char *VAR_12, struct tm *VAR_13, int VAR_14)
{
 unsigned char VAR_15;
 const unsigned char *VAR_16;
 size_t VAR_17;
 int VAR_18, VAR_19;
 static int VAR_20, VAR_21;

 if (VAR_14) {
  VAR_20 = VAR_0;
  VAR_21 = -1;
 }

 VAR_16 = (unsigned char *)VAR_11;
 while ((VAR_15 = *VAR_12) != '\0') {

  VAR_18 = 0;


  if (FUNC_3(VAR_15)) {
   while (FUNC_3(*VAR_16))
    VAR_16++;

   VAR_12++;
   continue;
  }

  if ((VAR_15 = *VAR_12++) != '%')
   goto literal;


again: switch (VAR_15 = *VAR_12++) {
  case '%':
literal:
  if (VAR_15 != *VAR_16++)
   return (((void*)0));

  break;





  case 'E':
   FUNC_0(0);
   VAR_18 |= VAR_1;
   goto again;

  case 'O':
   FUNC_0(0);
   VAR_18 |= VAR_2;
   goto again;
  case 'D':
   FUNC_0(0);
   if (!(VAR_16 = FUNC_6(VAR_16, "%m/%d/%y", VAR_13, 0)))
    return (((void*)0));
   break;

  case 'R':
   FUNC_0(0);
   if (!(VAR_16 = FUNC_6(VAR_16, "%H:%M", VAR_13, 0)))
    return (((void*)0));
   break;

  case 'r':
   FUNC_0(0);
   if (!(VAR_16 = FUNC_6(VAR_16, "%I:%M:%S %p", VAR_13, 0)))
    return (((void*)0));
   break;

  case 'T':
   FUNC_0(0);
   if (!(VAR_16 = FUNC_6(VAR_16, "%H:%M:%S", VAR_13, 0)))
    return (((void*)0));
   break;
  case 'C':
   FUNC_0(VAR_1);
   if (!(FUNC_1(&VAR_16, &VAR_19, 0, 99)))
    return (((void*)0));

   VAR_20 = VAR_19 * 100;
   break;

  case 'd':
  case 'e':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_mday, 1, 31)))
    return (((void*)0));
   break;

  case 'k':
   FUNC_0(0);

  case 'H':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_hour, 0, 23)))
    return (((void*)0));
   break;

  case 'l':
   FUNC_0(0);

  case 'I':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_hour, 1, 12)))
    return (((void*)0));
   break;

  case 'j':
   FUNC_0(0);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_yday, 1, 366)))
    return (((void*)0));
   VAR_13->tm_yday--;
   break;

  case 'M':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_min, 0, 59)))
    return (((void*)0));
   break;

  case 'm':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_mon, 1, 12)))
    return (((void*)0));
   VAR_13->tm_mon--;
   break;
  case 'S':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_sec, 0, 61)))
    return (((void*)0));
   break;

  case 'U':
  case 'W':
   FUNC_0(VAR_2);






    if (!(FUNC_1(&VAR_16, &VAR_19, 0, 53)))
    return (((void*)0));
    break;

  case 'w':
   FUNC_0(VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_13->tm_wday, 0, 6)))
    return (((void*)0));
   break;

  case 'Y':
   FUNC_0(VAR_1);
   if (!(FUNC_1(&VAR_16, &VAR_19, 0, 9999)))
    return (((void*)0));

   VAR_21 = -1;
   VAR_13->tm_year = VAR_19 - VAR_0;
   break;

  case 'y':
   FUNC_0(VAR_1 | VAR_2);
   if (!(FUNC_1(&VAR_16, &VAR_21, 0, 99)))
    return (((void*)0));
   break;




  case 'n':
  case 't':
   FUNC_0(0);
   while (FUNC_3(*VAR_16))
    VAR_16++;
   break;


  default:
   return (((void*)0));
  }


 }





 if (VAR_21 != -1) {
  if (VAR_20 == VAR_0) {
   if (VAR_21 <= 68)
    VAR_13->tm_year = VAR_21 + 2000 - VAR_0;
   else
    VAR_13->tm_year = VAR_21 + 1900 - VAR_0;
  } else {
   VAR_13->tm_year = VAR_21 + VAR_20 - VAR_0;
  }
 }

 return ((char *)VAR_16);
}
