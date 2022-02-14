
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int unmap_area; int get_unmapped_area; int mmap_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct mm_struct *VAR_3)
{
 VAR_3->mmap_base = VAR_0;
 VAR_3->get_unmapped_area = VAR_1;
 VAR_3->unmap_area = VAR_2;
}
