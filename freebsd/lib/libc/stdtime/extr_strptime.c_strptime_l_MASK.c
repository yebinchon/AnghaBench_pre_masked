
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int locale_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char const*,struct tm*,int*,int ) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (struct tm*) ;

char *
FUNC_4(const char * __restrict VAR_0, const char * __restrict VAR_1,
    struct tm * __restrict VAR_2, locale_t VAR_3)
{
 char *VAR_4;
 int VAR_5;
 FUNC_0(VAR_3);

 VAR_5 = 0;
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_3);
 if (VAR_4 && VAR_5) {
  time_t VAR_6 = FUNC_3(VAR_2);

  FUNC_2(&VAR_6, VAR_2);
 }

 return (VAR_4);
}
