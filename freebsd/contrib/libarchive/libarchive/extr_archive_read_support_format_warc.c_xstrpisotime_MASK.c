
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef int time_t ;
struct tm {int tm_year; void* tm_mon; void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct tm*,int ,int) ;
 void* FUNC_2 (char const*,char const**,int,int) ;
 int FUNC_3 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_4(const char *VAR_0, char **VAR_1)
{

 struct tm VAR_2;
 time_t VAR_3 = (time_t)-1;


 FUNC_1(&VAR_2, 0, sizeof(VAR_2));



 while (*VAR_0 == ' ' || *VAR_0 == '\t')
  ++VAR_0;


 if ((VAR_2.tm_year = FUNC_2(VAR_0, &VAR_0, 1583, 4095)) < 0 || *VAR_0++ != '-') {
  goto out;
 }

 if ((VAR_2.tm_mon = FUNC_2(VAR_0, &VAR_0, 1, 12)) < 0 || *VAR_0++ != '-') {
  goto out;
 }

 if ((VAR_2.tm_mday = FUNC_2(VAR_0, &VAR_0, 1, 31)) < 0 || *VAR_0++ != 'T') {
  goto out;
 }

 if ((VAR_2.tm_hour = FUNC_2(VAR_0, &VAR_0, 0, 23)) < 0 || *VAR_0++ != ':') {
  goto out;
 }

 if ((VAR_2.tm_min = FUNC_2(VAR_0, &VAR_0, 0, 59)) < 0 || *VAR_0++ != ':') {
  goto out;
 }

 if ((VAR_2.tm_sec = FUNC_2(VAR_0, &VAR_0, 0, 60)) < 0 || *VAR_0++ != 'Z') {
  goto out;
 }


 VAR_2.tm_year -= 1900;
 VAR_2.tm_mon--;


 VAR_3 = FUNC_3(&VAR_2);

out:
 if (VAR_1 != ((void*)0)) {
  *VAR_1 = FUNC_0(VAR_0);
 }
 return VAR_3;
}
