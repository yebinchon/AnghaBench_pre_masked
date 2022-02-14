
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {scalar_t__ mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 struct page* FUNC_2 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct vm_area_struct *VAR_4,
        unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;

 FUNC_4();
 VAR_4->vm_flags &= ~VAR_3;

 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7 += VAR_2) {
  struct page *VAR_8;







  VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_1 | VAR_0);
  if (VAR_8 && !FUNC_0(VAR_8)) {
   FUNC_3(VAR_8);






   if (VAR_8->mapping)
    FUNC_5(VAR_8);
   FUNC_7(VAR_8);
   FUNC_6(VAR_8);
  }
  FUNC_1();
 }
}
