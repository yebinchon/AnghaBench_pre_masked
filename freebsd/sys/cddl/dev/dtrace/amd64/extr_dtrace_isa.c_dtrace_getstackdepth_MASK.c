
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct amd64_frame {struct amd64_frame* f_frame; } ;
struct TYPE_2__ {scalar_t__ td_kstack; int td_kstack_pages; } ;


 int FUNC_0 (long) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(int VAR_2)
{
 int VAR_3 = 0;
 struct amd64_frame *VAR_4;
 vm_offset_t VAR_5;

 VAR_2++;
 VAR_5 = FUNC_1();
 VAR_4 = (struct amd64_frame *)VAR_5;
 VAR_3++;
 for(;;) {
  if (!FUNC_0((long) VAR_4))
   break;
  if (!FUNC_0((long) VAR_4->f_frame))
   break;
  VAR_3++;
  if (VAR_4->f_frame <= VAR_4 ||
      (vm_offset_t)VAR_4->f_frame >= VAR_1->td_kstack +
      VAR_1->td_kstack_pages * VAR_0)
   break;
  VAR_4 = VAR_4->f_frame;
 }
 if (VAR_3 < VAR_2)
  return 0;
 else
  return VAR_3 - VAR_2;
}
