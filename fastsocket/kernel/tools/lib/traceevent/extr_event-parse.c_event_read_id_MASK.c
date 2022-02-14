
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char**) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 char *VAR_2;
 int VAR_3;

 if (FUNC_3(VAR_0, "ID") < 0)
  return -1;

 if (FUNC_2(VAR_1, ":") < 0)
  return -1;

 if (FUNC_1(VAR_0, &VAR_2) < 0)
  goto fail;

 VAR_3 = FUNC_4(VAR_2, ((void*)0), 0);
 FUNC_0(VAR_2);
 return VAR_3;

 fail:
 FUNC_0(VAR_2);
 return -1;
}
