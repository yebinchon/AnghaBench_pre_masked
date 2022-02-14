
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct pcb* td_pcb; } ;
struct TYPE_2__ {int en_mxcsr; } ;
struct savefpu {TYPE_1__ sv_env; } ;
struct pcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcb*) ;
 struct thread* FUNC_1 (int ) ;
 int FUNC_2 (struct savefpu*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct thread*,char*,size_t) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct pcb*,int) ;

int
FUNC_10(struct thread *VAR_4, struct savefpu *VAR_5, char *VAR_6,
    size_t VAR_7)
{
 struct pcb *VAR_8;
 int VAR_9;

 VAR_5->sv_env.en_mxcsr &= VAR_2;
 VAR_8 = VAR_4->td_pcb;
 VAR_9 = 0;
 FUNC_3();
 if (VAR_4 == FUNC_1(VAR_3) && FUNC_0(VAR_8)) {
  VAR_9 = FUNC_6(VAR_4, VAR_6, VAR_7);
  if (VAR_9 == 0) {
   FUNC_2(VAR_5, FUNC_8(VAR_4), sizeof(*VAR_5));
   FUNC_5(FUNC_8(VAR_4));
   FUNC_9(VAR_8, VAR_0 |
       VAR_1);
  }
 } else {
  VAR_9 = FUNC_6(VAR_4, VAR_6, VAR_7);
  if (VAR_9 == 0) {
   FUNC_2(VAR_5, FUNC_8(VAR_4), sizeof(*VAR_5));
   FUNC_7(VAR_4);
  }
 }
 FUNC_4();
 return (VAR_9);
}
