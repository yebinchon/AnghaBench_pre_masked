
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int flags; } ;
struct aw_clk_nm_sc {TYPE_1__ m; TYPE_1__ n; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_3(struct aw_clk_nm_sc *VAR_1, uint64_t VAR_2, uint64_t *VAR_3,
    uint32_t *VAR_4, uint32_t *VAR_5)
{
 uint64_t VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 *VAR_4 = *VAR_5 = 0;

 VAR_10 = FUNC_1(&VAR_1->m);
 VAR_11 = FUNC_1(&VAR_1->n);
 VAR_12 = FUNC_2(&VAR_1->m);
 VAR_13 = FUNC_2(&VAR_1->n);

 for (VAR_8 = VAR_12; VAR_8 <= VAR_10; ) {
  for (VAR_9 = VAR_12; VAR_9 <= VAR_11; ) {
   VAR_6 = VAR_2 / VAR_9 / VAR_8;
   if (FUNC_0(*VAR_3 - VAR_6) < FUNC_0(*VAR_3 - VAR_7)) {
    VAR_7 = VAR_6;
    *VAR_4 = VAR_9;
    *VAR_5 = VAR_8;
   }

   if ((VAR_1->n.flags & VAR_0) != 0)
    VAR_9 <<= 1;
   else
    VAR_9++;
  }
  if ((VAR_1->m.flags & VAR_0) != 0)
   VAR_8 <<= 1;
  else
   VAR_8++;
 }

 return (VAR_7);
}
