
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ u_long ;
typedef int u_int64_t ;
struct user_segment_descriptor {int dummy; } ;
struct system_segment_descriptor {int dummy; } ;
struct region_descriptor {int rd_limit; scalar_t__ rd_base; } ;
struct TYPE_5__ {long tss_ist1; long tss_ist2; long tss_ist3; long tss_ist4; scalar_t__ tss_rsp0; scalar_t__ tss_iobase; } ;
struct pcpu {int pc_pti_rsp0; int pc_pcid_gen; TYPE_1__ pc_common_tss; scalar_t__ pc_pcid_next; struct system_segment_descriptor* pc_ldt; struct user_segment_descriptor* pc_gs32p; struct user_segment_descriptor* pc_fs32p; struct system_segment_descriptor* pc_tss; struct user_segment_descriptor* pc_gdt; int pc_pti_stack; scalar_t__ pc_rsp0; TYPE_1__* pc_tssp; scalar_t__ pc_curthread; struct pcpu* pc_prvspace; int pc_apic_id; } ;
struct nmi_pcpu {void* np_pcpu; } ;
struct amd64tss {int dummy; } ;
typedef void* register_t ;
typedef int gdt ;
struct TYPE_6__ {long ssd_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 struct pcpu* VAR_16 ;
 int FUNC_1 () ;
 int VAR_17 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 TYPE_2__* VAR_23 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct region_descriptor*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int * VAR_24 ;
 int VAR_25 ;
 int * VAR_26 ;
 int FUNC_11 (struct pcpu*,int,int) ;
 int VAR_27 ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_2__*,struct user_segment_descriptor*) ;
 int FUNC_14 (TYPE_2__*,struct system_segment_descriptor*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int) ;

void
FUNC_17(void)
{
 struct pcpu *VAR_28;
 struct nmi_pcpu *VAR_29;
 struct user_segment_descriptor *VAR_30;
 struct region_descriptor VAR_31;
 u_int64_t VAR_32;
 int VAR_33, VAR_34, VAR_35;


 VAR_33 = VAR_18;


 FUNC_15(VAR_33);


 VAR_28 = &VAR_16[VAR_33];


 FUNC_11(VAR_28, VAR_33, sizeof(struct pcpu));
 FUNC_3(VAR_22, VAR_33);
 VAR_28->pc_apic_id = VAR_19[VAR_33];
 VAR_28->pc_prvspace = VAR_28;
 VAR_28->pc_curthread = 0;
 VAR_28->pc_tssp = &VAR_28->pc_common_tss;
 VAR_28->pc_rsp0 = 0;
 VAR_28->pc_pti_rsp0 = (((vm_offset_t)&VAR_28->pc_pti_stack +
     VAR_13 * sizeof(uint64_t)) & ~0xful);
 VAR_30 = VAR_28->pc_gdt;
 VAR_28->pc_tss = (struct system_segment_descriptor *)&VAR_30[VAR_3];
 VAR_28->pc_fs32p = &VAR_30[VAR_4];
 VAR_28->pc_gs32p = &VAR_30[VAR_5];
 VAR_28->pc_ldt = (struct system_segment_descriptor *)&VAR_30[VAR_6];

 VAR_28->pc_pcid_next = VAR_14 + 2;
 VAR_28->pc_pcid_gen = 1;


 VAR_28->pc_common_tss = VAR_16[0].pc_common_tss;
 VAR_28->pc_common_tss.tss_iobase = sizeof(struct amd64tss) +
     VAR_7;
 VAR_28->pc_common_tss.tss_rsp0 = 0;

 VAR_28->pc_common_tss.tss_ist1 = (long)&VAR_21[VAR_12];


 VAR_29 = ((struct nmi_pcpu *) &VAR_26[VAR_12]) - 1;
 VAR_28->pc_common_tss.tss_ist2 = (long)VAR_29;


 VAR_29 = ((struct nmi_pcpu *) &VAR_24[VAR_12]) - 1;
 VAR_28->pc_common_tss.tss_ist3 = (long)VAR_29;


 VAR_29 = ((struct nmi_pcpu *) &VAR_20[VAR_12]) - 1;
 VAR_28->pc_common_tss.tss_ist4 = (long)VAR_29;


 VAR_23[VAR_3].ssd_base = (long)&VAR_28->pc_common_tss;
 for (VAR_35 = 0; VAR_35 < VAR_11; VAR_35++) {
  if (VAR_35 != VAR_3 && VAR_35 != VAR_3 + 1 &&
      VAR_35 != VAR_6 && VAR_35 != VAR_6 + 1)
   FUNC_13(&VAR_23[VAR_35], &VAR_30[VAR_35]);
 }
 FUNC_14(&VAR_23[VAR_3],
     (struct system_segment_descriptor *)&VAR_30[VAR_3]);
 VAR_31.rd_limit = VAR_11 * sizeof(VAR_30[0]) - 1;
 VAR_31.rd_base = (u_long)VAR_30;
 FUNC_7(&VAR_31);


 VAR_29 = ((struct nmi_pcpu *) &VAR_26[VAR_12]) - 1;
 VAR_29->np_pcpu = (register_t)VAR_28;


 VAR_29 = ((struct nmi_pcpu *) &VAR_24[VAR_12]) - 1;
 VAR_29->np_pcpu = (register_t)VAR_28;


 VAR_29 = ((struct nmi_pcpu *) &VAR_20[VAR_12]) - 1;
 VAR_29->np_pcpu = (register_t)VAR_28;

 FUNC_16(VAR_8, 0);
 FUNC_16(VAR_9, (u_int64_t)VAR_28);
 FUNC_16(VAR_10, (u_int64_t)VAR_28);
 FUNC_4();

 FUNC_8(&VAR_27);

 VAR_34 = FUNC_0(VAR_3, VAR_15);
 FUNC_10(VAR_34);






 VAR_32 = FUNC_12();
 VAR_32 &= ~(VAR_0 | VAR_2 | VAR_1);
 FUNC_9(VAR_32);

 FUNC_1();


 VAR_25++;


 while (FUNC_2(&VAR_17) == 0)
  FUNC_5();

 FUNC_6();
}
