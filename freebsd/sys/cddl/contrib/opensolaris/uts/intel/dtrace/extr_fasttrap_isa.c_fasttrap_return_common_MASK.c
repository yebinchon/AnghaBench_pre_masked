
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rm_priotracker {int dummy; } ;
struct reg {int r_rbx; int r_rax; } ;
typedef scalar_t__ pid_t ;
struct TYPE_9__ {scalar_t__ ftt_pid; uintptr_t ftt_pc; scalar_t__ ftt_type; TYPE_4__* ftt_retids; TYPE_1__* ftt_proc; struct TYPE_9__* ftt_next; } ;
typedef TYPE_3__ fasttrap_tracepoint_t ;
struct TYPE_10__ {TYPE_2__* fti_probe; struct TYPE_10__* fti_next; } ;
typedef TYPE_4__ fasttrap_id_t ;
struct TYPE_11__ {TYPE_3__* ftb_data; } ;
typedef TYPE_5__ fasttrap_bucket_t ;
struct TYPE_12__ {TYPE_5__* fth_table; } ;
struct TYPE_8__ {uintptr_t ftp_faddr; uintptr_t ftp_fsize; int ftp_id; } ;
struct TYPE_7__ {scalar_t__ ftpc_acount; } ;


 size_t FUNC_0 (scalar_t__,uintptr_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,uintptr_t,int ,int ,int ,int ) ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_2 (int *,struct rm_priotracker*) ;
 int FUNC_3 (int *,struct rm_priotracker*) ;

__attribute__((used)) static void
FUNC_4(struct reg *VAR_4, uintptr_t VAR_5, pid_t VAR_6,
    uintptr_t VAR_7)
{
 fasttrap_tracepoint_t *VAR_8;
 fasttrap_bucket_t *VAR_9;
 fasttrap_id_t *VAR_10;
 struct rm_priotracker VAR_11;

 FUNC_2(&VAR_2, &VAR_11);
 VAR_9 = &VAR_3.fth_table[FUNC_0(VAR_6, VAR_5)];

 for (VAR_8 = VAR_9->ftb_data; VAR_8 != ((void*)0); VAR_8 = VAR_8->ftt_next) {
  if (VAR_6 == VAR_8->ftt_pid && VAR_5 == VAR_8->ftt_pc &&
      VAR_8->ftt_proc->ftpc_acount != 0)
   break;
 }






 if (VAR_8 == ((void*)0)) {
  FUNC_3(&VAR_2, &VAR_11);
  return;
 }

 for (VAR_10 = VAR_8->ftt_retids; VAR_10 != ((void*)0); VAR_10 = VAR_10->fti_next) {





  if (VAR_8->ftt_type != VAR_0 &&
      VAR_8->ftt_type != VAR_1 &&
      VAR_7 - VAR_10->fti_probe->ftp_faddr <
      VAR_10->fti_probe->ftp_fsize)
   continue;

  FUNC_1(VAR_10->fti_probe->ftp_id,
      VAR_5 - VAR_10->fti_probe->ftp_faddr,
      VAR_4->r_rax, VAR_4->r_rbx, 0, 0);
 }

 FUNC_3(&VAR_2, &VAR_11);
}
