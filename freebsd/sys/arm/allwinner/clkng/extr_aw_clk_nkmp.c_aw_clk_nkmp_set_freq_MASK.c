
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct clknode {int dummy; } ;
struct TYPE_2__ {int mask; int shift; } ;
struct aw_clk_nkmp_sc {int flags; int update_shift; int lock_retries; int lock_shift; int offset; TYPE_1__ p; TYPE_1__ m; TYPE_1__ k; TYPE_1__ n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int VAR_6 ;
 int FUNC_3 (struct clknode*,int ,int*) ;
 int FUNC_4 (struct clknode*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (struct aw_clk_nkmp_sc*,scalar_t__,scalar_t__*,int*,int*,int*,int*) ;
 int FUNC_7 (struct clknode*,struct aw_clk_nkmp_sc*,int,int,int,int) ;
 struct aw_clk_nkmp_sc* FUNC_8 (struct clknode*) ;

__attribute__((used)) static int
FUNC_9(struct clknode *VAR_7, uint64_t VAR_8, uint64_t *VAR_9,
    int VAR_10, int *VAR_11)
{
 struct aw_clk_nkmp_sc *VAR_12;
 uint64_t VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;

 VAR_12 = FUNC_8(VAR_7);

 VAR_13 = FUNC_6(VAR_12, VAR_8, VAR_9,
     &VAR_15, &VAR_16, &VAR_17, &VAR_18);
 if ((VAR_10 & VAR_3) != 0) {
  *VAR_9 = VAR_13;
  *VAR_11 = 1;
  return (0);
 }

 if ((VAR_13 < *VAR_9) &&
   ((VAR_10 & VAR_4) != 0)) {
  *VAR_11 = 1;
  return (VAR_6);
 }
 if ((VAR_13 > *VAR_9) &&
   ((VAR_10 & VAR_5) != 0)) {
  *VAR_11 = 1;
  return (VAR_6);
 }

 if ((VAR_12->flags & VAR_2) != 0)
  FUNC_7(VAR_7, VAR_12,
      VAR_15, VAR_16, VAR_17, VAR_18);
 else {
  FUNC_1(VAR_7);
  FUNC_3(VAR_7, VAR_12->offset, &VAR_14);
  VAR_14 &= ~VAR_12->n.mask;
  VAR_14 &= ~VAR_12->k.mask;
  VAR_14 &= ~VAR_12->m.mask;
  VAR_14 &= ~VAR_12->p.mask;
  VAR_14 |= FUNC_5(&VAR_12->n, VAR_15) << VAR_12->n.shift;
  VAR_14 |= FUNC_5(&VAR_12->k, VAR_16) << VAR_12->k.shift;
  VAR_14 |= FUNC_5(&VAR_12->m, VAR_17) << VAR_12->m.shift;
  VAR_14 |= FUNC_5(&VAR_12->p, VAR_18) << VAR_12->p.shift;
  FUNC_4(VAR_7, VAR_12->offset, VAR_14);
  FUNC_0(2000);
  FUNC_2(VAR_7);

  if ((VAR_12->flags & VAR_1) != 0) {
   FUNC_1(VAR_7);
   FUNC_3(VAR_7, VAR_12->offset, &VAR_14);
   VAR_14 |= 1 << VAR_12->update_shift;
   FUNC_4(VAR_7, VAR_12->offset, VAR_14);
   FUNC_0(2000);
   FUNC_2(VAR_7);
  }

  if ((VAR_12->flags & VAR_0) != 0) {
   for (VAR_19 = 0; VAR_19 < VAR_12->lock_retries; VAR_19++) {
    FUNC_3(VAR_7, VAR_12->offset, &VAR_14);
    if ((VAR_14 & (1 << VAR_12->lock_shift)) != 0)
     break;
    FUNC_0(1000);
   }
  }
 }

 *VAR_9 = VAR_13;
 *VAR_11 = 1;

 return (0);
}
