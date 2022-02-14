
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int type; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_parser {int state; int prev_state; int flags; TYPE_3__* last_comment; TYPE_3__* top_obj; TYPE_2__* stack; TYPE_3__* cur_obj; int err; struct ucl_chunk* chunks; int macroes; } ;
struct TYPE_15__ {int (* context_handler ) (unsigned char const*,size_t,TYPE_3__*,TYPE_3__*,int ) ;int (* handler ) (unsigned char const*,size_t,TYPE_3__*,int ) ;} ;
struct ucl_macro {int ud; TYPE_1__ h; int is_context; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; int column; int line; } ;
struct TYPE_16__ {TYPE_3__* obj; int level; } ;


 int FUNC_0 (int ,int ,unsigned char const*,size_t,struct ucl_macro*) ;
 int FUNC_1 (struct ucl_parser*,struct ucl_chunk*,unsigned char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t,unsigned char*) ;
 int VAR_3 ;
 int VAR_4 ;

 void* VAR_5 ;





 int VAR_6 ;
 int FUNC_3 (unsigned char const*,size_t,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_4 (unsigned char const*,size_t,TYPE_3__*,int ) ;
 int FUNC_5 (unsigned char*,size_t,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_6 (unsigned char*,size_t,TYPE_3__*,int ) ;
 int FUNC_7 (struct ucl_parser*,TYPE_3__*,int) ;
 int FUNC_8 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_9 (int *,char*,int ,int ,...) ;
 size_t FUNC_10 (struct ucl_parser*,unsigned char**,unsigned char const*,size_t) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct ucl_parser*,struct ucl_chunk*) ;
 int FUNC_13 (struct ucl_parser*,struct ucl_chunk*,int*,int*) ;
 TYPE_3__* FUNC_14 (struct ucl_parser*,struct ucl_chunk*) ;
 int FUNC_15 (struct ucl_parser*,struct ucl_chunk*,struct ucl_macro*,unsigned char const**,size_t*) ;
 int FUNC_16 (struct ucl_parser*,struct ucl_chunk*) ;
 TYPE_3__* FUNC_17 (TYPE_3__*,struct ucl_parser*,int,int ) ;
 int FUNC_18 (struct ucl_parser*,int ,char*,int *) ;
 int FUNC_19 (struct ucl_parser*) ;
 int FUNC_20 (struct ucl_parser*,struct ucl_chunk*) ;
 int FUNC_21 (unsigned char const,int ) ;

__attribute__((used)) static bool
FUNC_22 (struct ucl_parser *VAR_7)
{
 ucl_object_t *VAR_8, *VAR_9;
 struct ucl_chunk *VAR_10 = VAR_7->chunks;
 const unsigned char *VAR_11, *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 unsigned char *VAR_14;
 size_t VAR_15 = 0;
 struct ucl_macro *VAR_16 = ((void*)0);
 bool VAR_17 = 0, VAR_18 = 0, VAR_19;

 if (VAR_7->top_obj == ((void*)0)) {
  VAR_7->state = 132;
 }

 VAR_11 = VAR_10->pos;
 while (VAR_10->pos < VAR_10->end) {
  switch (VAR_7->state) {
  case 132:





   if (!FUNC_19 (VAR_7)) {
    VAR_7->prev_state = VAR_7->state;
    VAR_7->state = VAR_5;
    return 0;
   }
   else {

    while (VAR_11 < VAR_10->end && FUNC_21 (*VAR_11,
      VAR_0)) {
     FUNC_8 (VAR_10, VAR_11);
    }

    VAR_11 = VAR_10->pos;

    if (*VAR_11 == '[') {
     VAR_7->state = 128;
     FUNC_8 (VAR_10, VAR_11);
    }
    else {
     VAR_7->state = 131;
     if (*VAR_11 == '{') {
      FUNC_8 (VAR_10, VAR_11);
     }
    }

    if (VAR_7->top_obj == ((void*)0)) {
     if (VAR_7->state == 128) {
      VAR_8 = FUNC_17 (((void*)0), VAR_7, 1, 0);
     }
     else {
      VAR_8 = FUNC_17 (((void*)0), VAR_7, 0, 0);
     }

     if (VAR_8 == ((void*)0)) {
      return 0;
     }

     VAR_7->top_obj = VAR_8;
     VAR_7->cur_obj = VAR_8;
    }

   }
   break;
  case 131:

   while (VAR_11 < VAR_10->end && FUNC_21 (*VAR_11, VAR_0)) {
    FUNC_8 (VAR_10, VAR_11);
   }
   if (VAR_11 == VAR_10->end || *VAR_11 == '}') {

    VAR_7->state = 133;
    continue;
   }
   if (VAR_7->stack == ((void*)0)) {

    FUNC_18 (VAR_7, VAR_2, "top object is finished but the parser "
      "expects a key", &VAR_7->err);
    VAR_7->prev_state = VAR_7->state;
    VAR_7->state = VAR_5;
    return 0;
   }
   if (!FUNC_13 (VAR_7, VAR_10, &VAR_17, &VAR_18)) {
    VAR_7->prev_state = VAR_7->state;
    VAR_7->state = VAR_5;
    return 0;
   }
   if (VAR_18) {
    VAR_11 = VAR_10->pos;
    VAR_7->state = 133;
    continue;
   }
   else if (VAR_7->state != 129) {
    if (VAR_17 && VAR_7->stack->obj->type == VAR_3) {

     VAR_8 = FUNC_17 (VAR_7->cur_obj, VAR_7, 0,
       VAR_7->stack->level + 1);
     if (VAR_8 == ((void*)0)) {
      return 0;
     }
    }
    else {
     VAR_7->state = 128;
    }
   }
   else {
    VAR_12 = VAR_10->pos;
   }
   VAR_11 = VAR_10->pos;
   break;
  case 128:

   if (!VAR_7->cur_obj || !FUNC_16 (VAR_7, VAR_10)) {
    VAR_7->prev_state = VAR_7->state;
    VAR_7->state = VAR_5;
    return 0;
   }

   VAR_11 = VAR_10->pos;
   break;
  case 133:
   if (!FUNC_12 (VAR_7, VAR_10)) {
    VAR_7->prev_state = VAR_7->state;
    VAR_7->state = VAR_5;
    return 0;
   }

   if (VAR_7->stack != ((void*)0)) {
    if (VAR_7->stack->obj->type == VAR_3) {
     VAR_7->state = 131;
    }
    else {

     VAR_7->state = 128;
    }
   }
   else {

    return 1;
   }

   VAR_11 = VAR_10->pos;
   break;
  case 129:
   if (VAR_7->flags & VAR_4) {
    if (!FUNC_20 (VAR_7, VAR_10)) {

     FUNC_9 (&VAR_7->err,
       "error on line %d at column %d: invalid macro",
       VAR_10->line,
       VAR_10->column);
     VAR_7->state = VAR_5;
     return 0;
    }
    else {
     VAR_11 = VAR_10->pos;
     VAR_7->state = VAR_7->prev_state;
    }
   }
   else {
    if (!FUNC_21 (*VAR_11, VAR_0) &&
      *VAR_11 != '(') {
     FUNC_8 (VAR_10, VAR_11);
    }
    else {
     if (VAR_12 != ((void*)0) && VAR_11 - VAR_12 > 0) {

      VAR_15 = (size_t) (VAR_11 - VAR_12);
      FUNC_0 (VAR_6, VAR_7->macroes, VAR_12, VAR_15, VAR_16);
      if (VAR_16 == ((void*)0)) {
       FUNC_9 (&VAR_7->err,
         "error on line %d at column %d: "
         "unknown macro: '%.*s', character: '%c'",
         VAR_10->line,
         VAR_10->column,
         (int) (VAR_11 - VAR_12),
         VAR_12,
         *VAR_10->pos);
       VAR_7->state = VAR_5;
       return 0;
      }

      FUNC_1(VAR_7, VAR_10, VAR_11);
      VAR_7->state = 130;
     }
     else {

      FUNC_9 (&VAR_7->err,
        "error on line %d at column %d: invalid macro name",
        VAR_10->line,
        VAR_10->column);
      VAR_7->state = VAR_5;
      return 0;
     }
    }
   }
   break;
  case 130:
   if (*VAR_10->pos == '(') {
    VAR_9 = FUNC_14 (VAR_7, VAR_10);
    VAR_11 = VAR_10->pos;
    if (VAR_9) {
     FUNC_1(VAR_7, VAR_10, VAR_11);
    }
   }
   else {
    VAR_9 = ((void*)0);
   }
   if (!FUNC_15 (VAR_7, VAR_10, VAR_16,
     &VAR_13, &VAR_15)) {
    VAR_7->prev_state = VAR_7->state;
    VAR_7->state = VAR_5;
    return 0;
   }
   VAR_15 = FUNC_10 (VAR_7, &VAR_14,
     VAR_13, VAR_15);
   VAR_7->state = VAR_7->prev_state;

   if (VAR_14 == ((void*)0) && VAR_16 != ((void*)0)) {
    if (VAR_16->is_context) {
     VAR_19 = VAR_16->h.context_handler (VAR_13, VAR_15,
       VAR_9,
       VAR_7->top_obj,
       VAR_16->ud);
    }
    else {
     VAR_19 = VAR_16->h.handler (VAR_13, VAR_15, VAR_9,
       VAR_16->ud);
    }
   }
   else if (VAR_16 != ((void*)0)) {
    if (VAR_16->is_context) {
     VAR_19 = VAR_16->h.context_handler (VAR_14, VAR_15,
       VAR_9,
       VAR_7->top_obj,
       VAR_16->ud);
    }
    else {
     VAR_19 = VAR_16->h.handler (VAR_14, VAR_15, VAR_9,
      VAR_16->ud);
    }

    FUNC_2 (VAR_15 + 1, VAR_14);
   }
   else {
    VAR_19 = 0;
    FUNC_18 (VAR_7, VAR_1,
      "internal error: parser has macro undefined", &VAR_7->err);
   }




   VAR_10 = VAR_7->chunks;
   VAR_11 = VAR_10->pos;

   if (VAR_9) {
    FUNC_11 (VAR_9);
   }

   if (!VAR_19) {
    return 0;
   }
   break;
  default:
   FUNC_18 (VAR_7, VAR_1,
     "internal error: parser is in an unknown state", &VAR_7->err);
   VAR_7->state = VAR_5;
   return 0;
  }
 }

 if (VAR_7->last_comment) {
  if (VAR_7->cur_obj) {
   FUNC_7 (VAR_7, VAR_7->cur_obj, 1);
  }
  else if (VAR_7->stack && VAR_7->stack->obj) {
   FUNC_7 (VAR_7, VAR_7->stack->obj, 1);
  }
  else if (VAR_7->top_obj) {
   FUNC_7 (VAR_7, VAR_7->top_obj, 1);
  }
  else {
   FUNC_11 (VAR_7->last_comment);
  }
 }

 return 1;
}
