
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ces_status_flags ;
typedef int buf ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,char*,char,int,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3(ces_status_flags VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 char VAR_3, VAR_4, *VAR_5;
 static char VAR_6[128];

 VAR_5 = VAR_6;
 (void) FUNC_0(VAR_6, 0, sizeof(VAR_6));

 for (VAR_4 = '<'; (VAR_3 = *VAR_1++) != 0; VAR_1 = VAR_2) {
  for (VAR_2 = VAR_1; *VAR_2 >= ' ';)
   VAR_2++;
  if (((int)VAR_0 & (1 << (VAR_3 - 1))) == 0)
   continue;
  (void) FUNC_1(VAR_5, sizeof(VAR_6) - (size_t)(VAR_5 - &VAR_6[0]),
   "%c%.*s", VAR_4, (int)(long)(VAR_2 - VAR_1), VAR_1);
  VAR_5 += FUNC_2(VAR_5);
  VAR_4 = ',';
 }
 if (VAR_4 != '<')
  *VAR_5 = '>';

 return (VAR_6);
}
