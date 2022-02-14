
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct clknode {int dummy; } ;
struct TYPE_2__ {int mask; int shift; } ;
struct aw_clk_nmm_sc {int flags; int lock_retries; int lock_shift; int offset; TYPE_1__ m1; TYPE_1__ m0; TYPE_1__ n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int VAR_4 ;
 int FUNC_3 (struct clknode*,int ,int*) ;
 int FUNC_4 (struct clknode*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (struct aw_clk_nmm_sc*,scalar_t__,scalar_t__*,int*,int*,int*) ;
 struct aw_clk_nmm_sc* FUNC_7 (struct clknode*) ;

__attribute__((used)) static int
FUNC_8(struct clknode *VAR_5, uint64_t VAR_6, uint64_t *VAR_7,
    int VAR_8, int *VAR_9)
{
 struct aw_clk_nmm_sc *VAR_10;
 uint64_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;

 VAR_10 = FUNC_7(VAR_5);

 VAR_12 = VAR_11 = 0;

 VAR_12 = FUNC_6(VAR_10, VAR_6, VAR_7,
     &VAR_17, &VAR_18, &VAR_19);

 if ((VAR_8 & VAR_1) != 0) {
  *VAR_7 = VAR_12;
  *VAR_9 = 1;
  return (0);
 }

 if ((VAR_12 < *VAR_7) &&
   ((VAR_8 & VAR_2) == 0)) {
  *VAR_9 = 1;
  return (VAR_4);
 }
 if ((VAR_12 > *VAR_7) &&
   ((VAR_8 & VAR_3) == 0)) {
  *VAR_9 = 1;
  return (VAR_4);
 }

 FUNC_1(VAR_5);
 FUNC_3(VAR_5, VAR_10->offset, &VAR_13);

 VAR_14 = FUNC_5(&VAR_10->n, VAR_17);
 VAR_15 = FUNC_5(&VAR_10->m0, VAR_18);
 VAR_16 = FUNC_5(&VAR_10->m1, VAR_19);
 VAR_13 &= ~VAR_10->n.mask;
 VAR_13 &= ~VAR_10->m0.mask;
 VAR_13 &= ~VAR_10->m1.mask;
 VAR_13 |= VAR_14 << VAR_10->n.shift;
 VAR_13 |= VAR_15 << VAR_10->m0.shift;
 VAR_13 |= VAR_16 << VAR_10->m1.shift;

 FUNC_4(VAR_5, VAR_10->offset, VAR_13);
 FUNC_2(VAR_5);

 if ((VAR_10->flags & VAR_0) != 0) {
  for (VAR_20 = 0; VAR_20 < VAR_10->lock_retries; VAR_20++) {
   FUNC_3(VAR_5, VAR_10->offset, &VAR_13);
   if ((VAR_13 & (1 << VAR_10->lock_shift)) != 0)
    break;
   FUNC_0(1000);
  }
 }

 *VAR_7 = VAR_12;
 *VAR_9 = 1;

 return (0);
}
