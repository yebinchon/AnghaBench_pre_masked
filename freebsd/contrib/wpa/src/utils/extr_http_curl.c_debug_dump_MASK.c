
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (int ,char const*,char const*,size_t) ;
 int FUNC_4 (int ,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_5(struct http_ctx *VAR_1, const char *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_3[VAR_6] < 32 && VAR_3[VAR_6] != '\t' && VAR_3[VAR_6] != '\n' &&
      VAR_3[VAR_6] != '\r') {
   FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4);
   return;
  }
 }

 VAR_5 = FUNC_1(VAR_4 + 1);
 if (VAR_5 == ((void*)0))
  return;
 FUNC_2(VAR_5, VAR_3, VAR_4);
 VAR_5[VAR_4] = '\0';
 while (VAR_4 > 0) {
  VAR_4--;
  if (VAR_5[VAR_4] == '\n' || VAR_5[VAR_4] == '\r')
   VAR_5[VAR_4] = '\0';
  else
   break;
 }
 FUNC_4(VAR_0, "%s[%s]", VAR_2, VAR_5);
 FUNC_0(VAR_5);
}
