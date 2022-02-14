
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5 = FUNC_1(VAR_1);
 char *VAR_6 = FUNC_2(VAR_5, ",");
 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_6; VAR_4++) {
  VAR_3 = FUNC_3(VAR_6, ((void*)0), 0);
  if (VAR_3 > 0 && VAR_3 < VAR_0)
   VAR_2[VAR_3] = 1;

  VAR_6 = FUNC_2(((void*)0), ",");
 }
 FUNC_0(VAR_5);
 return 0;
}
