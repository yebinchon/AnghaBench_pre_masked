
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int last_index; struct vm_area_struct* nonlinear_vma; } ;
struct vm_area_struct {int vm_flags; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,struct zap_details*) ;

__attribute__((used)) static long FUNC_2(struct vm_area_struct * VAR_6,
        struct vm_area_struct ** VAR_7,
        unsigned long VAR_8, unsigned long VAR_9)
{
 *VAR_7 = VAR_6;
 if (VAR_6->vm_flags & (VAR_3|VAR_2|VAR_5))
  return -VAR_0;

 if (FUNC_0(VAR_6->vm_flags & VAR_4)) {
  struct zap_details VAR_10 = {
   .nonlinear_vma = VAR_6,
   .last_index = VAR_1,
  };
  FUNC_1(VAR_6, VAR_8, VAR_9 - VAR_8, &VAR_10);
 } else
  FUNC_1(VAR_6, VAR_8, VAR_9 - VAR_8, ((void*)0));
 return 0;
}
