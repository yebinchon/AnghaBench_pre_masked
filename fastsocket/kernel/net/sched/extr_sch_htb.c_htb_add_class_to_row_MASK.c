
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_sched {int* row_mask; scalar_t__* row; } ;
struct htb_class {size_t level; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,struct htb_class*,int) ;

__attribute__((used)) static inline void FUNC_2(struct htb_sched *VAR_0,
     struct htb_class *VAR_1, int VAR_2)
{
 VAR_0->row_mask[VAR_1->level] |= VAR_2;
 while (VAR_2) {
  int VAR_3 = FUNC_0(~VAR_2);
  VAR_2 &= ~(1 << VAR_3);
  FUNC_1(VAR_0->row[VAR_1->level] + VAR_3, VAR_1, VAR_3);
 }
}
