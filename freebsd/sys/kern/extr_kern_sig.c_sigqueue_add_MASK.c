
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc {scalar_t__ p_pendingcnt; } ;
struct ksiginfo {int ksi_flags; int ksi_signo; TYPE_1__* ksi_sigq; } ;
struct TYPE_3__ {int sq_flags; int sq_signals; int sq_kill; int sq_ptrace; int sq_list; struct proc* sq_proc; } ;
typedef TYPE_1__ sigqueue_t ;
typedef struct ksiginfo ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,struct ksiginfo*,int ) ;
 int FUNC_3 (int *,struct ksiginfo*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_9 ;
 struct ksiginfo* FUNC_5 (int ) ;
 int FUNC_6 (struct ksiginfo*,struct ksiginfo*) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_7(sigqueue_t *VAR_14, int VAR_15, ksiginfo_t *VAR_16)
{
 struct proc *VAR_17 = VAR_14->sq_proc;
 struct ksiginfo *VAR_18;
 int VAR_19 = 0;

 FUNC_0(VAR_14->sq_flags & VAR_8, ("sigqueue not inited"));





 if (VAR_15 == VAR_6 || VAR_15 == VAR_7 || VAR_16 == ((void*)0)) {
  FUNC_1(VAR_14->sq_kill, VAR_15);
  goto out_set_bit;
 }


 if (VAR_16->ksi_flags & VAR_2) {
  if (VAR_16->ksi_flags & VAR_1)
   FUNC_2(&VAR_14->sq_list, VAR_16, VAR_9);
  else
   FUNC_3(&VAR_14->sq_list, VAR_16, VAR_9);
  VAR_16->ksi_sigq = VAR_14;
  goto out_set_bit;
 }

 if (FUNC_4(VAR_10 == ((void*)0))) {
  FUNC_1(VAR_14->sq_kill, VAR_15);
  goto out_set_bit;
 }

 if (VAR_17 != ((void*)0) && VAR_17->p_pendingcnt >= VAR_11) {
  VAR_13++;
  VAR_19 = VAR_0;
 } else if ((VAR_18 = FUNC_5(0)) == ((void*)0)) {
  VAR_12++;
  VAR_19 = VAR_0;
 } else {
  if (VAR_17 != ((void*)0))
   VAR_17->p_pendingcnt++;
  FUNC_6(VAR_16, VAR_18);
  VAR_18->ksi_signo = VAR_15;
  if (VAR_16->ksi_flags & VAR_1)
   FUNC_2(&VAR_14->sq_list, VAR_18, VAR_9);
  else
   FUNC_3(&VAR_14->sq_list, VAR_18, VAR_9);
  VAR_18->ksi_sigq = VAR_14;
 }

 if (VAR_19 != 0) {
  if ((VAR_16->ksi_flags & VAR_3) != 0) {
   FUNC_1(VAR_14->sq_ptrace, VAR_15);
   VAR_19 = 0;
   goto out_set_bit;
  } else if ((VAR_16->ksi_flags & VAR_5) != 0 ||
      (VAR_16->ksi_flags & VAR_4) == 0) {
   FUNC_1(VAR_14->sq_kill, VAR_15);
   VAR_19 = 0;
   goto out_set_bit;
  }
  return (VAR_19);
 }

out_set_bit:
 FUNC_1(VAR_14->sq_signals, VAR_15);
 return (VAR_19);
}
