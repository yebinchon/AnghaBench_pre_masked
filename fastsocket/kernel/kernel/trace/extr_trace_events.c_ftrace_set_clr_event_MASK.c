
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, int VAR_1)
{
 char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4;
 VAR_4 = FUNC_3(&VAR_0, ":");
 if (VAR_0) {
  VAR_3 = VAR_4;
  VAR_2 = VAR_0;
  VAR_4 = ((void*)0);

  if (!FUNC_2(VAR_3) || FUNC_1(VAR_3, "*") == 0)
   VAR_3 = ((void*)0);
  if (!FUNC_2(VAR_2) || FUNC_1(VAR_2, "*") == 0)
   VAR_2 = ((void*)0);
 }

 return FUNC_0(VAR_4, VAR_3, VAR_2, VAR_1);
}
