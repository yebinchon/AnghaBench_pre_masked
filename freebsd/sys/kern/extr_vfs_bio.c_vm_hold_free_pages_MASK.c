
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_offset_t ;
struct buf {int b_npages; int ** b_pages; scalar_t__ b_data; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct buf *VAR_1, int VAR_2)
{
 vm_offset_t VAR_3;
 vm_page_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_1);

 VAR_3 = FUNC_2((vm_offset_t)VAR_1->b_data + VAR_2);
 VAR_6 = (VAR_3 - FUNC_3((vm_offset_t)VAR_1->b_data)) >> VAR_0;
 if (VAR_1->b_npages > VAR_6)
  FUNC_1(VAR_3, VAR_1->b_npages - VAR_6);
 for (VAR_5 = VAR_6; VAR_5 < VAR_1->b_npages; VAR_5++) {
  VAR_4 = VAR_1->b_pages[VAR_5];
  VAR_1->b_pages[VAR_5] = ((void*)0);
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
 }
 VAR_1->b_npages = VAR_6;
}
