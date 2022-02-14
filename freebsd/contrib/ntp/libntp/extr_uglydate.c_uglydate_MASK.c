
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int tm_yday; int tm_hour; int tm_min; int tm_sec; int tm_year; } ;
struct TYPE_4__ {scalar_t__ l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct tm* FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,int ,char*,char*,int,int,int,int,int,long) ;
 char* FUNC_3 (TYPE_1__*,int) ;

char *
FUNC_4(
 l_fp *VAR_2
 )
{
 char *VAR_3;
 char *VAR_4;
 struct tm *VAR_5;
 time_t VAR_6;
 long VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3(VAR_2, 6);
 FUNC_0(VAR_3);
 VAR_6 = VAR_2->l_ui - VAR_0;
 VAR_7 = VAR_2->l_uf / 4294967;
 VAR_5 = FUNC_1(&VAR_6);
 if (VAR_2->l_ui == 0) {



  VAR_8 = 0;
  VAR_5->tm_yday = 0;
  VAR_5->tm_hour = 0;
  VAR_5->tm_min = 0;
  VAR_5->tm_sec = 0;
 } else {
  VAR_8 = VAR_5->tm_year;
  while (VAR_8 >= 100)
      VAR_8 -= 100;
 }
 FUNC_2(VAR_3, VAR_1,
   "%17s %02d:%03d:%02d:%02d:%02d.%03ld", VAR_4, VAR_8,
   VAR_5->tm_yday, VAR_5->tm_hour, VAR_5->tm_min, VAR_5->tm_sec,
   VAR_7);

 return VAR_3;
}
