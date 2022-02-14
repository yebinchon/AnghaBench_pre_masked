
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_dr0; scalar_t__ pcb_dr1; scalar_t__ pcb_dr2; scalar_t__ pcb_dr3; scalar_t__ pcb_dr6; scalar_t__ pcb_dr7; int pcb_flags; } ;
struct dbreg {scalar_t__* dr; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

int
FUNC_9(struct thread *VAR_3, struct dbreg *VAR_4)
{
 struct pcb *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_4->dr[0]);
  FUNC_4(VAR_4->dr[1]);
  FUNC_5(VAR_4->dr[2]);
  FUNC_6(VAR_4->dr[3]);
  FUNC_7(VAR_4->dr[6]);
  FUNC_8(VAR_4->dr[7]);
 } else {






  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   if (FUNC_0(VAR_4->dr[7], VAR_6) == 0x02)
    return (VAR_0);
   if (FUNC_2(VAR_4->dr[7], VAR_6) == 0x02)
    return (VAR_0);
  }

  VAR_5 = VAR_3->td_pcb;
  if (FUNC_1(VAR_4->dr[7], 0)) {

   if (VAR_4->dr[0] >= VAR_2)
    return (VAR_0);
  }

  if (FUNC_1(VAR_4->dr[7], 1)) {

   if (VAR_4->dr[1] >= VAR_2)
    return (VAR_0);
  }

  if (FUNC_1(VAR_4->dr[7], 2)) {

   if (VAR_4->dr[2] >= VAR_2)
    return (VAR_0);
  }

  if (FUNC_1(VAR_4->dr[7], 3)) {

   if (VAR_4->dr[3] >= VAR_2)
    return (VAR_0);
  }

  VAR_5->pcb_dr0 = VAR_4->dr[0];
  VAR_5->pcb_dr1 = VAR_4->dr[1];
  VAR_5->pcb_dr2 = VAR_4->dr[2];
  VAR_5->pcb_dr3 = VAR_4->dr[3];
  VAR_5->pcb_dr6 = VAR_4->dr[6];
  VAR_5->pcb_dr7 = VAR_4->dr[7];

  VAR_5->pcb_flags |= VAR_1;
 }

 return (0);
}
