
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,struct tm*) ;
 int FUNC_1 (char*,size_t,char*,struct tm*) ;

void
FUNC_2(uint64_t VAR_1, char *VAR_2, size_t VAR_3)
{
 time_t VAR_4 = VAR_1 > VAR_0 ? VAR_0 : VAR_1;
 struct tm VAR_5;

 FUNC_0(&VAR_4, &VAR_5);
 FUNC_1(VAR_2, VAR_3, "%Y-%m-%dT%H:%M:%S", &VAR_5);
}
