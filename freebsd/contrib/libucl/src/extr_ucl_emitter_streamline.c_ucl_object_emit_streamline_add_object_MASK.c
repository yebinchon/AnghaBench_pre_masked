
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucl_object_t ;
struct ucl_emitter_context_streamline {TYPE_1__* ops; TYPE_2__* containers; } ;
struct ucl_emitter_context {int dummy; } ;
struct TYPE_4__ {int empty; scalar_t__ is_array; } ;
struct TYPE_3__ {int (* ucl_emitter_write_elt ) (struct ucl_emitter_context*,int const*,int,int) ;} ;


 struct ucl_emitter_context_streamline* FUNC_0 (struct ucl_emitter_context*) ;
 int FUNC_1 (struct ucl_emitter_context*,int const*,int,int) ;

void
FUNC_2 (
  struct ucl_emitter_context *VAR_0, const ucl_object_t *VAR_1)
{
 struct ucl_emitter_context_streamline *VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = 0, VAR_4 = 0;

 if (VAR_2->containers != ((void*)0)) {
  if (VAR_2->containers->is_array) {
   VAR_3 = 1;
  }
  if (VAR_2->containers->empty) {
   VAR_4 = 1;
   VAR_2->containers->empty = 0;
  }
 }

 VAR_2->ops->ucl_emitter_write_elt (VAR_0, VAR_1, VAR_4, !VAR_3);
}
