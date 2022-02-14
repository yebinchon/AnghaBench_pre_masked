
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int fixup_activate; } ;
struct debug_obj {int state; } ;
struct debug_bucket {int lock; } ;
typedef enum debug_obj_state { ____Placeholder_debug_obj_state } debug_obj_state ;






 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct debug_obj*,char*) ;
 struct debug_bucket* FUNC_2 (unsigned long) ;
 struct debug_obj* FUNC_3 (void*,struct debug_bucket*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(void *VAR_2, struct debug_obj_descr *VAR_3)
{
 enum debug_obj_state VAR_4;
 struct debug_bucket *VAR_5;
 struct debug_obj *VAR_6;
 unsigned long VAR_7;

 if (!VAR_1)
  return;

 VAR_5 = FUNC_2((unsigned long) VAR_2);

 FUNC_4(&VAR_5->lock, VAR_7);

 VAR_6 = FUNC_3(VAR_2, VAR_5);
 if (VAR_6) {
  switch (VAR_6->state) {
  case 128:
  case 129:
   VAR_6->state = 131;
   break;

  case 131:
   FUNC_1(VAR_6, "activate");
   VAR_4 = VAR_6->state;
   FUNC_5(&VAR_5->lock, VAR_7);
   FUNC_0(VAR_3->fixup_activate, VAR_2, VAR_4);
   return;

  case 130:
   FUNC_1(VAR_6, "activate");
   break;
  default:
   break;
  }
  FUNC_5(&VAR_5->lock, VAR_7);
  return;
 }

 FUNC_5(&VAR_5->lock, VAR_7);





 FUNC_0(VAR_3->fixup_activate, VAR_2,
      VAR_0);
}
