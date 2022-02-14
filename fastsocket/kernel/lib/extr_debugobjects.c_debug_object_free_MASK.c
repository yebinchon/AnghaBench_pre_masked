
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_free; } ;
struct debug_obj {int state; int node; } ;
struct debug_bucket {int lock; } ;
typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;



 int FUNC_0 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct debug_obj*,char*) ;
 int FUNC_2 (struct debug_obj*) ;
 struct debug_bucket* FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 struct debug_obj* FUNC_5 (void*,struct debug_bucket*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(void *VAR_1, struct debug_obj_descr *VAR_2)
{
 enum debug_obj_state VAR_3;
 struct debug_bucket *VAR_4;
 struct debug_obj *VAR_5;
 unsigned long VAR_6;

 if (!VAR_0)
  return;

 VAR_4 = FUNC_3((unsigned long) VAR_1);

 FUNC_6(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_5(VAR_1, VAR_4);
 if (!VAR_5)
  goto out_unlock;

 switch (VAR_5->state) {
 case 128:
  FUNC_1(VAR_5, "free");
  VAR_3 = VAR_5->state;
  FUNC_7(&VAR_4->lock, VAR_6);
  FUNC_0(VAR_2->fixup_free, VAR_1, VAR_3);
  return;
 default:
  FUNC_4(&VAR_5->node);
  FUNC_7(&VAR_4->lock, VAR_6);
  FUNC_2(VAR_5);
  return;
 }
out_unlock:
 FUNC_7(&VAR_4->lock, VAR_6);
}
