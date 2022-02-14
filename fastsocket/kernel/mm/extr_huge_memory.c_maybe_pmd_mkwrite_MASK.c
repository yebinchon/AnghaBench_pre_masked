
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
typedef int pmd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline pmd_t FUNC_2(pmd_t VAR_1, struct vm_area_struct *VAR_2)
{
 if (FUNC_0(VAR_2->vm_flags & VAR_0))
  VAR_1 = FUNC_1(VAR_1);
 return VAR_1;
}
