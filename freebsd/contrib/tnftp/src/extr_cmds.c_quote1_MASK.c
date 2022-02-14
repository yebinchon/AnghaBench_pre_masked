
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;

void
FUNC_4(const char *VAR_3, int VAR_4, char *VAR_5[])
{
 int VAR_6;
 char VAR_7[VAR_0];

 (void)FUNC_3(VAR_7, VAR_3, sizeof(VAR_7));
 for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
  (void)FUNC_2(VAR_7, VAR_5[VAR_6], sizeof(VAR_7));
  if (VAR_6 < (VAR_4 - 1))
   (void)FUNC_2(VAR_7, " ", sizeof(VAR_7));
 }
 if (FUNC_0("%s", VAR_7) == VAR_1) {
  while (FUNC_1(0) == VAR_1)
   continue;
 }
 VAR_2 = 1;
}
