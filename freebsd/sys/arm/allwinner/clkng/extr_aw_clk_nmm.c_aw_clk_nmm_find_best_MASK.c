
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct aw_clk_nmm_sc {int m1; int m0; int n; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint64_t
FUNC_3(struct aw_clk_nmm_sc *VAR_0, uint64_t VAR_1, uint64_t *VAR_2,
  uint32_t *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 uint64_t VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;

 *VAR_3 = *VAR_4 = *VAR_5 = 0;

 VAR_11 = FUNC_1(&VAR_0->n);
 VAR_14 = FUNC_2(&VAR_0->n);
 VAR_12 = FUNC_1(&VAR_0->m0);
 VAR_15 = FUNC_2(&VAR_0->m0);
 VAR_13 = FUNC_1(&VAR_0->m1);
 VAR_16 = FUNC_2(&VAR_0->m1);

 for (VAR_9 = VAR_15; VAR_9 <= VAR_12; ) {
  for (VAR_10 = VAR_16; VAR_10 <= VAR_13; ) {
   for (VAR_8 = VAR_14; VAR_8 <= VAR_11; ) {
    VAR_6 = VAR_1 * VAR_8 / VAR_9 / VAR_10;
    if (FUNC_0(*VAR_2 - VAR_6) < FUNC_0(*VAR_2 - VAR_7)) {
     VAR_7 = VAR_6;
     *VAR_3 = VAR_8;
     *VAR_4 = VAR_9;
     *VAR_5 = VAR_10;
    }
    VAR_8++;
   }
   VAR_10++;
  }
  VAR_9++;
 }

 return (VAR_7);
}
