
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ixl_pf_qtag {int num_active; int num_allocated; int* qidx; int type; struct ixl_pf_qmgr* qmgr; } ;
struct ixl_pf_qmgr {int num_queues; TYPE_1__* qinfo; } ;
struct TYPE_2__ {int allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixl_pf_qtag*,int) ;
 int FUNC_1 (struct ixl_pf_qmgr*) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(struct ixl_pf_qmgr *VAR_4, u16 VAR_5, struct ixl_pf_qtag *VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9 = 0;
 u16 VAR_10;

 if (VAR_6 == ((void*)0) || VAR_5 < 1 || VAR_5 > 16)
  return (VAR_1);


 VAR_10 = (u16)FUNC_2(VAR_5);

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 < VAR_10)
  return (VAR_2);

 FUNC_0(VAR_6, sizeof(*VAR_6));
 VAR_6->qmgr = VAR_4;
 VAR_6->type = VAR_3;
 VAR_6->num_active = VAR_5;
 VAR_6->num_allocated = VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_queues; VAR_7++) {
  if (!VAR_4->qinfo[VAR_7].allocated) {
   VAR_6->qidx[VAR_9] = VAR_7;
   VAR_9++;
   VAR_4->qinfo[VAR_7].allocated = 1;
   if (VAR_9 == VAR_10)
    return (0);
  }
 }


 return (VAR_0);
}
