
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {size_t in_addr; int bit_addr; } ;
struct rar5 {TYPE_1__ bits; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rar5* VAR_1, const uint8_t* VAR_2, uint32_t* VAR_3) {
 uint32_t VAR_4 = ((uint32_t) VAR_2[VAR_1->bits.in_addr]) << 24;
 VAR_4 |= VAR_2[VAR_1->bits.in_addr + 1] << 16;
 VAR_4 |= VAR_2[VAR_1->bits.in_addr + 2] << 8;
 VAR_4 |= VAR_2[VAR_1->bits.in_addr + 3];
 VAR_4 <<= VAR_1->bits.bit_addr;
 VAR_4 |= VAR_2[VAR_1->bits.in_addr + 4] >> (8 - VAR_1->bits.bit_addr);
 *VAR_3 = VAR_4;
 return VAR_0;
}
