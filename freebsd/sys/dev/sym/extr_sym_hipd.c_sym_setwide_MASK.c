
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_4__* tcb_p ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_17__ {size_t target; } ;
struct TYPE_16__ {TYPE_4__* target; } ;
struct TYPE_13__ {scalar_t__ options; scalar_t__ period; scalar_t__ offset; int width; } ;
struct TYPE_12__ {int width; } ;
struct TYPE_14__ {TYPE_2__ current; TYPE_1__ goal; } ;
struct TYPE_15__ {TYPE_3__ tinfo; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(hcb_p VAR_1, ccb_p VAR_2, u_char VAR_3)
{
 tcb_p VAR_4 = &VAR_1->target[VAR_2->target];

 FUNC_0(VAR_1, VAR_2, 0, 0, 0, VAR_3, 0, 0);




 VAR_4->tinfo.goal.width = VAR_4->tinfo.current.width = VAR_3;
 VAR_4->tinfo.current.offset = 0;
 VAR_4->tinfo.current.period = 0;
 VAR_4->tinfo.current.options = 0;

 FUNC_1(VAR_1, VAR_2->target, VAR_0);
}
