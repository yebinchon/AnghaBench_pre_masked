
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned char
FUNC_0(unsigned char VAR_0)
{
 static const unsigned char VAR_1[8] = {
  0,
  4,
  2,
  6,
  1,
  5,
  3,
  7,
 };
 unsigned int VAR_2;

 VAR_2 = (VAR_0 & 0x8);
 return (VAR_1[VAR_0 & 0x7] | VAR_2);
}
