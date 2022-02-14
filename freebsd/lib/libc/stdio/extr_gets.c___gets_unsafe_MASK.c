
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int) ;
 int VAR_2 ;

char *
FUNC_5(char *VAR_3)
{
 int VAR_4;
 char *VAR_5, *VAR_6;
 static int VAR_7;
 static const char VAR_8[] =
     "warning: this program uses gets(), which is unsafe.\n";

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, -1);
 if (!VAR_7) {
  (void) FUNC_4(VAR_1, VAR_8, sizeof(VAR_8) - 1);
  VAR_7 = 1;
 }
 for (VAR_5 = VAR_3; (VAR_4 = FUNC_3(VAR_2)) != '\n'; ) {
  if (VAR_4 == VAR_0) {
   if (VAR_5 == VAR_3) {
    VAR_6 = ((void*)0);
    goto end;
   } else
    break;
  } else
   *VAR_5++ = VAR_4;
 }
 *VAR_5 = 0;
 VAR_6 = VAR_3;
end:
 FUNC_1();
 return (VAR_6);
}
