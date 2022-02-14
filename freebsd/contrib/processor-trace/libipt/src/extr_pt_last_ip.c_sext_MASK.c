
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0, uint8_t VAR_1)
{
 uint64_t VAR_2, VAR_3;

 VAR_2 = 1ull << (VAR_1 - 1);
 VAR_3 = ~0ull << VAR_1;

 return VAR_0 & VAR_2 ? VAR_0 | VAR_3 : VAR_0 & ~VAR_3;
}
