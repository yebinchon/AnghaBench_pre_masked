
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct alloc_cache {TYPE_2__* quar; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_7__ {TYPE_1__ entry; } ;
typedef TYPE_2__ alloc_special_type ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct alloc_cache* VAR_0)
{
 alloc_special_type* VAR_1, *VAR_2;

 VAR_1 = VAR_0->quar;
 while(VAR_1) {
  VAR_2 = FUNC_0(VAR_1);

  FUNC_2(&VAR_1->entry.lock);
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
}
