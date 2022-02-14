
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0)
{
 return (FUNC_0(VAR_0, "GPL") == 0
  || FUNC_0(VAR_0, "GPL v2") == 0
  || FUNC_0(VAR_0, "GPL and additional rights") == 0
  || FUNC_0(VAR_0, "Dual BSD/GPL") == 0
  || FUNC_0(VAR_0, "Dual MIT/GPL") == 0
  || FUNC_0(VAR_0, "Dual MPL/GPL") == 0);
}
