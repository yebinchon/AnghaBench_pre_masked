
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_0)
{
 size_t VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_3(VAR_0) + 1;
 if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
  FUNC_0();
 return FUNC_2(VAR_2, VAR_0, VAR_1);
}
