
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct thread {TYPE_3__* td_pcb; } ;
struct soft_segment_descriptor {int member_1; int member_4; unsigned int ssd_base; unsigned int ssd_limit; int member_8; int member_7; int member_6; int member_5; int member_3; int member_2; int member_0; } ;
struct TYPE_5__ {int tss_ioopt; int * tss_esp0; int tss_ss0; } ;
struct TYPE_4__ {void* vm86_intmap; } ;
struct pcb_ext {int ext_tssd; TYPE_2__ ext_tss; TYPE_1__ ext_vm86; void* ext_iomap; } ;
typedef void* caddr_t ;
struct TYPE_6__ {struct pcb_ext* pcb_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 struct thread* VAR_8 ;
 int FUNC_7 (int ) ;
 struct pcb_ext* FUNC_8 (int,int) ;
 int VAR_9 ;
 int FUNC_9 (struct soft_segment_descriptor*,int *) ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_10(struct thread *VAR_12)
{
 int VAR_13, VAR_14;
 u_long *VAR_15;
 struct pcb_ext *VAR_16;
 struct soft_segment_descriptor VAR_17 = {
  0,
  FUNC_6(VAR_2 + 1) - 1,
  VAR_6,
  0,
  1,
  0, 0,
  0,
  0
 };

 VAR_16 = FUNC_8(FUNC_6(VAR_2 + 1), VAR_3 | VAR_4);

 VAR_16->ext_tss.tss_ss0 = FUNC_0(VAR_0, VAR_7);





 VAR_14 = VAR_5 - 16;
 VAR_16->ext_tss.tss_ioopt =
     (VAR_14 - ((unsigned)&VAR_16->ext_tss - (unsigned)VAR_16)) << 16;
 VAR_16->ext_iomap = (caddr_t)VAR_16 + VAR_14;
 VAR_16->ext_vm86.vm86_intmap = (caddr_t)VAR_16 + VAR_14 - 32;

 VAR_15 = (u_long *)VAR_16->ext_vm86.vm86_intmap;
 for (VAR_13 = 0; VAR_13 < (FUNC_6(VAR_2) + 32 + 16) / sizeof(u_long); VAR_13++)
  *VAR_15++ = ~0;

 VAR_17.ssd_base = (unsigned)&VAR_16->ext_tss;
 VAR_17.ssd_limit -= ((unsigned)&VAR_16->ext_tss - (unsigned)VAR_16);
 FUNC_9(&VAR_17, &VAR_16->ext_tssd);

 FUNC_1(VAR_12 == VAR_8, ("giving TSS to !curthread"));
 FUNC_1(VAR_12->td_pcb->pcb_ext == 0, ("already have a TSS!"));


 FUNC_4();
 VAR_16->ext_tss.tss_esp0 = FUNC_2(VAR_10);
 VAR_12->td_pcb->pcb_ext = VAR_16;
 FUNC_3(VAR_9, 1);
 *FUNC_2(VAR_11) = VAR_16->ext_tssd;
 FUNC_7(FUNC_0(VAR_1, VAR_7));
 FUNC_5();

 return 0;
}
