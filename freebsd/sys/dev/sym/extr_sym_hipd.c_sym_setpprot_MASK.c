
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


typedef void* u_char ;
typedef TYPE_4__* tcb_p ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_17__ {size_t target; } ;
struct TYPE_16__ {TYPE_4__* target; } ;
struct TYPE_13__ {void* options; void* offset; void* period; void* width; } ;
struct TYPE_12__ {void* options; void* offset; void* period; void* width; } ;
struct TYPE_14__ {TYPE_2__ current; TYPE_1__ goal; } ;
struct TYPE_15__ {TYPE_3__ tinfo; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*,void*,void*,void*,void*,void*,void*) ;
 int FUNC_1 (TYPE_5__*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(hcb_p VAR_1, ccb_p VAR_2, u_char VAR_3, u_char VAR_4,
    u_char VAR_5, u_char VAR_6, u_char VAR_7, u_char VAR_8)
{
 tcb_p VAR_9 = &VAR_1->target[VAR_2->target];

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);




 VAR_9->tinfo.goal.width = VAR_9->tinfo.current.width = VAR_6;
 VAR_9->tinfo.goal.period = VAR_9->tinfo.current.period = VAR_5;
 VAR_9->tinfo.goal.offset = VAR_9->tinfo.current.offset = VAR_4;
 VAR_9->tinfo.goal.options = VAR_9->tinfo.current.options = VAR_3;

 FUNC_1(VAR_1, VAR_2->target, VAR_0);
}
