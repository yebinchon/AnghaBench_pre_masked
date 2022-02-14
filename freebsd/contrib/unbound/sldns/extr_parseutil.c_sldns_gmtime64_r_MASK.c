
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; int tm_min; int tm_hour; int tm_year; scalar_t__ tm_isdst; } ;
typedef int int64_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (struct tm*) ;
 int FUNC_4 (int ,struct tm*) ;

__attribute__((used)) static struct tm *
FUNC_5(int64_t VAR_0, struct tm *VAR_1)
{
 VAR_1->tm_isdst = 0;
 VAR_1->tm_sec = (int) FUNC_1(VAR_0, 60);
 VAR_0 = FUNC_0(VAR_0, 60);
 VAR_1->tm_min = (int) FUNC_1(VAR_0, 60);
 VAR_0 = FUNC_0(VAR_0, 60);
 VAR_1->tm_hour = (int) FUNC_1(VAR_0, 24);
 VAR_0 = FUNC_0(VAR_0, 24);

 FUNC_4(VAR_0, VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 VAR_1->tm_year -= 1900;

 return VAR_1;
}
