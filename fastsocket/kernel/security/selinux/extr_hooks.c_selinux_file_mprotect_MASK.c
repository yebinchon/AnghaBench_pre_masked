
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; scalar_t__ vm_start; scalar_t__ vm_end; int vm_file; scalar_t__ anon_vma; TYPE_1__* vm_mm; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {scalar_t__ start_brk; scalar_t__ brk; scalar_t__ start_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cred const*,struct cred const*,int ) ;
 int VAR_6 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cred const*,int ,int ) ;
 int FUNC_4 (int ,unsigned long,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_8,
     unsigned long VAR_9,
     unsigned long VAR_10)
{
 const struct cred *VAR_11 = FUNC_1();

 if (VAR_7)
  VAR_10 = VAR_9;


 if ((VAR_10 & VAR_3) && !(VAR_8->vm_flags & VAR_4)) {
  int VAR_12 = 0;
  if (VAR_8->vm_start >= VAR_8->vm_mm->start_brk &&
      VAR_8->vm_end <= VAR_8->vm_mm->brk) {
   VAR_12 = FUNC_0(VAR_11, VAR_11, VAR_1);
  } else if (!VAR_8->vm_file &&
      VAR_8->vm_start <= VAR_8->vm_mm->start_stack &&
      VAR_8->vm_end >= VAR_8->vm_mm->start_stack) {
   VAR_12 = FUNC_2(VAR_6, VAR_2);
  } else if (VAR_8->vm_file && VAR_8->anon_vma) {







   VAR_12 = FUNC_3(VAR_11, VAR_8->vm_file, VAR_0);
  }
  if (VAR_12)
   return VAR_12;
 }


 return FUNC_4(VAR_8->vm_file, VAR_10, VAR_8->vm_flags&VAR_5);
}
