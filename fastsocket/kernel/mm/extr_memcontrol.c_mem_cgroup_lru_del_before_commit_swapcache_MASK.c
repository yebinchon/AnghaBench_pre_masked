
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lru_lock; } ;
struct page_cgroup {int dummy; } ;
struct page {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 scalar_t__ FUNC_0 (struct page_cgroup*) ;
 int FUNC_1 (struct page_cgroup*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct zone*,struct page*,int) ;
 int FUNC_4 (struct zone*,struct page*,int) ;
 struct page_cgroup* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 struct zone* FUNC_7 (struct page*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct page *VAR_0)
{
 enum lru_list VAR_1;
 unsigned long VAR_2;
 struct zone *VAR_3 = FUNC_7(VAR_0);
 struct page_cgroup *VAR_4 = FUNC_5(VAR_0);

 FUNC_8(&VAR_3->lru_lock, VAR_2);
 VAR_1 = FUNC_6(VAR_0);
 if (FUNC_2(VAR_0) && FUNC_0(VAR_4) && !FUNC_1(VAR_4)) {
  FUNC_4(VAR_3, VAR_0, VAR_1);
  FUNC_3(VAR_3, VAR_0, VAR_1);
 }
 FUNC_9(&VAR_3->lru_lock, VAR_2);
}
