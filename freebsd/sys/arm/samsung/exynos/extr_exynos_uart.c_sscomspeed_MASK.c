
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(long VAR_0, long VAR_1)
{
 int VAR_2;

 if (VAR_0 <= 0 || VAR_1 <= 0)
  return (-1);
 VAR_2 = (VAR_1 / 16) / VAR_0;
 return (VAR_2-1);
}
