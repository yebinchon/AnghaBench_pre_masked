
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ucl_stack {int level; TYPE_1__* obj; struct ucl_stack* next; } ;
struct ucl_parser {TYPE_1__* cur_obj; struct ucl_stack* stack; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct ucl_stack*) ;
 int VAR_2 ;

__attribute__((used)) static struct ucl_stack *
FUNC_3 (struct ucl_parser *VAR_3)
{
 struct ucl_stack *VAR_4 = ((void*)0);
 uint64_t VAR_5;

 VAR_4 = VAR_3->stack;

 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_4->level & VAR_0) {
  VAR_5 = VAR_4->level & ~VAR_0;

  if (VAR_5 == 0) {

   VAR_3->stack = VAR_4->next;
   VAR_3->cur_obj = VAR_4->obj;
   FUNC_2 (VAR_4);
   return FUNC_3 (VAR_3);
  }
 }






 FUNC_0 (VAR_4->obj != ((void*)0));

 return VAR_4;
}
