
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct socket {int so_options; int * so_pcb; int so_fibnum; } ;
struct TYPE_5__ {int sp_protocol; } ;
struct rawcb {TYPE_2__ rcb_proto; } ;
typedef int * caddr_t ;
struct TYPE_6__ {int any_count; int ip6_count; int ip_count; } ;
struct TYPE_4__ {int p_fibnum; } ;




 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (struct rawcb*,int ) ;
 struct rawcb* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct socket*,int) ;
 int FUNC_6 (struct socket*) ;
 struct rawcb* FUNC_7 (struct socket*) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct rawcb *VAR_8;
 int VAR_9;

 FUNC_0(VAR_5->so_pcb == ((void*)0), ("rts_attach: so_pcb != NULL"));


 VAR_8 = FUNC_4(sizeof *VAR_8, VAR_0, VAR_1 | VAR_2);

 VAR_5->so_pcb = (caddr_t)VAR_8;
 VAR_5->so_fibnum = VAR_7->td_proc->p_fibnum;
 VAR_9 = FUNC_5(VAR_5, VAR_6);
 VAR_8 = FUNC_7(VAR_5);
 if (VAR_9) {
  VAR_5->so_pcb = ((void*)0);
  FUNC_3(VAR_8, VAR_0);
  return VAR_9;
 }
 FUNC_1();
 switch(VAR_8->rcb_proto.sp_protocol) {
 case 129:
  VAR_4.ip_count++;
  break;
 case 128:
  VAR_4.ip6_count++;
  break;
 }
 VAR_4.any_count++;
 FUNC_2();
 FUNC_6(VAR_5);
 VAR_5->so_options |= VAR_3;
 return 0;
}
