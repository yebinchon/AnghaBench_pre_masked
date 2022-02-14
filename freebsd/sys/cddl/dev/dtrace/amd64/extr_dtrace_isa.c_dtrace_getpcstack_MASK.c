
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct amd64_frame {scalar_t__ f_retaddr; struct amd64_frame* f_frame; } ;
typedef scalar_t__ register_t ;
typedef scalar_t__ pc_t ;
struct TYPE_4__ {scalar_t__ td_kstack; int td_kstack_pages; } ;
struct TYPE_3__ {scalar_t__ cpu_dtrace_caller; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_1(pc_t *VAR_4, int VAR_5, int VAR_6,
    uint32_t *VAR_7)
{
 int VAR_8 = 0;
 register_t VAR_9;
 struct amd64_frame *VAR_10;
 vm_offset_t VAR_11;
 pc_t VAR_12 = (pc_t) VAR_3[VAR_1].cpu_dtrace_caller;

 if (VAR_7 != 0)
  VAR_4[VAR_8++] = (pc_t) VAR_7;

 VAR_6++;

 __asm __volatile("movq %%rbp,%0" : "=r" (VAR_9));

 VAR_10 = (struct amd64_frame *)VAR_9;
 while (VAR_8 < VAR_5) {
  if (!FUNC_0((long) VAR_10))
   break;

  VAR_11 = VAR_10->f_retaddr;

  if (!FUNC_0(VAR_11))
   break;

  if (VAR_6 > 0) {
   VAR_6--;
   if ((VAR_6 == 0) && (VAR_12 != 0)) {
    VAR_4[VAR_8++] = VAR_12;
   }
  }
  else {
   VAR_4[VAR_8++] = VAR_11;
  }

  if (VAR_10->f_frame <= VAR_10 ||
      (vm_offset_t)VAR_10->f_frame >= VAR_2->td_kstack +
      VAR_2->td_kstack_pages * VAR_0)
   break;
  VAR_10 = VAR_10->f_frame;
 }

 for (; VAR_8 < VAR_5; VAR_8++) {
  VAR_4[VAR_8] = 0;
 }
}
