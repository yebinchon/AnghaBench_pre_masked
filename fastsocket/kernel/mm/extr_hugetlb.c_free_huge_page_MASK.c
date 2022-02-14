
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; int * mapping; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {scalar_t__* surplus_huge_pages_node; int surplus_huge_pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct hstate*,struct page*) ;
 scalar_t__ FUNC_3 (struct hstate*) ;
 int FUNC_4 (struct hugepage_subpool*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct page*) ;
 struct hstate* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct hstate*,struct page*) ;

__attribute__((used)) static void FUNC_14(struct page *VAR_2)
{




 struct hstate *VAR_3 = FUNC_6(VAR_2);
 int VAR_4 = FUNC_9(VAR_2);
 struct hugepage_subpool *VAR_5 =
  (struct hugepage_subpool *)FUNC_8(VAR_2);

 FUNC_10(VAR_2, 0);
 VAR_2->mapping = ((void*)0);
 FUNC_0(FUNC_5(VAR_2));
 FUNC_0(FUNC_7(VAR_2));
 FUNC_1(&VAR_2->lru);

 FUNC_11(&VAR_1);
 if (VAR_3->surplus_huge_pages_node[VAR_4] && FUNC_3(VAR_3) < VAR_0) {
  FUNC_13(VAR_3, VAR_2);
  VAR_3->surplus_huge_pages--;
  VAR_3->surplus_huge_pages_node[VAR_4]--;
 } else {
  FUNC_2(VAR_3, VAR_2);
 }
 FUNC_12(&VAR_1);
 FUNC_4(VAR_5, 1);
}
