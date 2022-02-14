
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int sv; } ;
struct TYPE_13__ {int len; TYPE_3__ value; int * trash_stack; void* type; int flags; } ;
typedef TYPE_4__ ucl_object_t ;
struct ucl_parser {void* state; int err; TYPE_2__* stack; } ;
struct ucl_chunk {unsigned char* pos; int remain; unsigned char const* end; int line; int column; } ;
struct TYPE_11__ {TYPE_1__* obj; int level; } ;
struct TYPE_10__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (unsigned char const*,char*,int) ;
 int FUNC_1 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_2 (struct ucl_parser*,unsigned char const*,int *,int *,int,int,int,int) ;
 scalar_t__ FUNC_3 (unsigned char const,unsigned char const) ;
 int FUNC_4 (struct ucl_parser*,struct ucl_chunk*,int*,int*,int*) ;
 int FUNC_5 (struct ucl_parser*,struct ucl_chunk*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,unsigned char const*,int) ;
 int FUNC_7 (struct ucl_parser*,struct ucl_chunk*,unsigned char const*,int,unsigned char const**,int*) ;
 int FUNC_8 (struct ucl_parser*,struct ucl_chunk*,int*,int*) ;
 TYPE_4__* FUNC_9 (TYPE_4__*,struct ucl_parser*,int,int ) ;
 TYPE_4__* FUNC_10 (struct ucl_parser*) ;
 int FUNC_11 (struct ucl_parser*,int ,char*,int *) ;
 int FUNC_12 (struct ucl_parser*) ;
 scalar_t__ FUNC_13 (unsigned char const,int ) ;

__attribute__((used)) static bool
FUNC_14 (struct ucl_parser *VAR_11, struct ucl_chunk *VAR_12)
{
 const unsigned char *VAR_13, *VAR_14;
 ucl_object_t *VAR_15 = ((void*)0);
 unsigned int VAR_16;
 int VAR_17;
 bool VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

 VAR_13 = VAR_12->pos;


 if (FUNC_13 (*VAR_13, VAR_3) ||
   (VAR_12->remain >= 2 && FUNC_3 (VAR_13[0], VAR_13[1]))) {
  while (VAR_13 < VAR_12->end && FUNC_13 (*VAR_13, VAR_3)) {
   FUNC_1 (VAR_12, VAR_13);
  }
  if (!FUNC_12 (VAR_11)) {
   return 0;
  }
  VAR_13 = VAR_12->pos;
 }

 while (VAR_13 < VAR_12->end) {
  VAR_14 = VAR_13;
  switch (*VAR_13) {
  case '"':
   FUNC_1 (VAR_12, VAR_13);

   if (!FUNC_4 (VAR_11, VAR_12, &VAR_18, &VAR_19,
     &VAR_20)) {
    return 0;
   }

   VAR_15 = FUNC_10 (VAR_11);
   if (!VAR_15) {
    return 0;
   }

   VAR_17 = VAR_12->pos - VAR_14 - 2;
   VAR_15->type = VAR_9;
   if ((VAR_17 = FUNC_2 (VAR_11, VAR_14 + 1,
     &VAR_15->trash_stack[VAR_10],
     &VAR_15->value.sv, VAR_17, VAR_18, 0,
     VAR_20)) == -1) {
    return 0;
   }
   VAR_15->len = VAR_17;

   VAR_11->state = VAR_7;
   VAR_13 = VAR_12->pos;

   return 1;
   break;
  case '{':
   VAR_15 = FUNC_10 (VAR_11);

   VAR_15 = FUNC_9 (VAR_15, VAR_11, 0, VAR_11->stack->level);
   if (VAR_15 == ((void*)0)) {
    return 0;
   }

   FUNC_1 (VAR_12, VAR_13);

   return 1;
   break;
  case '[':
   VAR_15 = FUNC_10 (VAR_11);

   VAR_15 = FUNC_9 (VAR_15, VAR_11, 1, VAR_11->stack->level);
   if (VAR_15 == ((void*)0)) {
    return 0;
   }

   FUNC_1 (VAR_12, VAR_13);

   return 1;
   break;
  case ']':

   if (VAR_11->stack && VAR_11->stack->obj->type == VAR_0) {
    VAR_11->state = VAR_7;
    return 1;
   }
   else {
    goto parse_string;
   }
   break;
  case '<':
   VAR_15 = FUNC_10 (VAR_11);

   if (VAR_12->end - VAR_13 > 3) {
    if (FUNC_0 (VAR_13, "<<", 2) == 0) {
     VAR_13 += 2;

     while (VAR_13 < VAR_12->end && *VAR_13 >= 'A' && *VAR_13 <= 'Z') {
      VAR_13 ++;
     }
     if (*VAR_13 =='\n') {

      VAR_14 += 2;
      VAR_12->remain -= VAR_13 - VAR_14;
      VAR_12->pos = VAR_13 + 1;
      VAR_12->column = 0;
      VAR_12->line ++;
      if ((VAR_17 = FUNC_7 (VAR_11, VAR_12, VAR_14,
        VAR_13 - VAR_14, &VAR_14, &VAR_20)) == 0) {
       FUNC_11 (VAR_11, VAR_4,
         "unterminated multiline value", &VAR_11->err);
       return 0;
      }

      VAR_15->type = VAR_9;
      VAR_15->flags |= VAR_6;
      if ((VAR_17 = FUNC_2 (VAR_11, VAR_14,
        &VAR_15->trash_stack[VAR_10],
        &VAR_15->value.sv, VAR_17 - 1, 0,
        0, VAR_20)) == -1) {
       return 0;
      }
      VAR_15->len = VAR_17;

      VAR_11->state = VAR_7;

      return 1;
     }
    }
   }

  default:
parse_string:
   if (VAR_15 == ((void*)0)) {
    VAR_15 = FUNC_10 (VAR_11);
   }


   if (FUNC_13 (*VAR_13, VAR_1)) {
    if (!FUNC_5 (VAR_11, VAR_12, VAR_15)) {
     if (VAR_11->state == VAR_8) {
      return 0;
     }
    }
    else {
     VAR_11->state = VAR_7;
     return 1;
    }

   }

   if (!FUNC_8 (VAR_11, VAR_12, &VAR_20,
     &VAR_18)) {
    return 0;
   }

   VAR_16 = 0;
   while (FUNC_13 (*(VAR_12->pos - 1 - VAR_16),
     VAR_2)) {
    VAR_16 ++;
   }
   VAR_17 = VAR_12->pos - VAR_14 - VAR_16;
   if (VAR_17 <= 0) {
    FUNC_11 (VAR_11, VAR_4, "string value must not be empty",
      &VAR_11->err);
    return 0;
   }
   else if (VAR_17 == 4 && FUNC_0 (VAR_14, "null", 4) == 0) {
    VAR_15->len = 0;
    VAR_15->type = VAR_5;
   }
   else if (!FUNC_6 (VAR_15, VAR_14, VAR_17)) {
    VAR_15->type = VAR_9;
    if ((VAR_17 = FUNC_2 (VAR_11, VAR_14,
      &VAR_15->trash_stack[VAR_10],
      &VAR_15->value.sv, VAR_17, VAR_18,
      0, VAR_20)) == -1) {
     return 0;
    }
    VAR_15->len = VAR_17;
   }
   VAR_11->state = VAR_7;
   VAR_13 = VAR_12->pos;

   return 1;
   break;
  }
 }

 return 1;
}
