
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; } ;
struct resv_map {int regions; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;


 struct hstate* FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct hugepage_subpool*,unsigned long) ;
 int FUNC_2 (struct hstate*,unsigned long) ;
 unsigned long FUNC_3 (int *,unsigned long,unsigned long) ;
 int FUNC_4 (struct vm_area_struct*) ;
 struct hugepage_subpool* FUNC_5 (struct vm_area_struct*) ;
 unsigned long FUNC_6 (struct hstate*,struct vm_area_struct*,int ) ;
 struct resv_map* FUNC_7 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_8(struct vm_area_struct *VAR_0)
{
 struct hstate *VAR_1 = FUNC_0(VAR_0);
 struct resv_map *VAR_2 = FUNC_7(VAR_0);
 struct hugepage_subpool *VAR_3 = FUNC_5(VAR_0);
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;

 if (VAR_2) {
  VAR_5 = FUNC_6(VAR_1, VAR_0, VAR_0->vm_start);
  VAR_6 = FUNC_6(VAR_1, VAR_0, VAR_0->vm_end);

  VAR_4 = (VAR_6 - VAR_5) -
   FUNC_3(&VAR_2->regions, VAR_5, VAR_6);
  FUNC_4(VAR_0);

  if (VAR_4) {
   FUNC_2(VAR_1, -VAR_4);
   FUNC_1(VAR_3, VAR_4);
  }
 }
}
