
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct printf_spec {int dummy; } ;


 char* FUNC_0 (char*,int ) ;
 char* FUNC_1 (char*,char*,char*,struct printf_spec) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, char *VAR_1, u8 *VAR_2,
    struct printf_spec VAR_3, const char *VAR_4)
{
 char VAR_5[sizeof("xx:xx:xx:xx:xx:xx")];
 char *VAR_6 = VAR_5;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
  VAR_6 = FUNC_0(VAR_6, VAR_2[VAR_7]);
  if (VAR_4[0] == 'M' && VAR_7 != 5)
   *VAR_6++ = ':';
 }
 *VAR_6 = '\0';

 return FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3);
}
