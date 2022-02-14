
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct clknode {int dummy; } ;
struct TYPE_3__ {scalar_t__ mask; scalar_t__ shift; } ;
struct aw_clk_nkmp_sc {int flags; int lock_retries; int lock_shift; int offset; TYPE_1__ p; TYPE_1__ m; TYPE_1__ k; TYPE_1__ n; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int FUNC_3 (struct clknode*,int ,scalar_t__*) ;
 int FUNC_4 (struct clknode*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(struct clknode *VAR_1, struct aw_clk_nkmp_sc *VAR_2,
    uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 FUNC_1(VAR_1);
 FUNC_3(VAR_1, VAR_2->offset, &VAR_7);

 VAR_8 = FUNC_6(VAR_7, &VAR_2->n);
 VAR_9 = FUNC_6(VAR_7, &VAR_2->k);
 VAR_10 = FUNC_6(VAR_7, &VAR_2->m);
 VAR_11 = FUNC_6(VAR_7, &VAR_2->p);

 if (VAR_11 < VAR_6) {
  VAR_7 &= ~VAR_2->p.mask;
  VAR_7 |= FUNC_5(&VAR_2->p, VAR_6) << VAR_2->p.shift;
  FUNC_4(VAR_1, VAR_2->offset, VAR_7);
  FUNC_0(2000);
 }

 if (VAR_10 < VAR_5) {
  VAR_7 &= ~VAR_2->m.mask;
  VAR_7 |= FUNC_5(&VAR_2->m, VAR_5) << VAR_2->m.shift;
  FUNC_4(VAR_1, VAR_2->offset, VAR_7);
  FUNC_0(2000);
 }

 VAR_7 &= ~VAR_2->n.mask;
 VAR_7 &= ~VAR_2->k.mask;
 VAR_7 |= FUNC_5(&VAR_2->n, VAR_3) << VAR_2->n.shift;
 VAR_7 |= FUNC_5(&VAR_2->k, VAR_4) << VAR_2->k.shift;
 FUNC_4(VAR_1, VAR_2->offset, VAR_7);
 FUNC_0(2000);

 if (VAR_10 > VAR_5) {
  VAR_7 &= ~VAR_2->m.mask;
  VAR_7 |= FUNC_5(&VAR_2->m, VAR_5) << VAR_2->m.shift;
  FUNC_4(VAR_1, VAR_2->offset, VAR_7);
  FUNC_0(2000);
 }

 if (VAR_11 > VAR_6) {
  VAR_7 &= ~VAR_2->p.mask;
  VAR_7 |= FUNC_5(&VAR_2->p, VAR_6) << VAR_2->p.shift;
  FUNC_4(VAR_1, VAR_2->offset, VAR_7);
  FUNC_0(2000);
 }

 if ((VAR_2->flags & VAR_0) != 0) {
  for (VAR_12 = 0; VAR_12 < VAR_2->lock_retries; VAR_12++) {
   FUNC_3(VAR_1, VAR_2->offset, &VAR_7);
   if ((VAR_7 & (1 << VAR_2->lock_shift)) != 0)
    break;
   FUNC_0(1000);
  }
 }

 FUNC_2(VAR_1);
}
