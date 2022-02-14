
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixl_pf_qtag {scalar_t__ type; size_t num_allocated; size_t* qidx; int * qmgr; } ;
struct ixl_pf_qmgr {int * qinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;

int
FUNC_1(struct ixl_pf_qmgr *VAR_2, struct ixl_pf_qtag *VAR_3)
{
 u16 VAR_4, VAR_5;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (VAR_3->type == VAR_1) {
  for (VAR_4 = 0; VAR_4 < VAR_3->num_allocated; VAR_4++) {
   VAR_5 = VAR_3->qidx[VAR_4];
   FUNC_0(&VAR_2->qinfo[VAR_5], sizeof(VAR_2->qinfo[VAR_5]));
  }
 } else {
  u16 VAR_6 = VAR_3->qidx[0];
  for (VAR_4 = VAR_6; VAR_4 < VAR_6 + VAR_3->num_allocated; VAR_4++)
   FUNC_0(&VAR_2->qinfo[VAR_4], sizeof(VAR_2->qinfo[VAR_5]));
 }

 VAR_3->qmgr = ((void*)0);
 return (0);
}
