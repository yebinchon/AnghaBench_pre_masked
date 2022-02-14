
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static char *
FUNC_1(int VAR_0)
{
 size_t VAR_1 = 0;
 static char VAR_2[512];





 while (VAR_1 < (sizeof VAR_2 - 3) && FUNC_0(VAR_0, VAR_2+VAR_1, 1)==1) {
  if (VAR_2[VAR_1] == '\n') {

   VAR_2[VAR_1++] = '\r';
   VAR_2[VAR_1++] = '\n';
   VAR_2[VAR_1] = '\0';
   return VAR_2;
  }
  ++VAR_1;
 }
 VAR_2[VAR_1] = '\0';
 return VAR_1 ? VAR_2 : 0;
}
