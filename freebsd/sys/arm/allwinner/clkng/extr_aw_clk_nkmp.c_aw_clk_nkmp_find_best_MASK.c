
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int flags; } ;
struct aw_clk_nkmp_sc {TYPE_1__ n; TYPE_1__ k; TYPE_1__ m; TYPE_1__ p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct aw_clk_nkmp_sc *VAR_1, uint64_t VAR_2, uint64_t *VAR_3,
    uint32_t *VAR_4, uint32_t *VAR_5, uint32_t *VAR_6, uint32_t *VAR_7)
{
 uint64_t VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = 0;
 *VAR_4 = 0;
 *VAR_5 = 0;
 *VAR_6 = 0;
 *VAR_7 = 0;

 for (VAR_10 = FUNC_1(&VAR_1->n); VAR_10 <= FUNC_0(&VAR_1->n); ) {
  for (VAR_11 = FUNC_1(&VAR_1->k); VAR_11 <= FUNC_0(&VAR_1->k); ) {
   for (VAR_12 = FUNC_1(&VAR_1->m); VAR_12 <= FUNC_0(&VAR_1->m); ) {
    for (VAR_13 = FUNC_1(&VAR_1->p); VAR_13 <= FUNC_0(&VAR_1->p); ) {
     VAR_8 = (VAR_2 * VAR_10 * VAR_11) / (VAR_12 * VAR_13);
     if ((*VAR_3 - VAR_8) < (*VAR_3 - VAR_9)) {
      VAR_9 = VAR_8;
      *VAR_4 = VAR_10;
      *VAR_5 = VAR_11;
      *VAR_6 = VAR_12;
      *VAR_7 = VAR_13;
     }
     if (VAR_9 == *VAR_3)
      return (VAR_9);
     if ((VAR_1->p.flags & VAR_0) != 0)
      VAR_13 <<= 1;
     else
      VAR_13++;
    }
    if ((VAR_1->m.flags & VAR_0) != 0)
     VAR_12 <<= 1;
    else
     VAR_12++;
   }
   if ((VAR_1->k.flags & VAR_0) != 0)
    VAR_11 <<= 1;
   else
    VAR_11++;
  }
  if ((VAR_1->n.flags & VAR_0) != 0)
   VAR_10 <<= 1;
  else
   VAR_10++;
 }

 return VAR_9;
}
