
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct page {int _mapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_6 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(struct page *VAR_2,
 struct vm_area_struct *VAR_3, unsigned long VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_7(&VAR_2->_mapcount);
 if (VAR_6) {
  if (!FUNC_2(VAR_2))
   FUNC_4(VAR_2, VAR_0);
  else
   FUNC_4(VAR_2,
           VAR_1);
 }
 if (FUNC_8(FUNC_0(VAR_2)))
  return;

 FUNC_3(!FUNC_1(VAR_2));
 FUNC_3(VAR_4 < VAR_3->vm_start || VAR_4 >= VAR_3->vm_end);
 if (VAR_6)
  FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
 else
  FUNC_5(VAR_2, VAR_3, VAR_4);
}
