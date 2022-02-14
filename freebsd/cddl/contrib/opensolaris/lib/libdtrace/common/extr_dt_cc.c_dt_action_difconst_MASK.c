
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
typedef int dtrace_hdl_t ;
struct TYPE_7__ {int dtdo_len; int dtdo_intlen; int dtdo_rtype; int * dtdo_inttab; int * dtdo_buf; } ;
typedef TYPE_1__ dtrace_difo_t ;
typedef int dtrace_actkind_t ;
struct TYPE_8__ {int dtad_kind; TYPE_1__* dtad_difo; } ;
typedef TYPE_2__ dtrace_actdesc_t ;
typedef int dif_instr_t ;
struct TYPE_9__ {int pcb_jmpbuf; int * pcb_hdl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void
FUNC_6(dtrace_actdesc_t *VAR_3, uint_t VAR_4, dtrace_actkind_t VAR_5)
{
 dtrace_hdl_t *VAR_6 = VAR_2->pcb_hdl;
 dtrace_difo_t *VAR_7 = FUNC_4(VAR_6, sizeof (dtrace_difo_t));

 if (VAR_7 == ((void*)0))
  FUNC_5(VAR_2->pcb_jmpbuf, VAR_0);

 VAR_7->dtdo_buf = FUNC_2(VAR_6, sizeof (dif_instr_t) * 2);
 VAR_7->dtdo_inttab = FUNC_2(VAR_6, sizeof (uint64_t));

 if (VAR_7->dtdo_buf == ((void*)0) || VAR_7->dtdo_inttab == ((void*)0)) {
  FUNC_3(VAR_6, VAR_7);
  FUNC_5(VAR_2->pcb_jmpbuf, VAR_0);
 }

 VAR_7->dtdo_buf[0] = FUNC_1(0, 1);
 VAR_7->dtdo_buf[1] = FUNC_0(1);
 VAR_7->dtdo_len = 2;
 VAR_7->dtdo_inttab[0] = VAR_4;
 VAR_7->dtdo_intlen = 1;
 VAR_7->dtdo_rtype = VAR_1;

 VAR_3->dtad_difo = VAR_7;
 VAR_3->dtad_kind = VAR_5;
}
