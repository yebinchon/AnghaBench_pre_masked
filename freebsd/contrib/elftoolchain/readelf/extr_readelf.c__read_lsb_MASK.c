
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ d_buf; } ;
typedef TYPE_1__ Elf_Data ;



__attribute__((used)) static uint64_t
FUNC_0(Elf_Data *VAR_0, uint64_t *VAR_1, int VAR_2)
{
 uint64_t VAR_3;
 uint8_t *VAR_4;

 VAR_4 = (uint8_t *) VAR_0->d_buf + *VAR_1;

 VAR_3 = 0;
 switch (VAR_2) {
 case 8:
  VAR_3 |= ((uint64_t) VAR_4[4]) << 32 | ((uint64_t) VAR_4[5]) << 40;
  VAR_3 |= ((uint64_t) VAR_4[6]) << 48 | ((uint64_t) VAR_4[7]) << 56;

 case 4:
  VAR_3 |= ((uint64_t) VAR_4[2]) << 16 | ((uint64_t) VAR_4[3]) << 24;

 case 2:
  VAR_3 |= ((uint64_t) VAR_4[1]) << 8;

 case 1:
  VAR_3 |= VAR_4[0];
  break;
 default:
  return (0);
 }

 *VAR_1 += VAR_2;

 return (VAR_3);
}
