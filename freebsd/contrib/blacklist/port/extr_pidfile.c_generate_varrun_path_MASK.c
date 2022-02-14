
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,char const*) ;
 char* FUNC_1 () ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_1)
{
 char *VAR_2;

 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_1();


 if (FUNC_0(&VAR_2, "%d%s.pid", VAR_0, VAR_1) == -1)
  return ((void*)0);
 return VAR_2;
}
