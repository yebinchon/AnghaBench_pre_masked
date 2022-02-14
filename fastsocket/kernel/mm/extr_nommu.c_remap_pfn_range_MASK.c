
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_pgoff; } ;
typedef int pgprot_t ;


 int VAR_0 ;

int FUNC_0(struct vm_area_struct *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, unsigned long VAR_4, pgprot_t VAR_5)
{
 VAR_1->vm_start = VAR_1->vm_pgoff << VAR_0;
 return 0;
}
