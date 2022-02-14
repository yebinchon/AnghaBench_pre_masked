
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int (* generate ) (TYPE_1__ const**,int*,size_t) ;} ;
typedef TYPE_1__ br_prng_class ;


 int FUNC_0 (TYPE_1__ const**,int*,size_t) ;

__attribute__((used)) static void
FUNC_1(const br_prng_class **VAR_0, uint16_t *VAR_1, uint32_t VAR_2)
{
 size_t VAR_3, VAR_4;
 unsigned VAR_5;

 VAR_4 = (VAR_2 + 15) >> 4;
 (*VAR_0)->generate(VAR_0, VAR_1 + 1, VAR_4 * sizeof(uint16_t));
 for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3 ++) {
  VAR_1[VAR_3] &= 0x7FFF;
 }
 VAR_5 = VAR_2 & 15;
 if (VAR_5 == 0) {
  VAR_1[VAR_4] &= 0x7FFF;
 } else {
  VAR_1[VAR_4] &= 0x7FFF >> (15 - VAR_5);
 }
}
