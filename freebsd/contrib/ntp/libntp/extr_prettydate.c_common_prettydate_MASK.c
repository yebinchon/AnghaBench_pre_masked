
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vint64 ;
typedef int u_long ;
typedef scalar_t__ u_int32 ;
typedef unsigned int u_int ;
struct tm {size_t tm_wday; size_t tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;
struct calendar {size_t weekday; int month; int second; int minute; int hour; scalar_t__ year; int monthday; } ;
struct TYPE_3__ {scalar_t__ l_ui; scalar_t__ l_uf; } ;
typedef TYPE_1__ l_fp ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * VAR_1 ;
 struct tm* FUNC_1 (int *,int) ;
 int * VAR_2 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct calendar*,int *) ;
 int FUNC_4 (char*,int ,char const*,int ,int ,int ,int ,int ,scalar_t__,int ,int ,int ,unsigned int) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static char *
FUNC_6(
 l_fp *VAR_3,
 int VAR_4
 )
{
 static const char VAR_5[] =
     "%08lx.%08lx  %s, %s %2d %4d %2d:%02d:%02d.%03u";
 static const char VAR_6[] =
     "%08lx.%08lx [%s, %s %2d %4d %2d:%02d:%02d.%03u UTC]";

 char *VAR_7;
 struct tm *VAR_8;
 u_int VAR_9;
 u_int32 VAR_10;
 vint64 VAR_11;

 FUNC_0(VAR_7);

 if (VAR_3->l_ui == 0 && VAR_3->l_uf == 0) {
  FUNC_5 (VAR_7, "(no time)", VAR_0);
  return (VAR_7);
 }


 VAR_10 = VAR_3->l_ui;
 VAR_9 = VAR_3->l_uf / 4294967;
 if (VAR_9 >= 1000u) {
  VAR_9 -= 1000u;
  VAR_10++;
 }
 VAR_11 = FUNC_2(VAR_10, ((void*)0));
 VAR_8 = FUNC_1(&VAR_11, VAR_4);
 if (!VAR_8) {




  struct calendar VAR_12;
  FUNC_3(&VAR_12, &VAR_11);
  FUNC_4(VAR_7, VAR_0, VAR_4 ? VAR_6 : VAR_5,
    (u_long)VAR_3->l_ui, (u_long)VAR_3->l_uf,
    VAR_1[VAR_12.weekday], VAR_2[VAR_12.month-1],
    VAR_12.monthday, VAR_12.year, VAR_12.hour,
    VAR_12.minute, VAR_12.second, VAR_9);
 } else
  FUNC_4(VAR_7, VAR_0, VAR_5,
    (u_long)VAR_3->l_ui, (u_long)VAR_3->l_uf,
    VAR_1[VAR_8->tm_wday], VAR_2[VAR_8->tm_mon],
    VAR_8->tm_mday, 1900 + VAR_8->tm_year, VAR_8->tm_hour,
    VAR_8->tm_min, VAR_8->tm_sec, VAR_9);
 return VAR_7;
}
