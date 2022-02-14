
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,long long) ;

void FUNC_1(char *VAR_0, size_t VAR_1, long long VAR_2)
{
 if (VAR_2 >= 1000000000)
  FUNC_0(VAR_0, VAR_1, "%lldb", VAR_2 / 1000000000);
 else if (VAR_2 >= 1000000)
  FUNC_0(VAR_0, VAR_1, "%lldm", VAR_2 / 1000000);
 else if (VAR_2 >= 1000)
  FUNC_0(VAR_0, VAR_1, "%lldk", VAR_2 / 1000);
 else
  FUNC_0(VAR_0, VAR_1, "%lld", VAR_2);
}
