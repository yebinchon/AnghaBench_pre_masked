
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_short ;
typedef void* u_char ;
struct calendar {int monthday; int year; int hour; int minute; int second; void* month; scalar_t__ yearday; } ;
struct TYPE_4__ {scalar_t__ l_uf; int l_ui; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (struct calendar*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * VAR_0 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(
 char *VAR_1,
 l_fp *VAR_2
 )
{
 register char *VAR_3;
 register int VAR_4;
 struct calendar VAR_5;
 char VAR_6[4];

 VAR_5.yearday = 0;
 VAR_3 = VAR_1;
 if (!FUNC_3(FUNC_4(VAR_3))) {
  if (*VAR_3 == '-') {



   FUNC_0(VAR_2);
   return 1;
  }
  return 0;
 }

 VAR_5.monthday = (u_char) (*VAR_3++ - '0');
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.monthday = (u_char)((VAR_5.monthday << 3) + (VAR_5.monthday << 1));
  VAR_5.monthday = (u_char)(VAR_5.monthday + *VAR_3++ - '0');
 }

 if (*VAR_3++ != '-')
     return 0;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
     VAR_6[VAR_4] = *VAR_3++;
 VAR_6[3] = '\0';

 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
     if (FUNC_1(VAR_6, VAR_0[VAR_4]))
  break;
 if (VAR_4 == 12)
     return 0;
 VAR_5.month = (u_char)(VAR_4 + 1);

 if (*VAR_3++ != '-')
     return 0;

 if (!FUNC_3(FUNC_4(VAR_3)))
     return 0;
 VAR_5.year = (u_short)(*VAR_3++ - '0');
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.year = (u_short)((VAR_5.year << 3) + (VAR_5.year << 1));
  VAR_5.year = (u_short)(*VAR_3++ - '0');
 }
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.year = (u_short)((VAR_5.year << 3) + (VAR_5.year << 1));
  VAR_5.year = (u_short)(VAR_5.year + *VAR_3++ - '0');
 }
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.year = (u_short)((VAR_5.year << 3) + (VAR_5.year << 1));
  VAR_5.year = (u_short)(VAR_5.year + *VAR_3++ - '0');
 }




 if (VAR_5.year == 0) {
  FUNC_0(VAR_2);
  return 1;
 }

 if (*VAR_3++ != ' ' || !FUNC_3(FUNC_4(VAR_3)))
     return 0;
 VAR_5.hour = (u_char)(*VAR_3++ - '0');
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.hour = (u_char)((VAR_5.hour << 3) + (VAR_5.hour << 1));
  VAR_5.hour = (u_char)(VAR_5.hour + *VAR_3++ - '0');
 }

 if (*VAR_3++ != ':' || !FUNC_3(FUNC_4(VAR_3)))
     return 0;
 VAR_5.minute = (u_char)(*VAR_3++ - '0');
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.minute = (u_char)((VAR_5.minute << 3) + (VAR_5.minute << 1));
  VAR_5.minute = (u_char)(VAR_5.minute + *VAR_3++ - '0');
 }

 if (*VAR_3++ != ':' || !FUNC_3(FUNC_4(VAR_3)))
     return 0;
 VAR_5.second = (u_char)(*VAR_3++ - '0');
 if (FUNC_3(FUNC_4(VAR_3))) {
  VAR_5.second = (u_char)((VAR_5.second << 3) + (VAR_5.second << 1));
  VAR_5.second = (u_char)(VAR_5.second + *VAR_3++ - '0');
 }




 if (VAR_5.year < 72)
  VAR_5.year += 2000;
 if (VAR_5.year < 100)
  VAR_5.year += 1900;

 VAR_2->l_ui = FUNC_2(&VAR_5);
 VAR_2->l_uf = 0;
 return 1;
}
