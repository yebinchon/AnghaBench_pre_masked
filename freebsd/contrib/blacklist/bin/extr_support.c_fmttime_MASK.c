
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
typedef int intmax_t ;


 int * FUNC_0 (scalar_t__*,struct tm*) ;
 int FUNC_1 (char*,size_t,char*,int ) ;
 int FUNC_2 (char*,size_t,char*,struct tm*) ;

const char *
FUNC_3(char *VAR_0, size_t VAR_1, time_t VAR_2)
{
 struct tm VAR_3;
 if (FUNC_0(&VAR_2, &VAR_3) == ((void*)0))
  FUNC_1(VAR_0, VAR_1, "*%jd*", (intmax_t)VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, "%Y/%m/%d %H:%M:%S", &VAR_3);
 return VAR_0;
}
