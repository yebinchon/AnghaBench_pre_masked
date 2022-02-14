
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static bool FUNC_1(int VAR_0)
{
 if (VAR_0 != -1 && VAR_0 < 0) {
  FUNC_0("Invalid vcpu:%d.\n", VAR_0);
  return 0;
 }

 return 1;
}
