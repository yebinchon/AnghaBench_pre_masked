
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

int FUNC_1(const char *VAR_0)
{
 int VAR_1, VAR_2;
 VAR_1 = FUNC_0(*VAR_0++);
 if (VAR_1 < 0)
  return -1;
 VAR_2 = FUNC_0(*VAR_0++);
 if (VAR_2 < 0)
  return -1;
 return (VAR_1 << 4) | VAR_2;
}
