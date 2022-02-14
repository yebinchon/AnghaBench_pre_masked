
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; struct pcb* td_pcb; } ;
struct pcb {int pcb_gsbase; int pcb_fsbase; } ;
typedef int rv ;
typedef int register_t ;
struct TYPE_4__ {TYPE_1__* p_sysent; } ;
struct TYPE_3__ {int sv_maxuser; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (struct thread*,int,void*,int) ;
 int FUNC_4 (struct thread*,int,int ) ;
 int FUNC_5 (struct thread*,int,void*,int) ;
 struct thread* VAR_3 ;
 int FUNC_6 (struct pcb*) ;

int
FUNC_7(struct thread *VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{
 register_t *VAR_8, VAR_9;
 struct pcb *VAR_10;
 int VAR_11;







 if (VAR_5 == VAR_1 + 0)
  VAR_5 = 132;
 if (VAR_5 == VAR_1 + 1)
  VAR_5 = 128;

 switch (VAR_5) {
 case 132:
 case 128:
 case 133:
 case 134:
 case 129:
  VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
  break;

 case 136:
 case 135:
  VAR_10 = VAR_4->td_pcb;
  if (VAR_4 == VAR_3)
   FUNC_6(VAR_10);
  VAR_8 = VAR_5 == 136 ? &VAR_10->pcb_fsbase : &VAR_10->pcb_gsbase;
  VAR_11 = FUNC_2(VAR_8, VAR_6, sizeof(*VAR_8));
  break;

 case 131:
 case 130:
  VAR_11 = FUNC_1(VAR_6, &VAR_9, sizeof(VAR_9));
  if (VAR_11 != 0)
   break;
  if (VAR_9 >= VAR_4->td_proc->p_sysent->sv_maxuser) {
   VAR_11 = VAR_0;
   break;
  }
  FUNC_4(VAR_4, VAR_5, VAR_9);
  break;

 default:
  VAR_11 = VAR_0;
  break;
 }

 return (VAR_11);
}
