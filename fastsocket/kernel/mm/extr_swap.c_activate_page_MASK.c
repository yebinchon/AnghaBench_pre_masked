
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct zone*,struct page*,int) ;
 int FUNC_6 (struct zone*,struct page*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 struct zone* FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct zone*,struct page*,int,int) ;

void FUNC_13(struct page *VAR_2)
{
 struct zone *VAR_3 = FUNC_9(VAR_2);

 FUNC_10(&VAR_3->lru_lock);
 if (FUNC_1(VAR_2) && !FUNC_0(VAR_2) && !FUNC_2(VAR_2)) {
  int VAR_4 = FUNC_7(VAR_2);
  int VAR_5 = FUNC_8(VAR_2);
  FUNC_6(VAR_3, VAR_2, VAR_5);

  FUNC_3(VAR_2);
  VAR_5 += VAR_0;
  FUNC_5(VAR_3, VAR_2, VAR_5);
  FUNC_4(VAR_1);

  FUNC_12(VAR_3, VAR_2, VAR_4, 1);
 }
 FUNC_11(&VAR_3->lru_lock);
}
