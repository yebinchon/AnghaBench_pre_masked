
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(unsigned char VAR_0)
{
 if (FUNC_0(VAR_0))
  return 1;
 switch (VAR_0) {
 case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
 case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
  return 1;
 default:
  return 0;
 }
}
