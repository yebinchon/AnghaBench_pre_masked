
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 scalar_t__ FUNC_0 (int ,char*,int *,int) ;

phandle_t
FUNC_1(phandle_t VAR_0)
{
 phandle_t VAR_1;

 if (FUNC_0(VAR_0, "remote-endpoint", &VAR_1,
       sizeof(phandle_t)) <= 0)
  return (0);

 return (VAR_1);
}
