
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct zone*,struct page*,int ) ;
 struct zone* FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct page *VAR_1)
{
 struct zone *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(&VAR_2->lru_lock);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_2, VAR_1, VAR_0);
 FUNC_5(&VAR_2->lru_lock);
}
