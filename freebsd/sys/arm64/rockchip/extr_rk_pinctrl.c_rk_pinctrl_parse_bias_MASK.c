
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(phandle_t VAR_0)
{
 if (FUNC_0(VAR_0, "bias-disable"))
  return (0);
 if (FUNC_0(VAR_0, "bias-pull-up"))
  return (1);
 if (FUNC_0(VAR_0, "bias-pull-down"))
  return (2);

 return (-1);
}
