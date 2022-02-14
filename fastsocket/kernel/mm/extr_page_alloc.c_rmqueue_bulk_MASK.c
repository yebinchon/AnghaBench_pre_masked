
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lock; } ;
struct list_head {int dummy; } ;
struct page {struct list_head lru; } ;


 int VAR_0 ;
 int FUNC_0 (struct zone*,int ,int) ;
 struct page* FUNC_1 (struct zone*,unsigned int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct list_head*,struct list_head*) ;
 int FUNC_4 (struct list_head*,struct list_head*) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct zone *VAR_1, unsigned int VAR_2,
   unsigned long VAR_3, struct list_head *VAR_4,
   int VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_6(&VAR_1->lock);
 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  struct page *VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_5);
  if (FUNC_8(VAR_8 == ((void*)0)))
   break;
  if (FUNC_2(VAR_6 == 0))
   FUNC_3(&VAR_8->lru, VAR_4);
  else
   FUNC_4(&VAR_8->lru, VAR_4);
  FUNC_5(VAR_8, VAR_5);
  VAR_4 = &VAR_8->lru;
 }
 FUNC_0(VAR_1, VAR_0, -(VAR_7 << VAR_2));
 FUNC_7(&VAR_1->lock);
 return VAR_7;
}
