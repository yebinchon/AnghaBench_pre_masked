
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
 if (VAR_0 == 0) {
  return (0);
 }
 if (VAR_0 <= 32 || VAR_0 == '-' || VAR_0 == '_' || VAR_0 == '.'
  || VAR_0 == '/' || VAR_0 == '+' || VAR_0 == ':')
 {
  return (1);
 }
 return (0);
}
