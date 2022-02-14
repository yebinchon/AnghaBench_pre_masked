
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_obj_descr {int dummy; } ;
struct debug_obj {int state; void* object; struct debug_obj_descr* descr; } ;
struct debug_bucket {int lock; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct debug_obj*,char*) ;
 struct debug_bucket* FUNC_1 (unsigned long) ;
 struct debug_obj* FUNC_2 (void*,struct debug_bucket*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(void *VAR_2, struct debug_obj_descr *VAR_3)
{
 struct debug_bucket *VAR_4;
 struct debug_obj *VAR_5;
 unsigned long VAR_6;

 if (!VAR_1)
  return;

 VAR_4 = FUNC_1((unsigned long) VAR_2);

 FUNC_3(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5) {
  switch (VAR_5->state) {
  case 128:
  case 129:
  case 131:
   VAR_5->state = 129;
   break;

  case 130:
   FUNC_0(VAR_5, "deactivate");
   break;
  default:
   break;
  }
 } else {
  struct debug_obj VAR_7 = { .object = VAR_2,
           .state = VAR_0,
           .descr = VAR_3 };

  FUNC_0(&VAR_7, "deactivate");
 }

 FUNC_4(&VAR_4->lock, VAR_6);
}
