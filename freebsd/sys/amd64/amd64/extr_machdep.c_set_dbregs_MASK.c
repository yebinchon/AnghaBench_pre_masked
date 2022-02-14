
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct pcb* td_pcb; TYPE_1__* td_frame; } ;
struct pcb {int pcb_dr0; int pcb_dr1; int pcb_dr2; int pcb_dr3; int pcb_dr6; int pcb_dr7; } ;
struct dbreg {int* dr; } ;
struct TYPE_2__ {scalar_t__ tf_cs; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct pcb*,int ) ;

int
FUNC_10(struct thread *VAR_5, struct dbreg *VAR_6)
{
 struct pcb *VAR_7;
 int VAR_8;

 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_6->dr[0]);
  FUNC_4(VAR_6->dr[1]);
  FUNC_5(VAR_6->dr[2]);
  FUNC_6(VAR_6->dr[3]);
  FUNC_7(VAR_6->dr[6]);
  FUNC_8(VAR_6->dr[7]);
 } else {







  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   if (FUNC_0(VAR_6->dr[7], VAR_8) == 0x02)
    return (VAR_1);
   if (VAR_5->td_frame->tf_cs == VAR_4 &&
       FUNC_2(VAR_6->dr[7], VAR_8) == VAR_0)
    return (VAR_1);
  }
  if ((VAR_6->dr[6] & 0xffffffff00000000ul) != 0 ||
      (VAR_6->dr[7] & 0xffffffff00000000ul) != 0)
   return (VAR_1);

  VAR_7 = VAR_5->td_pcb;
  if (FUNC_1(VAR_6->dr[7], 0)) {

   if (VAR_6->dr[0] >= VAR_3)
    return (VAR_1);
  }
  if (FUNC_1(VAR_6->dr[7], 1)) {

   if (VAR_6->dr[1] >= VAR_3)
    return (VAR_1);
  }
  if (FUNC_1(VAR_6->dr[7], 2)) {

   if (VAR_6->dr[2] >= VAR_3)
    return (VAR_1);
  }
  if (FUNC_1(VAR_6->dr[7], 3)) {

   if (VAR_6->dr[3] >= VAR_3)
    return (VAR_1);
  }

  VAR_7->pcb_dr0 = VAR_6->dr[0];
  VAR_7->pcb_dr1 = VAR_6->dr[1];
  VAR_7->pcb_dr2 = VAR_6->dr[2];
  VAR_7->pcb_dr3 = VAR_6->dr[3];
  VAR_7->pcb_dr6 = VAR_6->dr[6];
  VAR_7->pcb_dr7 = VAR_6->dr[7];

  FUNC_9(VAR_7, VAR_2);
 }

 return (0);
}
