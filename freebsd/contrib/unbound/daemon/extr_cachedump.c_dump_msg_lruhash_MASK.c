
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * now; } ;
struct worker {TYPE_1__ env; int scratchpad; } ;
struct reply_info {int dummy; } ;
struct query_info {int dummy; } ;
struct lruhash_entry {int lock; struct lruhash_entry* lru_next; } ;
struct lruhash {struct lruhash_entry* lru_start; } ;
typedef int RES ;


 int FUNC_0 (int ,struct lruhash_entry*,struct query_info**,struct reply_info**) ;
 int FUNC_1 (int *,struct query_info*,struct reply_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(RES* VAR_0, struct worker* VAR_1, struct lruhash* VAR_2)
{
 struct lruhash_entry* VAR_3;
 struct query_info* VAR_4;
 struct reply_info* VAR_5;



 for(VAR_3=VAR_2->lru_start; VAR_3; VAR_3 = VAR_3->lru_next) {
  FUNC_4(VAR_1->scratchpad);
  FUNC_2(&VAR_3->lock);

  if(!FUNC_0(VAR_1->scratchpad, VAR_3, &VAR_4, &VAR_5)) {
   FUNC_3(&VAR_3->lock);
   return 0;
  }
  FUNC_3(&VAR_3->lock);


  if(!FUNC_1(VAR_0, VAR_4, VAR_5, *VAR_1->env.now)) {
   return 0;
  }
 }
 return 1;
}
