
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vm86frame {int vmf_trapno; uintptr_t vmf_ip; uintptr_t vmf_sp; int vmf_eflags; scalar_t__ kernel_ds; scalar_t__ kernel_es; scalar_t__ kernel_fs; scalar_t__ vmf_ss; scalar_t__ vmf_cs; } ;
struct vm86_kernel {int vm86_eflags; int vm86_has_vme; } ;
struct TYPE_4__ {TYPE_1__* pcb_ext; } ;
struct TYPE_3__ {struct vm86_kernel ext_vm86; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,uintptr_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

void
FUNC_1(struct vm86frame *VAR_7)
{
 struct vm86_kernel *VAR_8;
 uint32_t *VAR_9;
 uint8_t *VAR_10;

 VAR_10 = (void *)0xa00;
 VAR_9 = (void *)(0x1000 - 2);
 if ((VAR_7->vmf_trapno & VAR_2) <= 0xff) {

  VAR_10[0] = VAR_1;
  VAR_10[1] = VAR_7->vmf_trapno & 0xff;
  VAR_10[2] = VAR_0;
  VAR_7->vmf_ip = (uintptr_t)VAR_10;
  VAR_7->vmf_cs = 0;
 } else {
  VAR_10[0] = VAR_0;
  VAR_9--;
  VAR_9[0] = FUNC_0(0, (uintptr_t)VAR_10);
 }
 VAR_7->vmf_sp = (uintptr_t)VAR_9;
 VAR_7->vmf_ss = 0;
 VAR_7->kernel_fs = VAR_7->kernel_es = VAR_7->kernel_ds = 0;
 VAR_7->vmf_eflags = VAR_4 | VAR_5 | VAR_3;

 VAR_8 = &VAR_6->pcb_ext->ext_vm86;
 if (!VAR_8->vm86_has_vme)
  VAR_8->vm86_eflags = VAR_7->vmf_eflags;
}
