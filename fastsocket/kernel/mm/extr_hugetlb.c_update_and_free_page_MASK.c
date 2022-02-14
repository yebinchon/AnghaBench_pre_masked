
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct hstate {scalar_t__ order; int * nr_huge_pages_node; int nr_huge_pages; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct hstate*) ;
 size_t FUNC_4 (struct page*) ;
 int FUNC_5 (struct hstate*) ;
 int FUNC_6 (struct page*,int *) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void FUNC_8(struct hstate *VAR_9, struct page *VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_9->order >= VAR_0);

 VAR_9->nr_huge_pages--;
 VAR_9->nr_huge_pages_node[FUNC_4(VAR_10)]--;
 for (VAR_11 = 0; VAR_11 < FUNC_5(VAR_9); VAR_11++) {
  VAR_10[VAR_11].flags &= ~(1 << VAR_4 | 1 << VAR_3 | 1 << VAR_6 |
    1 << VAR_2 | 1 << VAR_1 | 1 << VAR_7 |
    1 << VAR_5 | 1<< VAR_8);
 }
 FUNC_6(VAR_10, ((void*)0));
 FUNC_7(VAR_10);
 FUNC_2(VAR_10);
 FUNC_1(VAR_10, FUNC_3(VAR_9));
}
