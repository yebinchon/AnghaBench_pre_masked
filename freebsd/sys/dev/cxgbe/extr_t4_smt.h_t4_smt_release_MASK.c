
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_entry {int lock; int state; int refcnt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct smt_entry *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));
 if (FUNC_1(&VAR_1->refcnt, -1) == 1) {
  FUNC_2(&VAR_1->lock);
  VAR_1->state = VAR_0;
  FUNC_3(&VAR_1->lock);
 }

}
