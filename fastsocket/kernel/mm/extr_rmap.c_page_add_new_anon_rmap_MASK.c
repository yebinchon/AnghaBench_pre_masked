
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct page {int _mapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct page*,int ) ;
 scalar_t__ FUNC_8 (struct page*,struct vm_area_struct*) ;

void FUNC_9(struct page *VAR_3,
 struct vm_area_struct *VAR_4, unsigned long VAR_5)
{
 FUNC_2(VAR_5 < VAR_4->vm_start || VAR_5 >= VAR_4->vm_end);
 FUNC_1(VAR_3);
 FUNC_6(&VAR_3->_mapcount, 0);
 if (!FUNC_0(VAR_3))
  FUNC_3(VAR_3, VAR_1);
 else
  FUNC_3(VAR_3, VAR_2);
 FUNC_4(VAR_3, VAR_4, VAR_5, 1);
 if (FUNC_8(VAR_3, VAR_4))
  FUNC_7(VAR_3, VAR_0);
 else
  FUNC_5(VAR_3);
}
