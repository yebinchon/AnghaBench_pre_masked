
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,int*,int) ;

__attribute__((used)) static time_t
FUNC_1(
 struct tm * VAR_1
 )
{
 register time_t VAR_2;
 int VAR_3;

 if (VAR_1->tm_isdst > 1)
  VAR_1->tm_isdst = 1;
 VAR_2 = FUNC_0(VAR_1, &VAR_3, 1);
 if (VAR_3 || VAR_1->tm_isdst < 0)
  return VAR_2;

 return VAR_0;
}
