
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char**) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static char *FUNC_3(void)
{
 char *VAR_2;

 if (FUNC_2(VAR_0, "name") < 0)
  return ((void*)0);

 if (FUNC_2(VAR_1, ":") < 0)
  return ((void*)0);

 if (FUNC_1(VAR_0, &VAR_2) < 0)
  goto fail;

 return VAR_2;

 fail:
 FUNC_0(VAR_2);
 return ((void*)0);
}
