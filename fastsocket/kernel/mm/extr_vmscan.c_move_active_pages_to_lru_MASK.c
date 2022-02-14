
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct pagevec {int dummy; } ;
struct page {int lru; } ;
struct lruvec {int * lists; } ;
struct list_head {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct zone*,int,unsigned long) ;
 int FUNC_5 (struct pagevec*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct list_head*) ;
 int FUNC_9 (int *,int *) ;
 struct page* FUNC_10 (struct list_head*) ;
 struct lruvec* FUNC_11 (struct zone*,struct page*,int) ;
 int FUNC_12 (struct pagevec*,struct page*) ;
 int FUNC_13 (struct pagevec*,int) ;
 int FUNC_14 (struct pagevec*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct zone *VAR_3,
         struct list_head *VAR_4,
         enum lru_list VAR_5)
{
 unsigned long VAR_6 = 0;
 struct pagevec VAR_7;
 struct page *VAR_8;

 FUNC_13(&VAR_7, 1);

 while (!FUNC_8(VAR_4)) {
  struct lruvec *VAR_9;

  VAR_8 = FUNC_10(VAR_4);

  FUNC_2(FUNC_0(VAR_8));
  FUNC_1(VAR_8);

  VAR_9 = FUNC_11(VAR_3, VAR_8, VAR_5);
  FUNC_9(&VAR_8->lru, &VAR_9->lists[VAR_5]);
  VAR_6 += FUNC_6(VAR_8);

  if (!FUNC_12(&VAR_7, VAR_8) || FUNC_8(VAR_4)) {
   FUNC_16(&VAR_3->lru_lock);
   if (VAR_2)
    FUNC_14(&VAR_7);
   FUNC_5(&VAR_7);
   FUNC_15(&VAR_3->lru_lock);
  }
 }
 FUNC_4(VAR_3, VAR_0 + VAR_5, VAR_6);
 if (!FUNC_7(VAR_5))
  FUNC_3(VAR_1, VAR_6);
}
