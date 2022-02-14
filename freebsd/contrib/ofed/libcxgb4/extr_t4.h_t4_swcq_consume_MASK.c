
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cq {int sw_in_use; scalar_t__ sw_cidx; scalar_t__ size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct t4_cq *VAR_0)
{
 FUNC_0(VAR_0->sw_in_use >= 1);
 VAR_0->sw_in_use--;
 if (++VAR_0->sw_cidx == VAR_0->size)
  VAR_0->sw_cidx = 0;
}
