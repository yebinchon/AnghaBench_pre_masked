
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ixl_pf_qtag {int* qidx; int num_allocated; int num_active; int type; struct ixl_pf_qmgr* qmgr; } ;
struct ixl_pf_qmgr {TYPE_1__* qinfo; } ;
struct TYPE_2__ {int allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixl_pf_qtag*,int) ;
 int FUNC_1 (struct ixl_pf_qmgr*,int) ;
 int FUNC_2 (struct ixl_pf_qmgr*) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct ixl_pf_qmgr *VAR_3, u16 VAR_4, struct ixl_pf_qtag *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 u16 VAR_9;

 if (VAR_5 == ((void*)0) || VAR_4 < 1)
  return (VAR_0);


 VAR_9 = (u16)FUNC_3(VAR_4);


 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 < VAR_9)
  return (VAR_1);

 VAR_8 = FUNC_1(VAR_3, VAR_9);
 if (VAR_8 < 0)
  return (VAR_1);


 for (VAR_6 = VAR_8; VAR_6 < VAR_8 + VAR_9; VAR_6++)
  VAR_3->qinfo[VAR_6].allocated = 1;

 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_5->qmgr = VAR_3;
 VAR_5->type = VAR_2;
 VAR_5->qidx[0] = VAR_8;
 VAR_5->num_allocated = VAR_9;
 VAR_5->num_active = VAR_4;

 return (0);
}
