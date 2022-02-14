
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(char const *VAR_0)
{
 int VAR_1, VAR_2;

 if ((VAR_1 = FUNC_0(VAR_0[0])) < 0)
  return (-1);

 if ((VAR_2 = FUNC_0(VAR_0[1])) < 0)
  return (-1);

 return ((((VAR_1 & 0x0f) << 4) | (VAR_2 & 0x0f)) & 0xff);
}
