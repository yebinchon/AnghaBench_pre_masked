
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucl_emitter_streamline_stack {struct ucl_emitter_streamline_stack* next; int obj; scalar_t__ is_array; } ;
struct ucl_emitter_context_streamline {struct ucl_emitter_streamline_stack* containers; TYPE_1__* ops; } ;
struct ucl_emitter_context {int dummy; } ;
struct TYPE_2__ {int (* ucl_emitter_end_object ) (struct ucl_emitter_context*,int ) ;int (* ucl_emitter_end_array ) (struct ucl_emitter_context*,int ) ;} ;


 struct ucl_emitter_context_streamline* FUNC_0 (struct ucl_emitter_context*) ;
 int FUNC_1 (struct ucl_emitter_streamline_stack*) ;
 int FUNC_2 (struct ucl_emitter_context*,int ) ;
 int FUNC_3 (struct ucl_emitter_context*,int ) ;

void
FUNC_4 (struct ucl_emitter_context *VAR_0)
{
 struct ucl_emitter_context_streamline *VAR_1 = FUNC_0(VAR_0);
 struct ucl_emitter_streamline_stack *VAR_2;

 if (VAR_1->containers != ((void*)0)) {
  VAR_2 = VAR_1->containers;

  if (VAR_2->is_array) {
   VAR_1->ops->ucl_emitter_end_array (VAR_0, VAR_2->obj);
  }
  else {
   VAR_1->ops->ucl_emitter_end_object (VAR_0, VAR_2->obj);
  }
  VAR_1->containers = VAR_2->next;
  FUNC_1 (VAR_2);
 }
}
