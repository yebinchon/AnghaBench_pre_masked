
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixl_pf_qtag {size_t num_allocated; scalar_t__ type; size_t first_qidx; size_t* qidx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

u16
FUNC_1(struct ixl_pf_qtag *VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_2 < VAR_1->num_allocated);

 if (VAR_1->type == VAR_0)
  return VAR_1->first_qidx + VAR_2;
 else
  return VAR_1->qidx[VAR_2];
}
