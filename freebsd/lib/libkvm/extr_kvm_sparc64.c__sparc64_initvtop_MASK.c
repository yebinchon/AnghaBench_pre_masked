
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vmstate {int dh_nregions; int vm_nregions; scalar_t__ vm_tsb_off; void* dh_tsb_size; void* dh_tsb_pa; struct vmstate* vm_regions; void* dh_tsb_mask; void* vm_tsb_mask; void* dr_offs; void* dr_size; void* dr_pa; void* dh_hdr_size; } ;
struct sparc64_dump_reg {int dh_nregions; int vm_nregions; scalar_t__ vm_tsb_off; void* dh_tsb_size; void* dh_tsb_pa; struct sparc64_dump_reg* vm_regions; void* dh_tsb_mask; void* vm_tsb_mask; void* dr_offs; void* dr_size; void* dr_pa; void* dh_hdr_size; } ;
struct sparc64_dump_hdr {int dh_nregions; int vm_nregions; scalar_t__ vm_tsb_off; void* dh_tsb_size; void* dh_tsb_pa; struct sparc64_dump_hdr* vm_regions; void* dh_tsb_mask; void* vm_tsb_mask; void* dr_offs; void* dr_size; void* dr_pa; void* dh_hdr_size; } ;
struct TYPE_6__ {int program; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
typedef int hdr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 struct vmstate* FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (struct vmstate*,void*,void*) ;
 int FUNC_3 (TYPE_1__*,int,struct vmstate*,size_t) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct vmstate*) ;
 int FUNC_7 (struct vmstate*,int,int,int ) ;

__attribute__((used)) static int
FUNC_8(kvm_t *VAR_2)
{
 struct sparc64_dump_hdr VAR_3;
 struct sparc64_dump_reg *VAR_4;
 struct vmstate *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_5 = (struct vmstate *)FUNC_1(VAR_2, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_2->program, "cannot allocate vm");
  return (-1);
 }
 VAR_2->vmst = VAR_5;

 if (!FUNC_3(VAR_2, 0, &VAR_3, sizeof(VAR_3)))
  goto fail_vm;
 VAR_3.dh_hdr_size = FUNC_5(VAR_3.dh_hdr_size);
 VAR_3.dh_tsb_pa = FUNC_5(VAR_3.dh_tsb_pa);
 VAR_3.dh_tsb_size = FUNC_5(VAR_3.dh_tsb_size);
 VAR_3.dh_tsb_mask = FUNC_5(VAR_3.dh_tsb_mask);
 VAR_3.dh_nregions = FUNC_4(VAR_3.dh_nregions);

 VAR_6 = VAR_3.dh_nregions * sizeof(*VAR_4);
 VAR_4 = FUNC_1(VAR_2, VAR_6);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_2->program, "cannot allocate regions");
  goto fail_vm;
 }
 if (!FUNC_3(VAR_2, sizeof(VAR_3), VAR_4, VAR_6))
  goto fail_regs;
 for (VAR_7 = 0; VAR_7 < VAR_3.dh_nregions; VAR_7++) {
  VAR_4[VAR_7].dr_pa = FUNC_5(VAR_4[VAR_7].dr_pa);
  VAR_4[VAR_7].dr_size = FUNC_5(VAR_4[VAR_7].dr_size);
  VAR_4[VAR_7].dr_offs = FUNC_5(VAR_4[VAR_7].dr_offs);
 }
 FUNC_7(VAR_4, VAR_3.dh_nregions, sizeof(*VAR_4), VAR_1);

 VAR_5->vm_tsb_mask = VAR_3.dh_tsb_mask;
 VAR_5->vm_regions = VAR_4;
 VAR_5->vm_nregions = VAR_3.dh_nregions;
 VAR_5->vm_tsb_off = FUNC_2(VAR_5, VAR_3.dh_tsb_pa, VAR_3.dh_tsb_size);
 if (VAR_5->vm_tsb_off == VAR_0) {
  FUNC_0(VAR_2, VAR_2->program, "tsb not found in dump");
  goto fail_regs;
 }
 return (0);

fail_regs:
 FUNC_6(VAR_4);
fail_vm:
 FUNC_6(VAR_5);
 return (-1);
}
