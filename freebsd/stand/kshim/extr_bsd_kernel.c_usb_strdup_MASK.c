
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 VAR_3 = 1 + FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_3,VAR_0,VAR_0);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 FUNC_1(VAR_2, VAR_1, VAR_3);
 return (VAR_2);
}
