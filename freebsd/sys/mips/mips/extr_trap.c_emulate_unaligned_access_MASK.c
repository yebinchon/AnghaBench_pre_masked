
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int pc; int badvaddr; int cause; } ;
struct thread {scalar_t__ td_tid; } ;
struct proc {int p_comm; scalar_t__ p_pid; } ;
typedef int register_t ;
typedef int intmax_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct trapframe*,int,int ,int ) ;
 int * VAR_1 ;
 struct proc* VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_2 (int ,char*,int ,long,int ,long,int ,int ) ;
 int FUNC_3 (struct trapframe*,int,int,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct trapframe *VAR_7, int VAR_8)
{
 register_t VAR_9;
 int VAR_10 = 0;
 struct thread *VAR_11 = VAR_3;
 struct proc *VAR_12 = VAR_2;

 VAR_9 = VAR_7->pc + (FUNC_0(VAR_7->cause) ? 4 : 0);




 if (!((VAR_9 & 3) || (VAR_9 == VAR_7->badvaddr))) {
  VAR_10 = FUNC_3(VAR_7,
      VAR_8, VAR_7->badvaddr, VAR_9);

  if (VAR_10) {
   if (FUNC_0(VAR_7->cause))
    VAR_7->pc = FUNC_1(VAR_7, VAR_7->pc,
        0, 0);
   else
    VAR_7->pc += 4;

   if (FUNC_4(&VAR_5,
       &VAR_4, VAR_6)) {

    FUNC_2(VAR_0,
        "Unaligned %s: pid=%ld (%s), tid=%ld, "
        "pc=%#jx, badvaddr=%#jx\n",
        VAR_1[VAR_10 - 1],
        (long) VAR_12->p_pid,
        VAR_12->p_comm,
        (long) VAR_11->td_tid,
        (intmax_t)VAR_9,
        (intmax_t)VAR_7->badvaddr);
   }
  }
 }
 return VAR_10;
}
