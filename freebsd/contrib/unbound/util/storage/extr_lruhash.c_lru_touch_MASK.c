
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {int dummy; } ;
struct lruhash {struct lruhash_entry* lru_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct lruhash*,struct lruhash_entry*) ;
 int FUNC_2 (struct lruhash*,struct lruhash_entry*) ;

void
FUNC_3(struct lruhash* VAR_0, struct lruhash_entry* VAR_1)
{
 FUNC_0(VAR_0 && VAR_1);
 if(VAR_1 == VAR_0->lru_start)
  return;

 FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1);
}
