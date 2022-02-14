
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static __inline int
FUNC_0(uint8_t VAR_0)
{
 int VAR_1 = (int) VAR_0 + 8;

 VAR_1 = 2*(87 - VAR_1);
 return (VAR_1 < 0 ? 0 : VAR_1 > 127 ? 127 : VAR_1);
}
