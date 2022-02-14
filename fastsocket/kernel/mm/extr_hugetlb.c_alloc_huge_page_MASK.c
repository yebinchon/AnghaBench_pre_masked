
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int dummy; } ;


 struct page* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_1 (struct hstate*,int ) ;
 struct page* FUNC_2 (struct hstate*,struct vm_area_struct*,unsigned long,int) ;
 struct hstate* FUNC_3 (struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (struct hugepage_subpool*,long) ;
 int FUNC_5 (struct hugepage_subpool*,long) ;
 int VAR_3 ;
 int FUNC_6 (struct page*,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct hugepage_subpool* FUNC_9 (struct vm_area_struct*) ;
 int FUNC_10 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 long FUNC_11 (struct hstate*,struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static struct page *FUNC_12(struct vm_area_struct *VAR_4,
        unsigned long VAR_5, int VAR_6)
{
 struct hugepage_subpool *VAR_7 = FUNC_9(VAR_4);
 struct hstate *VAR_8 = FUNC_3(VAR_4);
 struct page *VAR_9;
 long VAR_10;
 VAR_10 = FUNC_11(VAR_8, VAR_4, VAR_5);
 if (VAR_10 < 0)
  return FUNC_0(-VAR_1);
 if (VAR_10)
  if (FUNC_4(VAR_7, VAR_10))
   return FUNC_0(-VAR_2);

 FUNC_7(&VAR_3);
 VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6);
 FUNC_8(&VAR_3);

 if (!VAR_9) {
  VAR_9 = FUNC_1(VAR_8, VAR_0);
  if (!VAR_9) {
   FUNC_5(VAR_7, VAR_10);
   return FUNC_0(-VAR_2);
  }
 }

 FUNC_6(VAR_9, (unsigned long)VAR_7);

 FUNC_10(VAR_8, VAR_4, VAR_5);

 return VAR_9;
}
