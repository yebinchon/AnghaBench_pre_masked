
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static const char *
FUNC_2(int VAR_0)
{
 static char VAR_1[40];
 char *VAR_2;


 if ((VAR_2 = FUNC_1(VAR_0)) != ((void*)0))
  return VAR_2;
 (void)FUNC_0(VAR_1, sizeof(VAR_1), "Unknown signal: %d", VAR_0);
 return (VAR_1);
}
