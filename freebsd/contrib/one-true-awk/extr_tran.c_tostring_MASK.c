
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0)
{
 char *VAR_1;

 VAR_1 = (char *) FUNC_1(FUNC_3(VAR_0)+1);
 if (VAR_1 == ((void*)0))
  FUNC_0("out of space in tostring on %s", VAR_0);
 FUNC_2(VAR_1, VAR_0);
 return(VAR_1);
}
