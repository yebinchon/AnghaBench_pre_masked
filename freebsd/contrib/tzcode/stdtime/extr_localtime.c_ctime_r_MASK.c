
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int const* const,struct tm*) ;

char *
FUNC_2(const time_t *const VAR_0, char *VAR_1)
{
 struct tm VAR_2;

 return FUNC_0(FUNC_1(VAR_0, &VAR_2), VAR_1);
}
