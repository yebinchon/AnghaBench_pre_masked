
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* dtsd_stmtattr; void* dtsd_descattr; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
typedef int dtrace_ecbdesc_t ;
typedef void* dtrace_attribute_t ;
struct TYPE_6__ {TYPE_1__* pcb_stmt; int pcb_jmpbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static dtrace_stmtdesc_t *
FUNC_3(dtrace_hdl_t *VAR_2, dtrace_ecbdesc_t *VAR_3,
    dtrace_attribute_t VAR_4, dtrace_attribute_t VAR_5)
{
 dtrace_stmtdesc_t *VAR_6 = FUNC_1(VAR_2, VAR_3);

 if (VAR_6 == ((void*)0))
  FUNC_2(VAR_1->pcb_jmpbuf, VAR_0);

 FUNC_0(VAR_1->pcb_stmt == ((void*)0));
 VAR_1->pcb_stmt = VAR_6;

 VAR_6->dtsd_descattr = VAR_4;
 VAR_6->dtsd_stmtattr = VAR_5;

 return (VAR_6);
}
