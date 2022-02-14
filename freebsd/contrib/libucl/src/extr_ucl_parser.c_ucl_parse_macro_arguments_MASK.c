
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser_saved_state {unsigned char* pos; int remain; int line; int column; } ;
struct ucl_parser {int err; int flags; } ;
struct ucl_chunk {unsigned char* pos; int remain; unsigned char const* end; int line; int column; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_1 (struct ucl_parser*,unsigned char const*,size_t) ;
 int FUNC_2 (struct ucl_parser*) ;
 int * FUNC_3 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_4 (int ) ;
 int FUNC_5 (struct ucl_parser*,int ,char*,int *) ;

__attribute__((used)) static ucl_object_t *
FUNC_6 (struct ucl_parser *VAR_1,
  struct ucl_chunk *VAR_2)
{
 ucl_object_t *VAR_3 = ((void*)0);
 struct ucl_parser *VAR_4;
 int VAR_5 = 1, VAR_6 = 0, VAR_7 = 0;
 const unsigned char *VAR_8, *VAR_9;
 size_t VAR_10 = 0;
 struct ucl_parser_saved_state VAR_11;

 VAR_11.column = VAR_2->column;
 VAR_11.line = VAR_2->line;
 VAR_11.pos = VAR_2->pos;
 VAR_11.remain = VAR_2->remain;
 VAR_8 = VAR_2->pos;

 if (*VAR_8 != '(' || VAR_2->remain < 2) {
  return ((void*)0);
 }


 FUNC_0 (VAR_2, VAR_8);
 VAR_9 = VAR_8;

 while ((VAR_8) < (VAR_2)->end) {
  switch (VAR_7) {
  case 0:

   if (*VAR_8 == '(') {
    VAR_5 ++;
   }
   else if (*VAR_8 == ')') {
    VAR_6 ++;
   }
   else if (*VAR_8 == '"') {
    VAR_7 = 1;
   }

   if (VAR_5 == VAR_6) {
    VAR_7 = 99;
   }
   else {
    VAR_10 ++;
   }

   if (VAR_2->remain == 0) {
    goto restore_chunk;
   }
   FUNC_0 (VAR_2, VAR_8);
   break;
  case 1:

   if (*VAR_8 == '"' && *(VAR_8 - 1) != '\\') {
    VAR_7 = 0;
   }
   if (VAR_2->remain == 0) {
    goto restore_chunk;
   }
   VAR_10 ++;
   FUNC_0 (VAR_2, VAR_8);
   break;
  case 99:




   VAR_4 = FUNC_4 (VAR_1->flags);
   if (!FUNC_1 (VAR_4, VAR_9, VAR_10)) {
    FUNC_5 (VAR_1, VAR_0, "macro arguments parsing error",
      &VAR_1->err);
   }
   else {
    VAR_3 = FUNC_3 (VAR_4);
   }
   FUNC_2 (VAR_4);

   return VAR_3;

   break;
  }
 }

 return VAR_3;

restore_chunk:
 VAR_2->column = VAR_11.column;
 VAR_2->line = VAR_11.line;
 VAR_2->pos = VAR_11.pos;
 VAR_2->remain = VAR_11.remain;

 return ((void*)0);
}
