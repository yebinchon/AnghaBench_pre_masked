
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct aw_clk_np_sc {int p; int n; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint64_t
FUNC_3(struct aw_clk_np_sc *VAR_0, uint64_t VAR_1, uint64_t *VAR_2,
    uint32_t *VAR_3, uint32_t *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 *VAR_3 = *VAR_4 = 0;

 VAR_9 = FUNC_1(&VAR_0->n);
 VAR_10 = FUNC_1(&VAR_0->p);
 VAR_11 = FUNC_2(&VAR_0->n);
 VAR_12 = FUNC_2(&VAR_0->p);

 for (VAR_8 = VAR_12; VAR_8 <= VAR_10; ) {
  for (VAR_7 = VAR_11; VAR_7 <= VAR_9; ) {
   VAR_5 = VAR_1 * VAR_7 / VAR_8;
   if (FUNC_0(*VAR_2 - VAR_5) < FUNC_0(*VAR_2 - VAR_6)) {
    VAR_6 = VAR_5;
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_8;
   }

   VAR_7++;
  }
  VAR_8++;
 }

 return (VAR_6);
}
