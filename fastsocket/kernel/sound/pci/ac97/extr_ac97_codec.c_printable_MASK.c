
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned int VAR_0)
{
 VAR_0 &= 0xff;
 if (VAR_0 < ' ' || VAR_0 >= 0x71) {
  if (VAR_0 <= 0x89)
   return VAR_0 - 0x71 + 'A';
  return '?';
 }
 return VAR_0;
}
