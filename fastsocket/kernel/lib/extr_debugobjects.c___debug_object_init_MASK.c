
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_init; } ;
struct debug_obj {int state; } ;
struct debug_bucket {int lock; } ;
typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;







 struct debug_obj* FUNC_0 (void*,struct debug_bucket*,struct debug_obj_descr*) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (void*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (struct debug_obj*,char*) ;
 int FUNC_5 () ;
 struct debug_bucket* FUNC_6 (unsigned long) ;
 struct debug_obj* FUNC_7 (void*,struct debug_bucket*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_10(void *VAR_1, struct debug_obj_descr *VAR_2, int VAR_3)
{
 enum debug_obj_state VAR_4;
 struct debug_bucket *VAR_5;
 struct debug_obj *VAR_6;
 unsigned long VAR_7;

 FUNC_5();

 VAR_5 = FUNC_6((unsigned long) VAR_1);

 FUNC_8(&VAR_5->lock, VAR_7);

 VAR_6 = FUNC_7(VAR_1, VAR_5);
 if (!VAR_6) {
  VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_2);
  if (!VAR_6) {
   VAR_0 = 0;
   FUNC_9(&VAR_5->lock, VAR_7);
   FUNC_3();
   return;
  }
  FUNC_2(VAR_1, VAR_3);
 }

 switch (VAR_6->state) {
 case 128:
 case 129:
 case 130:
  VAR_6->state = 129;
  break;

 case 132:
  FUNC_4(VAR_6, "init");
  VAR_4 = VAR_6->state;
  FUNC_9(&VAR_5->lock, VAR_7);
  FUNC_1(VAR_2->fixup_init, VAR_1, VAR_4);
  return;

 case 131:
  FUNC_4(VAR_6, "init");
  break;
 default:
  break;
 }

 FUNC_9(&VAR_5->lock, VAR_7);
}
