
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash {int lock; int markdelfunc; } ;
typedef int lruhash_markdelfunc_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lruhash* VAR_0, lruhash_markdelfunc_type VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->markdelfunc = VAR_1;
 FUNC_1(&VAR_0->lock);
}
