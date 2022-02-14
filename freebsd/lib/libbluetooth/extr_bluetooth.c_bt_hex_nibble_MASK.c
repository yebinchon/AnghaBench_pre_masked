
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char VAR_0)
{
 if ('0' <= VAR_0 && VAR_0 <= '9')
  return (VAR_0 - '0');

 if ('a' <= VAR_0 && VAR_0 <= 'f')
  return (VAR_0 - 'a' + 0xa);

 if ('A' <= VAR_0 && VAR_0 <= 'F')
  return (VAR_0 - 'A' + 0xa);

 return (-1);
}
