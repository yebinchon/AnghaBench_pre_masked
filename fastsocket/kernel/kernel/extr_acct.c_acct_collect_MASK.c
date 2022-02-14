
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {struct vm_area_struct* vm_next; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct pacct_struct {unsigned long ac_mem; long ac_exitcode; int ac_majflt; int ac_minflt; void* ac_stime; void* ac_utime; int ac_flag; } ;
struct TYPE_9__ {int flags; TYPE_3__* sighand; scalar_t__ maj_flt; scalar_t__ min_flt; int stime; int utime; TYPE_2__* mm; TYPE_1__* signal; } ;
struct TYPE_8__ {int siglock; } ;
struct TYPE_7__ {int mmap_sem; struct vm_area_struct* mmap; } ;
struct TYPE_6__ {struct pacct_struct pacct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*,int ) ;
 TYPE_4__* VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(long VAR_9, int VAR_10)
{
 struct pacct_struct *VAR_11 = &VAR_8->signal->pacct;
 unsigned long VAR_12 = 0;

 if (VAR_10 && VAR_8->mm) {
  struct vm_area_struct *VAR_13;
  FUNC_1(&VAR_8->mm->mmap_sem);
  VAR_13 = VAR_8->mm->mmap;
  while (VAR_13) {
   VAR_12 += VAR_13->vm_end - VAR_13->vm_start;
   VAR_13 = VAR_13->vm_next;
  }
  FUNC_5(&VAR_8->mm->mmap_sem);
 }

 FUNC_2(&VAR_8->sighand->siglock);
 if (VAR_10)
  VAR_11->ac_mem = VAR_12 / 1024;
 if (FUNC_4(VAR_8)) {
  VAR_11->ac_exitcode = VAR_9;
  if (VAR_8->flags & VAR_5)
   VAR_11->ac_flag |= VAR_1;
 }
 if (VAR_8->flags & VAR_7)
  VAR_11->ac_flag |= VAR_2;
 if (VAR_8->flags & VAR_4)
  VAR_11->ac_flag |= VAR_0;
 if (VAR_8->flags & VAR_6)
  VAR_11->ac_flag |= VAR_3;
 VAR_11->ac_utime = FUNC_0(VAR_11->ac_utime, VAR_8->utime);
 VAR_11->ac_stime = FUNC_0(VAR_11->ac_stime, VAR_8->stime);
 VAR_11->ac_minflt += VAR_8->min_flt;
 VAR_11->ac_majflt += VAR_8->maj_flt;
 FUNC_3(&VAR_8->sighand->siglock);
}
