
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void* u_char ;
typedef TYPE_6__* tcb_p ;
typedef TYPE_7__* hcb_p ;
typedef TYPE_8__* ccb_p ;
struct TYPE_14__ {int sel_scntl3; } ;
struct TYPE_15__ {TYPE_1__ select; } ;
struct TYPE_21__ {size_t target; TYPE_2__ phys; } ;
struct TYPE_20__ {TYPE_6__* target; } ;
struct TYPE_17__ {scalar_t__ options; void* offset; void* period; } ;
struct TYPE_16__ {scalar_t__ options; void* offset; void* period; } ;
struct TYPE_18__ {TYPE_4__ current; TYPE_3__ goal; } ;
struct TYPE_19__ {TYPE_5__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,TYPE_8__*,int ,void*,void*,void*,void*,void*) ;
 int FUNC_1 (TYPE_7__*,size_t,int ) ;

__attribute__((used)) static void
FUNC_2(hcb_p VAR_2, ccb_p VAR_3, u_char VAR_4, u_char VAR_5, u_char VAR_6, u_char VAR_7)
{
 tcb_p VAR_8 = &VAR_2->target[VAR_3->target];
 u_char VAR_9 = (VAR_3->phys.select.sel_scntl3 & VAR_0) ? 1 : 0;

 FUNC_0(VAR_2, VAR_3, 0, VAR_4, VAR_5, VAR_9, VAR_6, VAR_7);




 VAR_8->tinfo.goal.period = VAR_8->tinfo.current.period = VAR_5;
 VAR_8->tinfo.goal.offset = VAR_8->tinfo.current.offset = VAR_4;
 VAR_8->tinfo.goal.options = VAR_8->tinfo.current.options = 0;

 FUNC_1(VAR_2, VAR_3->target, VAR_1);
}
