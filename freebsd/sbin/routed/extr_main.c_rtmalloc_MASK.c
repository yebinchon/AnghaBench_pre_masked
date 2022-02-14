
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*,int ,char const*) ;
 void* FUNC_1 (size_t) ;

void *
FUNC_2(size_t VAR_0,
  const char *VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0))
  FUNC_0(1,"malloc(%lu) failed in %s", (u_long)VAR_0, VAR_1);
 return VAR_2;
}
