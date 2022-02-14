
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
typedef int dtrace_actdesc_t ;
struct TYPE_2__ {int pcb_jmpbuf; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static dtrace_actdesc_t *
FUNC_2(dtrace_hdl_t *VAR_2, dtrace_stmtdesc_t *VAR_3)
{
 dtrace_actdesc_t *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2, VAR_3)) == ((void*)0))
  FUNC_1(VAR_1->pcb_jmpbuf, VAR_0);

 return (VAR_4);
}
