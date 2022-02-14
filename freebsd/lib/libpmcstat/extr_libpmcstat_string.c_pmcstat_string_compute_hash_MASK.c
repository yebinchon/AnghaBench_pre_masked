
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

int
FUNC_0(const char *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 2166136261; *VAR_1; VAR_1++)
  VAR_2 = (VAR_2 ^ *VAR_1) * 16777619;

 return (VAR_2 & VAR_0);
}
