
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (struct tm*) ;
 char* FUNC_2 (char const*,char const*,struct tm*) ;

__attribute__((used)) static int
FUNC_3(time_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
 struct tm VAR_3;
 char *VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(struct tm));

 VAR_4 = ((void*)0);



 if (((void*)0) != VAR_4 && '\0' == *VAR_4) {
  *VAR_0 = FUNC_1(&VAR_3);
  return 1;
 }

 return 0;
}
