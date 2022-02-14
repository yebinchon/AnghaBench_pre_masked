
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct aw_clk_mipi_sc {int m; int k; int n; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static uint64_t
FUNC_2(struct aw_clk_mipi_sc *VAR_0, uint64_t VAR_1, uint64_t *VAR_2,
    uint32_t *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 uint64_t VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;

 VAR_7 = 0;
 *VAR_5 = 0;
 *VAR_3 = 0;
 *VAR_4 = 0;

 for (VAR_8 = FUNC_1(&VAR_0->n); VAR_8 <= FUNC_0(&VAR_0->n); ) {
  for (VAR_9 = FUNC_1(&VAR_0->k); VAR_9 <= FUNC_0(&VAR_0->k); ) {
   for (VAR_10 = FUNC_1(&VAR_0->m); VAR_10 <= FUNC_0(&VAR_0->m); ) {
    VAR_6 = (VAR_1 * VAR_8 * VAR_9) / VAR_10;
    if ((*VAR_2 - VAR_6) < (*VAR_2 - VAR_7)) {
     VAR_7 = VAR_6;
     *VAR_5 = VAR_8;
     *VAR_3 = VAR_9;
     *VAR_4 = VAR_10;
    }
    if (VAR_7 == *VAR_2)
     return (VAR_7);
     VAR_10++;
   }
    VAR_9++;
  }
   VAR_8++;
 }

 return VAR_7;
}
