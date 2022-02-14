
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; scalar_t__ vm_file; int vm_flags; scalar_t__ vm_pgoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_4, struct vm_area_struct *VAR_5)
{
 return VAR_4->vm_end == VAR_5->vm_start &&
  FUNC_0(FUNC_1(VAR_4), FUNC_1(VAR_5)) &&
  VAR_4->vm_file == VAR_5->vm_file &&
  !((VAR_4->vm_flags ^ VAR_5->vm_flags) & ~(VAR_2|VAR_3|VAR_1)) &&
  VAR_5->vm_pgoff == VAR_4->vm_pgoff + ((VAR_5->vm_start - VAR_4->vm_start) >> VAR_0);
}
