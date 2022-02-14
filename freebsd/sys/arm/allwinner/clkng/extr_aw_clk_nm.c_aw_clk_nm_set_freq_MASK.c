
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct clknode {int dummy; } ;
struct TYPE_2__ {int mask; int shift; } ;
struct aw_clk_nm_sc {int flags; int lock_retries; int lock_shift; int offset; TYPE_1__ m; TYPE_1__ n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int VAR_5 ;
 int FUNC_3 (struct clknode*,int ,int*) ;
 int FUNC_4 (struct clknode*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (struct aw_clk_nm_sc*,scalar_t__,scalar_t__*,int*,int*) ;
 struct clknode* FUNC_7 (char const*) ;
 int FUNC_8 (struct clknode*,scalar_t__*) ;
 struct clknode* FUNC_9 (struct clknode*) ;
 int FUNC_10 (struct clknode*) ;
 char** FUNC_11 (struct clknode*) ;
 int FUNC_12 (struct clknode*) ;
 struct aw_clk_nm_sc* FUNC_13 (struct clknode*) ;
 int FUNC_14 (struct clknode*,int) ;

__attribute__((used)) static int
FUNC_15(struct clknode *VAR_6, uint64_t VAR_7, uint64_t *VAR_8,
    int VAR_9, int *VAR_10)
{
 struct aw_clk_nm_sc *VAR_11;
 struct clknode *VAR_12;
 const char **VAR_13;
 uint64_t VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_11 = FUNC_13(VAR_6);

 VAR_15 = VAR_14 = 0;
 VAR_22 = 0;

 if ((VAR_11->flags & VAR_1) != 0) {
  VAR_13 = FUNC_11(VAR_6);
  for (VAR_21 = 0; VAR_21 != FUNC_12(VAR_6); VAR_21++) {
   VAR_12 = FUNC_7(VAR_13[VAR_21]);
   FUNC_8(VAR_12, &VAR_7);

   VAR_14 = FUNC_6(VAR_11, VAR_7, VAR_8, &VAR_18, &VAR_17);
   if ((*VAR_8 - VAR_14) < (*VAR_8 - VAR_15)) {
    VAR_15 = VAR_14;
    VAR_22 = VAR_21;
    VAR_20 = VAR_18;
    VAR_19 = VAR_17;
   }
  }

  VAR_21 = FUNC_10(VAR_6);
  VAR_12 = FUNC_9(VAR_6);
  FUNC_8(VAR_12, &VAR_7);
 } else {
  VAR_15 = FUNC_6(VAR_11, VAR_7, VAR_8,
      &VAR_20, &VAR_19);
 }

 if ((VAR_9 & VAR_2) != 0) {
  *VAR_8 = VAR_15;
  *VAR_10 = 1;
  return (0);
 }

 if ((VAR_15 < *VAR_8) &&
   ((VAR_9 & VAR_3) == 0)) {
  *VAR_10 = 1;
  return (VAR_5);
 }
 if ((VAR_15 > *VAR_8) &&
   ((VAR_9 & VAR_4) == 0)) {
  *VAR_10 = 1;
  return (VAR_5);
 }

 if ((VAR_11->flags & VAR_1) != 0 && VAR_21 != VAR_22)
  FUNC_14(VAR_6, VAR_22);

 FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_11->offset, &VAR_16);

 VAR_18 = FUNC_5(&VAR_11->n, VAR_20);
 VAR_17 = FUNC_5(&VAR_11->m, VAR_19);
 VAR_16 &= ~VAR_11->n.mask;
 VAR_16 &= ~VAR_11->m.mask;
 VAR_16 |= VAR_18 << VAR_11->n.shift;
 VAR_16 |= VAR_17 << VAR_11->m.shift;

 FUNC_4(VAR_6, VAR_11->offset, VAR_16);
 FUNC_2(VAR_6);

 if ((VAR_11->flags & VAR_0) != 0) {
  for (VAR_23 = 0; VAR_23 < VAR_11->lock_retries; VAR_23++) {
   FUNC_3(VAR_6, VAR_11->offset, &VAR_16);
   if ((VAR_16 & (1 << VAR_11->lock_shift)) != 0)
    break;
   FUNC_0(1000);
  }
 }

 *VAR_8 = VAR_15;
 *VAR_10 = 1;

 return (0);
}
