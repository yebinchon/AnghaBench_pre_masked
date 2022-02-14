
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* key; int keylen; int flags; int * trash_stack; } ;
typedef TYPE_2__ ucl_object_t ;
struct ucl_parser {int flags; int err; TYPE_1__* chunks; void* state; void* prev_state; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; int remain; } ;
typedef int ssize_t ;
struct TYPE_6__ {int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct ucl_chunk*,unsigned char const*) ;
 int FUNC_1 (struct ucl_parser*,unsigned char const*,int *,char const**,int,int,int,int) ;
 scalar_t__ FUNC_2 (unsigned char const,unsigned char const) ;
 int FUNC_3 (struct ucl_parser*,struct ucl_chunk*,int*,int*,int*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct ucl_parser*,TYPE_2__*) ;
 int FUNC_7 (struct ucl_parser*,int ,char*,int *) ;
 int FUNC_8 (struct ucl_parser*) ;
 scalar_t__ FUNC_9 (unsigned char const,int ) ;

__attribute__((used)) static bool
FUNC_10 (struct ucl_parser *VAR_12, struct ucl_chunk *VAR_13,
  bool *VAR_14, bool *VAR_15)
{
 const unsigned char *VAR_16, *VAR_17 = ((void*)0), *VAR_18, *VAR_19;
 const char *VAR_20 = ((void*)0);
 bool VAR_21 = 0, VAR_22 = 0, VAR_23 = 0,
   VAR_24 = 0, VAR_25 = 0, VAR_26 = 0,
   VAR_27 = 0, VAR_28 = 0;
 ucl_object_t *VAR_29;
 ssize_t VAR_30;

 VAR_16 = VAR_13->pos;

 if (*VAR_16 == '.') {

  if (!(VAR_12->flags & VAR_8)) {
   FUNC_0 (VAR_13, VAR_16);
  }

  VAR_12->prev_state = VAR_12->state;
  VAR_12->state = VAR_10;
  *VAR_15 = 0;
  return 1;
 }
 while (VAR_16 < VAR_13->end) {



  if (VAR_17 == ((void*)0)) {
   if (VAR_13->remain >= 2 && FUNC_2 (VAR_16[0], VAR_16[1])) {
    if (!FUNC_8 (VAR_12)) {
     return 0;
    }
    VAR_16 = VAR_13->pos;
   }
   else if (FUNC_9 (*VAR_16, VAR_4)) {
    FUNC_0 (VAR_13, VAR_16);
   }
   else if (FUNC_9 (*VAR_16, VAR_2)) {

    VAR_17 = VAR_16;
    FUNC_0 (VAR_13, VAR_16);
    VAR_27 = 1;
   }
   else if (*VAR_16 == '"') {

    VAR_17 = VAR_16 + 1;
    VAR_21 = 1;
    VAR_27 = 1;
    FUNC_0 (VAR_13, VAR_16);
   }
   else if (*VAR_16 == '}') {

    *VAR_15 = 1;
    return 1;
   }
   else if (*VAR_16 == '.') {
    FUNC_0 (VAR_13, VAR_16);
    VAR_12->prev_state = VAR_12->state;
    VAR_12->state = VAR_10;
    return 1;
   }
   else {

    FUNC_7 (VAR_12, VAR_5, "key must begin with a letter",
      &VAR_12->err);
    return 0;
   }
  }
  else {

   if (!VAR_21) {
    if (FUNC_9 (*VAR_16, VAR_0)) {
     VAR_27 = 1;
     FUNC_0 (VAR_13, VAR_16);
    }
    else if (FUNC_9 (*VAR_16, VAR_1)) {
     VAR_18 = VAR_16;
     break;
    }
    else {
     FUNC_7 (VAR_12, VAR_5, "invalid character in a key",
       &VAR_12->err);
     return 0;
    }
   }
   else {

    if (!FUNC_3 (VAR_12, VAR_13, &VAR_24, &VAR_25, &VAR_26)) {
     return 0;
    }

    VAR_18 = VAR_13->pos - 1;
    VAR_16 = VAR_13->pos;
    break;
   }
  }
 }

 if (VAR_16 >= VAR_13->end && VAR_27) {
  FUNC_7 (VAR_12, VAR_5, "unfinished key", &VAR_12->err);
  return 0;
 }
 else if (!VAR_27) {
  return 1;
 }
 *VAR_15 = 0;

 while (VAR_16 < VAR_13->end) {
  if (FUNC_9 (*VAR_16, VAR_3)) {
   FUNC_0 (VAR_13, VAR_16);
  }
  else if (*VAR_16 == '=') {
   if (!VAR_22 && !VAR_23) {
    FUNC_0 (VAR_13, VAR_16);
    VAR_22 = 1;
   }
   else {
    FUNC_7 (VAR_12, VAR_5, "unexpected '=' character",
      &VAR_12->err);
    return 0;
   }
  }
  else if (*VAR_16 == ':') {
   if (!VAR_22 && !VAR_23) {
    FUNC_0 (VAR_13, VAR_16);
    VAR_23 = 1;
   }
   else {
    FUNC_7 (VAR_12, VAR_5, "unexpected ':' character",
      &VAR_12->err);
    return 0;
   }
  }
  else if (VAR_13->remain >= 2 && FUNC_2 (VAR_16[0], VAR_16[1])) {

   if (!FUNC_8 (VAR_12)) {
    return 0;
   }
   VAR_16 = VAR_13->pos;
  }
  else {

   break;
  }
 }

 if (VAR_16 >= VAR_13->end && VAR_27) {
  FUNC_7 (VAR_12, VAR_5, "unfinished key", &VAR_12->err);
  return 0;
 }

 VAR_28 = VAR_23 || VAR_22;

 if (!VAR_28) {







  VAR_19 = VAR_16;
  *VAR_14 = 0;
  while (FUNC_9 (*VAR_19, VAR_3)) {
   VAR_19 ++;
  }

  if (*VAR_19 != '{' && *VAR_19 != '[') {
   while (VAR_19 < VAR_13->end) {
    if (*VAR_19 == ',' || *VAR_19 == ';' || *VAR_19 == '\n' || *VAR_19 == '\r') {
     break;
    }
    else if (*VAR_19 == '{' || *VAR_19 == '[') {
     *VAR_14 = 1;
     break;
    }
    VAR_19 ++;
   }
  }
 }


 VAR_29 = FUNC_4 (VAR_6, VAR_12->chunks->priority);
 VAR_30 = FUNC_1 (VAR_12, VAR_17, &VAR_29->trash_stack[VAR_11],
   &VAR_20, VAR_18 - VAR_17, VAR_24, VAR_12->flags & VAR_9, 0);
 if (VAR_30 == -1) {
  FUNC_5 (VAR_29);
  return 0;
 }
 else if (VAR_30 == 0) {
  FUNC_7 (VAR_12, VAR_5, "empty keys are not allowed", &VAR_12->err);
  FUNC_5 (VAR_29);
  return 0;
 }

 VAR_29->key = VAR_20;
 VAR_29->keylen = VAR_30;

 if (!FUNC_6 (VAR_12, VAR_29)) {
  return 0;
 }

 if (VAR_25) {
  VAR_29->flags |= VAR_7;
 }


 return 1;
}
