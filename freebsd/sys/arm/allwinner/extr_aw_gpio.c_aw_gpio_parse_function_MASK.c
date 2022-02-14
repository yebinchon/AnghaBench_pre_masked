
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int FUNC_0 (int ,char*,void**) ;

__attribute__((used)) static char *
FUNC_1(phandle_t VAR_0)
{
 char *VAR_1;

 if (FUNC_0(VAR_0, "function",
     (void **)&VAR_1) != -1)
  return (VAR_1);
 if (FUNC_0(VAR_0, "allwinner,function",
     (void **)&VAR_1) != -1)
  return (VAR_1);

 return (((void*)0));
}
