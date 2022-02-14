
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(char **VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  if (FUNC_1(VAR_0[VAR_4], VAR_1, VAR_2) == 0) {
   if (VAR_3 != VAR_4) {
    VAR_0[VAR_3] = VAR_0[VAR_4];
    VAR_0[VAR_4] = ((void*)0);
   }
   VAR_3++;
  } else {
   FUNC_0(VAR_0[VAR_4]);
   VAR_0[VAR_4] = ((void*)0);
  }
 }
 VAR_0[VAR_3] = ((void*)0);
 return VAR_3;
}
