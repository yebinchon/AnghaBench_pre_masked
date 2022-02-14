
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 char* FUNC_2 () ;
 char* VAR_0 ;
 int FUNC_3 (char*,char const*,char const*) ;
 int FUNC_4 (char const) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
 const char *VAR_3;
 const char *VAR_4;

 VAR_3 = FUNC_2();

 FUNC_0(VAR_1);

 VAR_4 = (FUNC_5(VAR_3,"bsdtar") != 0) ? "(bsdtar)" : "";
 FUNC_3("%s%s: manipulate archive files\n", VAR_3, VAR_4);

 for (VAR_4 = VAR_0; *VAR_4 != '\0'; VAR_4++) {
  if (*VAR_4 == '%') {
   if (VAR_4[1] == 'p') {
    FUNC_1(VAR_3, VAR_2);
    VAR_4++;
   } else
    FUNC_4('%');
  } else
   FUNC_4(*VAR_4);
 }
 FUNC_6();
}
