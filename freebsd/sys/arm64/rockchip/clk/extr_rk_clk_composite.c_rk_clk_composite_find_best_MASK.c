
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct rk_clk_composite_sc {int div_mask; int div_shift; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(struct rk_clk_composite_sc *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, uint32_t *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_5 = 0;
 VAR_7 = 0;
 VAR_8 = 0;

 for (VAR_10 = 0; VAR_10 <= ((VAR_1->div_mask >> VAR_1->div_shift) + 1);
     VAR_10++) {
  if (VAR_1->flags == VAR_0)
   VAR_9 = 1 << VAR_10;
  else
   VAR_9 = VAR_10 + 1;
  VAR_6 = VAR_2 / VAR_9;
  if ((VAR_3 - VAR_6) < (VAR_3 - VAR_5)) {
   VAR_5 = VAR_6;
   VAR_7 = VAR_9;
   VAR_8 = VAR_10;
   break;
  }
 }
 *VAR_4 = VAR_10;
 return (VAR_7);
}
