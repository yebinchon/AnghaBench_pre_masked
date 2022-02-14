
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_character ) (char,int,int ) ;int (* ucl_emitter_append_len ) (char*,int,int ) ;} ;
struct ucl_emitter_context {scalar_t__ id; TYPE_1__ const* top; struct ucl_emitter_functions* func; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char,int,int ) ;

__attribute__((used)) static void
FUNC_3 (struct ucl_emitter_context *VAR_3,
  const ucl_object_t *VAR_4, bool VAR_5, bool VAR_6)
{
 const struct ucl_emitter_functions *VAR_7 = VAR_3->func;

 if (VAR_3->id == VAR_1 && VAR_4 != VAR_3->top) {
  if (VAR_4->type != VAR_2 && VAR_4->type != VAR_0) {
   if (!VAR_6) {

    VAR_7->ucl_emitter_append_len (";\n", 2, VAR_7->ud);
   }
   else {

    VAR_7->ucl_emitter_append_len (",\n", 2, VAR_7->ud);
   }
  }
  else {
   VAR_7->ucl_emitter_append_character ('\n', 1, VAR_7->ud);
  }
 }
}
