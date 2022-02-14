
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct alloc_cache {TYPE_1__* super; int num_quar; TYPE_2__* quar; } ;
struct TYPE_7__ {void* id; } ;
typedef TYPE_2__ alloc_special_type ;
struct TYPE_6__ {int lock; int num_quar; TYPE_2__* quar; } ;


 void* FUNC_0 (struct alloc_cache*) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct alloc_cache*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct alloc_cache*) ;

alloc_special_type*
FUNC_9(struct alloc_cache* VAR_0)
{
 alloc_special_type* VAR_1;
 FUNC_5(VAR_0);

 if(VAR_0->quar) {
  VAR_1 = VAR_0->quar;
  VAR_0->quar = FUNC_2(VAR_1);
  VAR_0->num_quar--;
  VAR_1->id = FUNC_0(VAR_0);
  return VAR_1;
 }

 if(VAR_0->super) {


  FUNC_3(&VAR_0->super->lock);
  if((VAR_1 = VAR_0->super->quar)) {
   VAR_0->super->quar = FUNC_2(VAR_1);
   VAR_0->super->num_quar--;
  }
  FUNC_4(&VAR_0->super->lock);
  if(VAR_1) {
   VAR_1->id = FUNC_0(VAR_0);
   return VAR_1;
  }
 }

 FUNC_8(VAR_0);
 if(!(VAR_1 = (alloc_special_type*)FUNC_7(sizeof(alloc_special_type)))) {
  FUNC_6("alloc_special_obtain: out of memory");
  return ((void*)0);
 }
 FUNC_1(VAR_1);
 VAR_1->id = FUNC_0(VAR_0);
 return VAR_1;
}
