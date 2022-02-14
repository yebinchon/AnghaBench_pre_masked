
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int locale ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (char const*,char*,struct tm*) ;
 int FUNC_4 (struct tm*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, time_t *VAR_2)
{
 char VAR_3[64], *VAR_4;
 struct tm VAR_5;

 FUNC_2(VAR_3, FUNC_1(VAR_0, ((void*)0)), sizeof(VAR_3));
 FUNC_1(VAR_0, "C");
 VAR_4 = FUNC_3(VAR_1, "%a, %d %b %Y %H:%M:%S GMT", &VAR_5);




 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_3(VAR_1, "%a, %d %b %Y %H:%M:%S UTC", &VAR_5);

 FUNC_1(VAR_0, VAR_3);
 if (VAR_4 == ((void*)0))
  return (-1);
 FUNC_0("last modified: [%04d-%02d-%02d %02d:%02d:%02d]\n",
     VAR_5.tm_year + 1900, VAR_5.tm_mon + 1, VAR_5.tm_mday,
     VAR_5.tm_hour, VAR_5.tm_min, VAR_5.tm_sec);
 *VAR_2 = FUNC_4(&VAR_5);
 return (0);
}
