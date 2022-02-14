
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct page {int lru; } ;
struct lruvec {int * lists; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct zone*,struct page*,int) ;
 int FUNC_10 (struct zone*,struct page*,int) ;
 int FUNC_11 (int *,int *) ;
 struct lruvec* FUNC_12 (struct zone*,struct page*,int,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct zone*,struct page*,int,int ) ;

__attribute__((used)) static void FUNC_17(struct page *VAR_2, struct zone *VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6;

 if (!FUNC_4(VAR_2))
  return;

 if (FUNC_5(VAR_2))
  return;


 if (FUNC_15(VAR_2))
  return;

 VAR_6 = FUNC_2(VAR_2);

 VAR_5 = FUNC_13(VAR_2);
 VAR_4 = FUNC_14(VAR_2);
 FUNC_10(VAR_3, VAR_2, VAR_4 + VAR_6);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_9(VAR_3, VAR_2, VAR_4);

 if (FUNC_6(VAR_2) || FUNC_3(VAR_2)) {





  FUNC_7(VAR_2);
 } else {
  struct lruvec *VAR_7;




  VAR_7 = FUNC_12(VAR_3, VAR_2, VAR_4, VAR_4);
  FUNC_11(&VAR_2->lru, &VAR_7->lists[VAR_4]);
  FUNC_8(VAR_1);
 }

 if (VAR_6)
  FUNC_8(VAR_0);
 FUNC_16(VAR_3, VAR_2, VAR_5, 0);
}
