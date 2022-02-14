
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_character ) (char,int,int ) ;int (* ucl_emitter_append_len ) (char const*,size_t,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char const*,size_t,int ) ;
 int FUNC_3 (char,int,int ) ;
 int FUNC_4 (char const*,size_t,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (char*,int,int ) ;
 int FUNC_11 (char*,int,int ) ;
 scalar_t__ FUNC_12 (char const,int) ;

void
FUNC_13 (const char *VAR_2, size_t VAR_3,
  struct ucl_emitter_context *VAR_4)
{
 const char *VAR_5 = VAR_2, *VAR_6 = VAR_2;
 size_t VAR_7 = 0;
 const struct ucl_emitter_functions *VAR_8 = VAR_4->func;

 VAR_8->ucl_emitter_append_character ('"', 1, VAR_8->ud);

 while (VAR_3) {
  if (FUNC_12 (*VAR_5, VAR_1|VAR_0)) {
   if (VAR_7 > 0) {
    VAR_8->ucl_emitter_append_len (VAR_6, VAR_7, VAR_8->ud);
   }
   switch (*VAR_5) {
   case '\n':
    VAR_8->ucl_emitter_append_len ("\\n", 2, VAR_8->ud);
    break;
   case '\r':
    VAR_8->ucl_emitter_append_len ("\\r", 2, VAR_8->ud);
    break;
   case '\b':
    VAR_8->ucl_emitter_append_len ("\\b", 2, VAR_8->ud);
    break;
   case '\t':
    VAR_8->ucl_emitter_append_len ("\\t", 2, VAR_8->ud);
    break;
   case '\f':
    VAR_8->ucl_emitter_append_len ("\\f", 2, VAR_8->ud);
    break;
   case '\\':
    VAR_8->ucl_emitter_append_len ("\\\\", 2, VAR_8->ud);
    break;
   case '"':
    VAR_8->ucl_emitter_append_len ("\\\"", 2, VAR_8->ud);
    break;
   default:

    VAR_8->ucl_emitter_append_len ("\\uFFFD", 5, VAR_8->ud);
    break;
   }
   VAR_7 = 0;
   VAR_6 = ++VAR_5;
  }
  else {
   VAR_5 ++;
   VAR_7 ++;
  }
  VAR_3 --;
 }

 if (VAR_7 > 0) {
  VAR_8->ucl_emitter_append_len (VAR_6, VAR_7, VAR_8->ud);
 }

 VAR_8->ucl_emitter_append_character ('"', 1, VAR_8->ud);
}
