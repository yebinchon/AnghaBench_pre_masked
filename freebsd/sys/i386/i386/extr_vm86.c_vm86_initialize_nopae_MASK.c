
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct vm86frame {int dummy; } ;
struct TYPE_4__ {int tss_ioopt; int tss_ss0; void* tss_esp0; } ;
struct TYPE_3__ {int vm86_has_vme; scalar_t__ vm86_intmap; } ;
struct pcb_ext {int new_ptd; int ext_tssd; TYPE_2__ ext_tss; TYPE_1__ ext_vm86; scalar_t__ ext_iomap; struct pcb_ext* pcb_ext; int pcb_flags; void* pgtable_va; void* vm86_frame; } ;
struct vm86_layout_nopae {int vml_iomap_trailer; scalar_t__ vml_intmap; scalar_t__ vml_iomap; struct pcb_ext vml_ext; struct pcb_ext vml_pcb; } ;
struct vm86_layout {int dummy; } ;
struct soft_segment_descriptor {int member_4; int ssd_base; scalar_t__ ssd_limit; int member_8; int member_7; int member_6; int member_5; int member_3; int member_2; int member_1; int member_0; } ;
struct pcb {int new_ptd; int ext_tssd; TYPE_2__ ext_tss; TYPE_1__ ext_vm86; scalar_t__ ext_iomap; struct pcb* pcb_ext; int pcb_flags; void* pgtable_va; void* vm86_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct pcb_ext*,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct soft_segment_descriptor*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 struct pcb_ext* VAR_17 ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_18;
 u_int *VAR_19;
 struct vm86_layout_nopae *VAR_20;
 struct pcb *VAR_21;
 struct pcb_ext *VAR_22;
 struct soft_segment_descriptor VAR_23 = {
  0,
  0,
  VAR_10,
  0,
  1,
  0, 0,
  0,
  0
 };

 VAR_20 = (struct vm86_layout_nopae *)VAR_16;
 VAR_21 = &VAR_20->vml_pcb;
 VAR_22 = &VAR_20->vml_ext;

 FUNC_4(&VAR_14, "vm86 lock", ((void*)0), VAR_5);

 FUNC_1(VAR_21, sizeof(struct pcb));
 VAR_21->new_ptd = VAR_15 | VAR_9 | VAR_7 | VAR_8;
 VAR_21->vm86_frame = VAR_16 - sizeof(struct vm86frame);
 VAR_21->pgtable_va = VAR_16;
 VAR_21->pcb_flags = VAR_6;
 VAR_21->pcb_ext = VAR_22;

 FUNC_1(VAR_22, sizeof(struct pcb_ext));
 VAR_22->ext_tss.tss_esp0 = VAR_16;
 VAR_22->ext_tss.tss_ss0 = FUNC_0(VAR_2, VAR_11);
 VAR_22->ext_tss.tss_ioopt =
  ((u_int)VAR_20->vml_iomap - (u_int)&VAR_22->ext_tss) << 16;
 VAR_22->ext_iomap = VAR_20->vml_iomap;
 VAR_22->ext_vm86.vm86_intmap = VAR_20->vml_intmap;

 if (VAR_13 & VAR_0)
  VAR_22->ext_vm86.vm86_has_vme = (FUNC_5() & VAR_1 ? 1 : 0);

 VAR_19 = (u_int *)VAR_22->ext_vm86.vm86_intmap;
 for (VAR_18 = 0; VAR_18 < (VAR_3 + VAR_4) / sizeof(u_int); VAR_18++)
  *VAR_19++ = 0;
 VAR_20->vml_iomap_trailer = 0xff;

 VAR_23.ssd_base = (u_int)&VAR_22->ext_tss;
 VAR_23.ssd_limit = VAR_12 - 1;
 FUNC_6(&VAR_23, &VAR_22->ext_tssd);

 VAR_17 = VAR_21;
}
