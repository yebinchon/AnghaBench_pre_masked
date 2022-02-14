
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline bool
FUNC_0 (const unsigned char VAR_0, const unsigned char VAR_1)
{
 if (VAR_0 == '/') {
  if (VAR_1 == '*') {
   return 1;
  }
 }
 else if (VAR_0 == '#') {
  return 1;
 }
 return 0;
}
