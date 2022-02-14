
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static __inline uint64_t
FUNC_0(uint64_t VAR_1, uint16_t VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = VAR_1;
 if (VAR_2 > 0) {
  VAR_3 >>= VAR_2 * VAR_0;
  VAR_3 <<= VAR_2 * VAR_0;
 }
 return (VAR_3);
}
