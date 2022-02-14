
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct wpabuf {int dummy; } ;
struct tm {int tm_wday; int tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wpabuf*,char*,char const*,int ,char const*,scalar_t__,int ,int ,int ) ;

void FUNC_3(struct wpabuf *VAR_0)
{
 const char *VAR_1 = "Sun\0Mon\0Tue\0Wed\0Thu\0Fri\0Sat";
 const char *VAR_2 = "Jan\0Feb\0Mar\0Apr\0May\0Jun\0"
  "Jul\0Aug\0Sep\0Oct\0Nov\0Dec";
 struct tm *VAR_3;
 time_t VAR_4;

 VAR_4 = FUNC_1(((void*)0));
 VAR_3 = FUNC_0(&VAR_4);
 if (VAR_3 == ((void*)0))
  return;
 FUNC_2(VAR_0, "%s, %02d %s %d %02d:%02d:%02d GMT",
        &VAR_1[VAR_3->tm_wday * 4], VAR_3->tm_mday,
        &VAR_2[VAR_3->tm_mon * 4], VAR_3->tm_year + 1900,
        VAR_3->tm_hour, VAR_3->tm_min, VAR_3->tm_sec);
}
