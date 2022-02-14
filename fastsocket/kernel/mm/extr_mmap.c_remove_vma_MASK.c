
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_mm; scalar_t__ vm_file; TYPE_1__* vm_ops; struct vm_area_struct* vm_next; } ;
struct TYPE_2__ {int (* close ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct vm_area_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_area_struct*) ;
 int VAR_1 ;
 int FUNC_6 (struct vm_area_struct*) ;

__attribute__((used)) static struct vm_area_struct *FUNC_7(struct vm_area_struct *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vm_next;

 FUNC_2();
 if (VAR_2->vm_ops && VAR_2->vm_ops->close)
  VAR_2->vm_ops->close(VAR_2);
 if (VAR_2->vm_file) {
  FUNC_0(VAR_2->vm_file);
  if (VAR_2->vm_flags & VAR_0)
   FUNC_4(VAR_2->vm_mm);
 }
 FUNC_3(FUNC_6(VAR_2));
 FUNC_1(VAR_1, VAR_2);
 return VAR_3;
}
