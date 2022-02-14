
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ucl_object_t ;
struct ucl_emitter_functions {int dummy; } ;
struct ucl_emitter_context {TYPE_1__* ops; int const* comments; int const* top; scalar_t__ indent; struct ucl_emitter_functions* func; } ;
typedef int my_ctx ;
typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;
struct TYPE_2__ {int (* ucl_emitter_write_elt ) (struct ucl_emitter_context*,int const*,int,int) ;} ;


 int FUNC_0 (struct ucl_emitter_context*,struct ucl_emitter_context const*,int) ;
 int FUNC_1 (struct ucl_emitter_context*,int const*,int,int) ;
 struct ucl_emitter_context* FUNC_2 (int) ;

bool
FUNC_3 (const ucl_object_t *VAR_0, enum ucl_emitter VAR_1,
  struct ucl_emitter_functions *VAR_2,
  const ucl_object_t *VAR_3)
{
 const struct ucl_emitter_context *VAR_4;
 struct ucl_emitter_context VAR_5;
 bool VAR_6 = 0;

 VAR_4 = FUNC_2 (VAR_1);
 if (VAR_4 != ((void*)0)) {
  FUNC_0 (&VAR_5, VAR_4, sizeof (VAR_5));
  VAR_5.func = VAR_2;
  VAR_5.indent = 0;
  VAR_5.top = VAR_0;
  VAR_5.comments = VAR_3;

  VAR_5.ops->ucl_emitter_write_elt (&VAR_5, VAR_0, 1, 0);
  VAR_6 = 1;
 }

 return VAR_6;
}
