
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_3__* tcb_p ;
typedef TYPE_4__* hcb_p ;
typedef TYPE_5__* ccb_p ;
struct TYPE_19__ {int nego_status; } ;
struct TYPE_18__ {void** msgout; void** msgin; int maxoffs; int minsync; } ;
struct TYPE_15__ {int offset; int period; int options; } ;
struct TYPE_16__ {TYPE_1__ goal; } ;
struct TYPE_17__ {TYPE_2__ tinfo; } ;


 void* VAR_0 ;



 int FUNC_0 (TYPE_4__*,TYPE_5__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_3(hcb_p VAR_1, tcb_p VAR_2, ccb_p VAR_3)
{




 switch (VAR_3->nego_status) {
 case 130:



  VAR_2->tinfo.goal.options = 0;
  if (VAR_2->tinfo.goal.period < VAR_1->minsync)
   VAR_2->tinfo.goal.period = VAR_1->minsync;
  if (VAR_2->tinfo.goal.offset > VAR_1->maxoffs)
   VAR_2->tinfo.goal.offset = VAR_1->maxoffs;

  break;
 case 129:
  FUNC_1 (VAR_1, VAR_3, 0, 0, 0, 0);
  break;
 case 128:
  FUNC_2 (VAR_1, VAR_3, 0);
  break;
 }
 VAR_1->msgin [0] = VAR_0;
 VAR_1->msgout[0] = VAR_0;
 VAR_3->nego_status = 0;
}
