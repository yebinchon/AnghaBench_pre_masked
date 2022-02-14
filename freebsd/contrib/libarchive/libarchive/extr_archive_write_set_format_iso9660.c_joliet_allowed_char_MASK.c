
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int
FUNC_0(unsigned char VAR_0, unsigned char VAR_1)
{
 int VAR_2 = (VAR_0 << 8) | VAR_1;

 if (VAR_2 <= 0x001F)
  return (0);

 switch (VAR_2) {
 case 0x002A:
 case 0x002F:
 case 0x003A:
 case 0x003B:
 case 0x003F:
 case 0x005C:
  return (0);
 }
 return (1);
}
