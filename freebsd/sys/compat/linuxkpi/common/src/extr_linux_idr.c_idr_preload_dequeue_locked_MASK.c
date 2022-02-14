
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m; } ;
struct linux_idr_cache {int count; struct idr_layer* head; TYPE_1__ lock; } ;
struct idr_layer {struct idr_layer** ary; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct idr_layer *
FUNC_2(struct linux_idr_cache *VAR_0)
{
 struct idr_layer *VAR_1;


 if (FUNC_1(&VAR_0->lock.m) == 0)
  return (((void*)0));

 VAR_1 = VAR_0->head;
 if (FUNC_0(VAR_1 != ((void*)0))) {
  VAR_0->head = VAR_1->ary[0];
  VAR_0->count--;
  VAR_1->ary[0] = ((void*)0);
 }
 return (VAR_1);
}
