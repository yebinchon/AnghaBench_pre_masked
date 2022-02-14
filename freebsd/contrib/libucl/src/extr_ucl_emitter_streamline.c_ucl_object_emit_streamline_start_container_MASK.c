
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ ucl_object_t ;
struct ucl_emitter_streamline_stack {int is_array; int empty; TYPE_2__ const* obj; } ;
struct ucl_emitter_context_streamline {struct ucl_emitter_streamline_stack* containers; TYPE_1__* ops; TYPE_2__ const* top; } ;
struct ucl_emitter_context {int dummy; } ;
struct TYPE_6__ {int (* ucl_emitter_start_object ) (struct ucl_emitter_context*,TYPE_2__ const*,int) ;int (* ucl_emitter_start_array ) (struct ucl_emitter_context*,TYPE_2__ const*,int) ;} ;


 int FUNC_0 (struct ucl_emitter_streamline_stack*,struct ucl_emitter_streamline_stack*) ;
 struct ucl_emitter_context_streamline* FUNC_1 (struct ucl_emitter_context*) ;
 scalar_t__ VAR_0 ;
 struct ucl_emitter_streamline_stack* FUNC_2 (int) ;
 int FUNC_3 (struct ucl_emitter_context*,TYPE_2__ const*,int) ;
 int FUNC_4 (struct ucl_emitter_context*,TYPE_2__ const*,int) ;

void
FUNC_5 (struct ucl_emitter_context *VAR_1,
  const ucl_object_t *VAR_2)
{
 struct ucl_emitter_context_streamline *VAR_3 = FUNC_1(VAR_1);
 struct ucl_emitter_streamline_stack *VAR_4, *VAR_5;
 bool VAR_6 = 0;


 if (VAR_3->top == ((void*)0)) {
  VAR_3->top = VAR_2;
 }

 VAR_5 = VAR_3->containers;
 VAR_4 = FUNC_2 (sizeof (*VAR_4));
 if (VAR_4 != ((void*)0)) {
  if (VAR_5 != ((void*)0) && !VAR_5->is_array) {
   VAR_6 = 1;
  }
  VAR_4->empty = 1;
  VAR_4->obj = VAR_2;
  if (VAR_2 != ((void*)0) && VAR_2->type == VAR_0) {
   VAR_4->is_array = 1;
   VAR_3->ops->ucl_emitter_start_array (VAR_1, VAR_2, VAR_6);
  }
  else {
   VAR_4->is_array = 0;
   VAR_3->ops->ucl_emitter_start_object (VAR_1, VAR_2, VAR_6);
  }
  FUNC_0 (VAR_3->containers, VAR_4);
 }
}
