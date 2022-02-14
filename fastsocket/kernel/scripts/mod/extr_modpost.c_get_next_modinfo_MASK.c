
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char*,unsigned long*) ;
 unsigned int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,unsigned int) ;

__attribute__((used)) static char *FUNC_3(void *VAR_0, unsigned long VAR_1,
         const char *VAR_2, char *VAR_3)
{
 char *VAR_4;
 unsigned int VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6 = VAR_1;

 if (VAR_3) {
  VAR_6 -= VAR_3 - (char *)VAR_0;
  VAR_0 = FUNC_0(VAR_3, &VAR_6);
 }

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = FUNC_0(VAR_4, &VAR_6)) {
  if (FUNC_2(VAR_4, VAR_2, VAR_5) == 0 && VAR_4[VAR_5] == '=')
   return VAR_4 + VAR_5 + 1;
 }
 return ((void*)0);
}
