
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page_cgroup {int dummy; } ;
struct page {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int FUNC_0 (struct page_cgroup*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct zone*,struct page*,int) ;
 int FUNC_3 (struct zone*,struct page*,int) ;
 struct page_cgroup* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct zone* FUNC_6 (struct page*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_0)
{
 enum lru_list VAR_1;
 unsigned long VAR_2;
 struct zone *VAR_3 = FUNC_6(VAR_0);
 struct page_cgroup *VAR_4 = FUNC_4(VAR_0);

 FUNC_7(&VAR_3->lru_lock, VAR_2);
 VAR_1 = FUNC_5(VAR_0);
 if (FUNC_1(VAR_0) && !FUNC_0(VAR_4)) {
  FUNC_3(VAR_3, VAR_0, VAR_1);
  FUNC_2(VAR_3, VAR_0, VAR_1);
 }
 FUNC_8(&VAR_3->lru_lock, VAR_2);
}
