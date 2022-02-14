
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct hstate {int resv_huge_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,int ) ;

__attribute__((used)) static void FUNC_1(struct hstate *VAR_3,
   struct vm_area_struct *VAR_4)
{
 if (VAR_4->vm_flags & VAR_2)
  return;

 if (VAR_4->vm_flags & VAR_1) {

  VAR_3->resv_huge_pages--;
 } else if (FUNC_0(VAR_4, VAR_0)) {




  VAR_3->resv_huge_pages--;
 }
}
