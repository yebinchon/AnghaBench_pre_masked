
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static unsigned long
FUNC_0(unsigned int VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4;

 VAR_4 = (2 << 16) * (VAR_1 + 1);
 VAR_3 = VAR_0;
 VAR_3 *= VAR_2;
 VAR_3 += (VAR_4 / 2);
 VAR_3 = VAR_3 / VAR_4;

 return (VAR_3);
}
