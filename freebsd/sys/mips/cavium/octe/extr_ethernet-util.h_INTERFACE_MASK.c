
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0)
{
 if (VAR_0 < 32)
  return VAR_0>>4;
 else if (VAR_0 < 36)
  return 2;
 else if (VAR_0 < 40)
  return 3;
 else if (VAR_0 == 40)
  return 4;
 else
  FUNC_0("Illegal ipd_port %d passed to INTERFACE\n", VAR_0);
}
