
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; char* key; int keylen; scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_len ) (char*,int,int ) ;int (* ucl_emitter_append_character ) (char,int,int ) ;} ;
struct ucl_emitter_context {scalar_t__ id; struct ucl_emitter_functions* func; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char,int,int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char,int,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,int,struct ucl_emitter_context*) ;

__attribute__((used)) static void
FUNC_10 (bool VAR_5, struct ucl_emitter_context *VAR_6,
  const ucl_object_t *VAR_7, bool VAR_8)
{
 const struct ucl_emitter_functions *VAR_9 = VAR_6->func;

 if (!VAR_5) {
  return;
 }

 if (VAR_6->id == VAR_1) {
  if (VAR_7->flags & VAR_4) {
   FUNC_9 (VAR_7->key, VAR_7->keylen, VAR_6);
  }
  else {
   VAR_9->ucl_emitter_append_len (VAR_7->key, VAR_7->keylen, VAR_9->ud);
  }

  if (VAR_7->type != VAR_3 && VAR_7->type != VAR_0) {
   VAR_9->ucl_emitter_append_len (" = ", 3, VAR_9->ud);
  }
  else {
   VAR_9->ucl_emitter_append_character (' ', 1, VAR_9->ud);
  }
 }
 else if (VAR_6->id == VAR_2) {
  if (VAR_7->keylen > 0 && (VAR_7->flags & VAR_4)) {
   FUNC_9 (VAR_7->key, VAR_7->keylen, VAR_6);
  }
  else if (VAR_7->keylen > 0) {
   VAR_9->ucl_emitter_append_len (VAR_7->key, VAR_7->keylen, VAR_9->ud);
  }
  else {
   VAR_9->ucl_emitter_append_len ("null", 4, VAR_9->ud);
  }

  VAR_9->ucl_emitter_append_len (": ", 2, VAR_9->ud);
 }
 else {
  if (VAR_7->keylen > 0) {
   FUNC_9 (VAR_7->key, VAR_7->keylen, VAR_6);
  }
  else {
   VAR_9->ucl_emitter_append_len ("null", 4, VAR_9->ud);
  }

  if (VAR_8) {
   VAR_9->ucl_emitter_append_character (':', 1, VAR_9->ud);
  }
  else {
   VAR_9->ucl_emitter_append_len (": ", 2, VAR_9->ud);
  }
 }
}
