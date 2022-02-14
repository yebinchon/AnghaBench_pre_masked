
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_character ) (char,int,int ) ;} ;
struct ucl_emitter_context {scalar_t__ id; int indent; struct ucl_emitter_functions* func; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char,int,int ) ;
 int FUNC_1 (char,int,int ) ;
 int FUNC_2 (char,int,int ) ;
 int FUNC_3 (struct ucl_emitter_functions const*,int ,int) ;
 int FUNC_4 (struct ucl_emitter_context*,int const*,int,int) ;

__attribute__((used)) static void
FUNC_5 (struct ucl_emitter_context *VAR_1,
  const ucl_object_t *VAR_2, bool VAR_3)
{
 const struct ucl_emitter_functions *VAR_4 = VAR_1->func;

 VAR_1->indent --;
 if (VAR_3) {
  VAR_4->ucl_emitter_append_character (']', 1, VAR_4->ud);
 }
 else {
  if (VAR_1->id != VAR_0) {

   VAR_4->ucl_emitter_append_character ('\n', 1, VAR_4->ud);
  }
  FUNC_3 (VAR_4, VAR_1->indent, VAR_3);
  VAR_4->ucl_emitter_append_character (']', 1, VAR_4->ud);
 }

 FUNC_4 (VAR_1, VAR_2, VAR_3, 1);
}
