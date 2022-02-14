
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {scalar_t__ state; scalar_t__ recursion; int err; int * top_obj; int chunks; } ;
struct ucl_chunk {unsigned char const* begin; size_t remain; unsigned char const* pos; unsigned char const* end; int line; unsigned int priority; int strategy; int parse_type; scalar_t__ column; } ;
typedef enum ucl_parse_type { ____Placeholder_ucl_parse_type } ucl_parse_type ;
typedef enum ucl_duplicate_strategy { ____Placeholder_ucl_duplicate_strategy } ucl_duplicate_strategy ;


 int FUNC_0 (int ,struct ucl_chunk*) ;
 struct ucl_chunk* FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int * FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct ucl_parser*) ;
 int FUNC_5 (struct ucl_parser*) ;
 int FUNC_6 (struct ucl_parser*) ;

bool
FUNC_7 (struct ucl_parser *VAR_4, const unsigned char *VAR_5,
  size_t VAR_6, unsigned VAR_7, enum ucl_duplicate_strategy VAR_8,
  enum ucl_parse_type VAR_9)
{
 struct ucl_chunk *VAR_10;

 if (VAR_4 == ((void*)0)) {
  return 0;
 }

 if (VAR_5 == ((void*)0) && VAR_6 != 0) {
  FUNC_2 (&VAR_4->err, "invalid chunk added");
  return 0;
 }

 if (VAR_4->state != VAR_3) {
  VAR_10 = FUNC_1 (sizeof (struct ucl_chunk));
  if (VAR_10 == ((void*)0)) {
   FUNC_2 (&VAR_4->err, "cannot allocate chunk structure");
   return 0;
  }

  if (VAR_9 == VAR_2 && VAR_6 > 0) {

   if ((*VAR_5 & 0x80) == 0x80 && (*VAR_5 >= 0xdc && *VAR_5 <= 0xdf)) {
    VAR_9 = 129;
   }
   else if (*VAR_5 == '(') {
    VAR_9 = 130;
   }
   else {
    VAR_9 = 128;
   }
  }

  VAR_10->begin = VAR_5;
  VAR_10->remain = VAR_6;
  VAR_10->pos = VAR_10->begin;
  VAR_10->end = VAR_10->begin + VAR_6;
  VAR_10->line = 1;
  VAR_10->column = 0;
  VAR_10->priority = VAR_7;
  VAR_10->strategy = VAR_8;
  VAR_10->parse_type = VAR_9;
  FUNC_0 (VAR_4->chunks, VAR_10);
  VAR_4->recursion ++;

  if (VAR_4->recursion > VAR_0) {
   FUNC_2 (&VAR_4->err, "maximum include nesting limit is reached: %d",
     VAR_4->recursion);
   return 0;
  }

  if (VAR_6 > 0) {

   switch (VAR_9) {
   default:
   case 128:
    return FUNC_6 (VAR_4);
   case 129:
    return FUNC_5 (VAR_4);
   case 130:
    return FUNC_4 (VAR_4);
   }
  }
  else {

   if (VAR_4->top_obj == ((void*)0)) {




    VAR_4->top_obj = FUNC_3 (VAR_1, VAR_7);
   }

   return 1;
  }
 }

 FUNC_2 (&VAR_4->err, "a parser is in an invalid state");

 return 0;
}
