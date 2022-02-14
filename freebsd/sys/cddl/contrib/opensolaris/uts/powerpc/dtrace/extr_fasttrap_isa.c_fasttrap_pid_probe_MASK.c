
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint_t ;
typedef int t ;
struct trapframe {int dummy; } ;
struct rm_priotracker {int dummy; } ;
struct reg {uintptr_t pc; uintptr_t* fixreg; int lr; uintptr_t ctr; } ;
struct TYPE_17__ {scalar_t__ p_pid; } ;
typedef TYPE_2__ proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_18__ {scalar_t__ ftt_pid; uintptr_t ftt_pc; int ftt_type; int ftt_instr; uintptr_t ftt_dest; int * ftt_retids; int ftt_bi; int ftt_bo; TYPE_5__* ftt_ids; TYPE_1__* ftt_proc; struct TYPE_18__* ftt_next; } ;
typedef TYPE_3__ fasttrap_tracepoint_t ;
struct TYPE_19__ {int ftp_id; int * ftp_argmap; } ;
typedef TYPE_4__ fasttrap_probe_t ;
struct TYPE_20__ {scalar_t__ fti_ptype; TYPE_4__* fti_probe; struct TYPE_20__* fti_next; } ;
typedef TYPE_5__ fasttrap_id_t ;
struct TYPE_21__ {TYPE_3__* ftb_data; } ;
typedef TYPE_6__ fasttrap_bucket_t ;
typedef int dtrace_icookie_t ;
struct TYPE_22__ {int t_dtrace_on; uintptr_t t_dtrace_pc; scalar_t__ t_dtrace_scrpc; uintptr_t t_dtrace_astpc; scalar_t__ t_dtrace_ret; scalar_t__ t_dtrace_npc; scalar_t__ t_dtrace_ft; scalar_t__ t_dtrace_step; } ;
struct TYPE_16__ {scalar_t__ ftpc_acount; } ;
struct TYPE_15__ {TYPE_6__* fth_table; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (scalar_t__,uintptr_t) ;






 TYPE_2__* VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t,uintptr_t) ;
 int FUNC_7 (int ,int ,struct reg*) ;
 int FUNC_8 (struct reg*,uintptr_t,scalar_t__,uintptr_t) ;
 int FUNC_9 (TYPE_2__*,TYPE_7__*,uintptr_t) ;
 int VAR_5 ;
 TYPE_10__ VAR_6 ;
 int FUNC_10 (TYPE_4__*,struct reg*,int,uintptr_t*) ;
 int FUNC_11 (TYPE_7__*,struct reg*) ;
 int FUNC_12 (int *,struct rm_priotracker*) ;
 int FUNC_13 (int *,struct rm_priotracker*) ;
 int FUNC_14 (TYPE_7__*,struct reg*) ;

int
FUNC_15(struct trapframe *VAR_7)
{
 struct reg VAR_8, *VAR_9;
 struct rm_priotracker VAR_10;
 proc_t *VAR_11 = VAR_3;
 uintptr_t VAR_12;
 uintptr_t VAR_13 = 0;
 fasttrap_bucket_t *VAR_14;
 fasttrap_tracepoint_t *VAR_15, VAR_16;
 pid_t VAR_17;
 dtrace_icookie_t VAR_18;
 uint_t VAR_19 = 0;

 FUNC_11(VAR_4, &VAR_8);
 VAR_9 = &VAR_8;
 VAR_12 = VAR_9->pc;







 if (VAR_4->t_dtrace_step) {
  FUNC_0(VAR_4->t_dtrace_on);
  FUNC_9(VAR_11, VAR_4, VAR_12);
  return (0);
 }




 VAR_4->t_dtrace_ft = 0;
 VAR_4->t_dtrace_pc = 0;
 VAR_4->t_dtrace_npc = 0;
 VAR_4->t_dtrace_scrpc = 0;
 VAR_4->t_dtrace_astpc = 0;

 FUNC_12(&VAR_5, &VAR_10);
 VAR_17 = VAR_11->p_pid;
 VAR_14 = &VAR_6.fth_table[FUNC_3(VAR_17, VAR_12)];




 for (VAR_15 = VAR_14->ftb_data; VAR_15 != ((void*)0); VAR_15 = VAR_15->ftt_next) {
  if (VAR_17 == VAR_15->ftt_pid && VAR_12 == VAR_15->ftt_pc &&
      VAR_15->ftt_proc->ftpc_acount != 0)
   break;
 }






 if (VAR_15 == ((void*)0)) {
  FUNC_13(&VAR_5, &VAR_10);
  return (-1);
 }

 if (VAR_15->ftt_ids != ((void*)0)) {
  fasttrap_id_t *VAR_20;

  for (VAR_20 = VAR_15->ftt_ids; VAR_20 != ((void*)0); VAR_20 = VAR_20->fti_next) {
   fasttrap_probe_t *VAR_21 = VAR_20->fti_probe;

   if (VAR_20->fti_ptype == VAR_1) {





    VAR_18 = FUNC_4();
    FUNC_2(VAR_0);
    FUNC_6(VAR_21->ftp_id, VAR_9->fixreg[3],
      VAR_9->fixreg[4], VAR_9->fixreg[5], VAR_9->fixreg[6],
      VAR_9->fixreg[7]);
    FUNC_1(VAR_0);
    FUNC_5(VAR_18);
   } else if (VAR_20->fti_ptype == VAR_2) {







    VAR_19 = 1;
   } else if (VAR_21->ftp_argmap == ((void*)0)) {
    FUNC_6(VAR_21->ftp_id, VAR_9->fixreg[3],
        VAR_9->fixreg[4], VAR_9->fixreg[5], VAR_9->fixreg[6],
        VAR_9->fixreg[7]);
   } else {
    uintptr_t VAR_22[5];

    FUNC_10(VAR_21, VAR_9,
        sizeof (VAR_22) / sizeof (VAR_22[0]), VAR_22);

    FUNC_6(VAR_21->ftp_id, VAR_22[0], VAR_22[1],
        VAR_22[2], VAR_22[3], VAR_22[4]);
   }
  }
 }






 VAR_16 = *VAR_15;
 FUNC_13(&VAR_5, &VAR_10);
 VAR_15 = &VAR_16;
 if (VAR_19) {
  VAR_9->fixreg[3] = 1;
  VAR_13 = VAR_9->pc + 4;
  goto done;
 }


 switch (VAR_15->ftt_type) {
 case 128:
  VAR_13 = VAR_9->pc + 4;
  break;
 case 132:
  if (!FUNC_7(VAR_15->ftt_bo, VAR_15->ftt_bi, VAR_9))
   break;

 case 133:
  if (VAR_15->ftt_instr & 0x01)
   VAR_9->lr = VAR_9->pc + 4;
  VAR_13 = VAR_15->ftt_dest;
  break;
 case 130:
 case 131:
  if (!FUNC_7(VAR_15->ftt_bo, VAR_15->ftt_bi, VAR_9))
   break;

  if (VAR_15->ftt_type == 131)
   VAR_13 = VAR_9->ctr;
  else
   VAR_13 = VAR_9->lr;
  if (VAR_15->ftt_instr & 0x01)
   VAR_9->lr = VAR_9->pc + 4;
  break;
 case 129:
  break;
 };
done:






 if (VAR_15->ftt_retids != ((void*)0)) {







  if (VAR_15->ftt_type != 129) {
   FUNC_8(VAR_9, VAR_12, VAR_17, VAR_13);
  } else {
   FUNC_0(VAR_4->t_dtrace_ret != 0);
   FUNC_0(VAR_4->t_dtrace_pc == VAR_12);
   FUNC_0(VAR_4->t_dtrace_scrpc != 0);
   FUNC_0(VAR_13 == VAR_4->t_dtrace_astpc);
  }
 }

 VAR_9->pc = VAR_13;
 FUNC_14(VAR_4, VAR_9);

 return (0);
}
