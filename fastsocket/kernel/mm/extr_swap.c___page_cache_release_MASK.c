
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct zone*,struct page*) ;
 struct zone* FUNC_4 (struct page*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct page *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  unsigned long VAR_1;
  struct zone *VAR_2 = FUNC_4(VAR_0);

  FUNC_5(&VAR_2->lru_lock, VAR_1);
  FUNC_1(!FUNC_0(VAR_0));
  FUNC_2(VAR_0);
  FUNC_3(VAR_2, VAR_0);
  FUNC_6(&VAR_2->lru_lock, VAR_1);
 }
}
