
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char,int ) ;
 int VAR_2 ;

void FUNC_4(void)
{
 char *VAR_3, *VAR_4;
 int VAR_5;
 static int VAR_6 = 0;
 extern char VAR_7[], *VAR_8;

 if (VAR_1 == 2 || VAR_1 == 0 || VAR_6++ > 0 || VAR_7 == VAR_8)
  return;
 if (VAR_7 == VAR_8)
  return;
 VAR_3 = VAR_8 - 1;
 if (VAR_3 > VAR_7 && *VAR_3 == '\n')
  VAR_3--;
 for ( ; VAR_3 > VAR_7 && *VAR_3 != '\n' && *VAR_3 != '\0'; VAR_3--)
  ;
 while (*VAR_3 == '\n')
  VAR_3++;
 FUNC_1(VAR_2, " context is\n\t");
 for (VAR_4=VAR_8-1; VAR_4>=VAR_3 && *VAR_4!=' ' && *VAR_4!='\t' && *VAR_4!='\n'; VAR_4--)
  ;
 for ( ; VAR_3 < VAR_4; VAR_3++)
  if (*VAR_3)
   FUNC_3(*VAR_3, VAR_2);
 FUNC_1(VAR_2, " >>> ");
 for ( ; VAR_3 < VAR_8; VAR_3++)
  if (*VAR_3)
   FUNC_3(*VAR_3, VAR_2);
 FUNC_1(VAR_2, " <<< ");
 if (*VAR_8)
  while ((VAR_5 = FUNC_2()) != '\n' && VAR_5 != '\0' && VAR_5 != VAR_0) {
   FUNC_3(VAR_5, VAR_2);
   FUNC_0(VAR_5);
  }
 FUNC_3('\n', VAR_2);
 VAR_8 = VAR_7;
}
