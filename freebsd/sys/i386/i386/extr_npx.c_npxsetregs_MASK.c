
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int en_mxcsr; } ;
struct TYPE_4__ {TYPE_1__ sv_env; } ;
union savefpu {TYPE_2__ sv_xmm; } ;
struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pcb*) ;
 struct thread* FUNC_1 (int ) ;
 int FUNC_2 (union savefpu*,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct thread*) ;
 int VAR_6 ;
 int FUNC_8 (struct thread*,char*,size_t) ;
 int FUNC_9 (struct thread*) ;

int
FUNC_10(struct thread *VAR_7, union savefpu *VAR_8, char *VAR_9,
 size_t VAR_10)
{
 struct pcb *VAR_11;
 int VAR_12;

 if (!VAR_6)
  return (VAR_0);

 if (VAR_3)
  VAR_8->sv_xmm.sv_env.en_mxcsr &= VAR_4;
 VAR_11 = VAR_7->td_pcb;
 VAR_12 = 0;
 FUNC_3();
 if (VAR_7 == FUNC_1(VAR_5) && FUNC_0(VAR_11)) {
  VAR_12 = FUNC_8(VAR_7, VAR_9, VAR_10);
  if (VAR_12 == 0) {
   if (!VAR_3)
    FUNC_5();
   FUNC_2(VAR_8, FUNC_7(VAR_7), sizeof(*VAR_8));
   FUNC_6(FUNC_7(VAR_7));
   VAR_11->pcb_flags |= VAR_2 | VAR_1;
  }
 } else {
  VAR_12 = FUNC_8(VAR_7, VAR_9, VAR_10);
  if (VAR_12 == 0) {
   FUNC_2(VAR_8, FUNC_7(VAR_7), sizeof(*VAR_8));
   FUNC_9(VAR_7);
  }
 }
 FUNC_4();
 return (VAR_12);
}
