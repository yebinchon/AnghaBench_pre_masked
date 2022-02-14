
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct zone*,struct page*,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct zone* FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct page *VAR_1)
{
 int VAR_2 = -VAR_0;

 if (FUNC_1(VAR_1)) {
  struct zone *VAR_3 = FUNC_5(VAR_1);

  FUNC_6(&VAR_3->lru_lock);
  if (FUNC_1(VAR_1) && FUNC_3(VAR_1)) {
   int VAR_4 = FUNC_4(VAR_1);
   VAR_2 = 0;
   FUNC_0(VAR_1);

   FUNC_2(VAR_3, VAR_1, VAR_4);
  }
  FUNC_7(&VAR_3->lru_lock);
 }
 return VAR_2;
}
