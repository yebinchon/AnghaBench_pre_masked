
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_file; int vm_flags; } ;
struct mm_struct {long total_vm; long cached_hole_size; } ;


 struct vm_area_struct* FUNC_0 (struct vm_area_struct*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*,int ,int ,long) ;
 long FUNC_5 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_6(struct mm_struct *VAR_1, struct vm_area_struct *VAR_2)
{
 unsigned int VAR_3 = VAR_0;

 FUNC_2(VAR_1);
 do {
  long VAR_4 = FUNC_5(VAR_2);

  VAR_1->total_vm -= VAR_4;
  if (FUNC_1(VAR_3))
   VAR_1->cached_hole_size += VAR_4;
  FUNC_4(VAR_1, VAR_2->vm_flags, VAR_2->vm_file, -VAR_4);
  VAR_2 = FUNC_0(VAR_2);
 } while (VAR_2);
 FUNC_3(VAR_1);
}
