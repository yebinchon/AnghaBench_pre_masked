
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ucl_stack {int level; } ;
struct ucl_parser {struct ucl_stack* stack; int err; void* cur_obj; TYPE_1__* chunks; } ;
struct ucl_msgpack_parser {int flags; int len; unsigned char const prefix; int (* func ) (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;int fmt; } ;
typedef int ssize_t ;
typedef enum e_msgpack_parser_state { ____Placeholder_e_msgpack_parser_state } e_msgpack_parser_state ;
struct TYPE_2__ {unsigned char* begin; int remain; int priority; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;
 int FUNC_5 (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;
 int FUNC_6 (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;
 int FUNC_7 (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;
 int FUNC_8 (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;
 int FUNC_9 (struct ucl_parser*,struct ucl_stack*,int,int ,unsigned char const*,int) ;
 int FUNC_10 (int *,char*,...) ;
 struct ucl_stack* FUNC_11 (struct ucl_parser*,struct ucl_msgpack_parser*,int) ;
 int FUNC_12 (struct ucl_parser*) ;
 struct ucl_msgpack_parser* FUNC_13 (unsigned char const) ;
 int FUNC_14 (struct ucl_parser*,unsigned char const*,int,void*) ;
 int FUNC_15 (struct ucl_stack*) ;
 void* FUNC_16 (int ,int ) ;

__attribute__((used)) static bool
FUNC_17 (struct ucl_parser *VAR_10)
{
 const unsigned char *VAR_11, *VAR_12, *VAR_13 = ((void*)0);
 struct ucl_stack *VAR_14;
 enum e_msgpack_parser_state {
  read_type,
  start_assoc,
  start_array,
  read_assoc_key,
  read_assoc_value,
  finish_assoc_value,
  read_array_value,
  finish_array_value,
  error_state
 } VAR_15 = read_type, VAR_16 = error_state;
 struct ucl_msgpack_parser *VAR_17 = ((void*)0);
 uint64_t VAR_18 = 0;
 ssize_t VAR_19, VAR_20, VAR_21 = 0;





 VAR_11 = VAR_10->chunks->begin;
 VAR_20 = VAR_10->chunks->remain;
 VAR_12 = VAR_11 + VAR_20;


 while (VAR_11 < VAR_12) {



  switch (VAR_15) {
  case read_type:
   VAR_17 = FUNC_13 (*VAR_11);

   if (VAR_17 == ((void*)0)) {
    FUNC_10 (&VAR_10->err, "unknown msgpack format: %x",
      (unsigned int)*VAR_11);

    return 0;
   }

   if (VAR_17->flags & VAR_5) {
    if (VAR_17->len == 0) {

     VAR_18 = *VAR_11 & ~VAR_17->prefix;
    }
    else {
     if (VAR_20 < VAR_17->len) {
      FUNC_10 (&VAR_10->err, "not enough data remain to "
        "read object's length: %u remain, %u needed",
        (unsigned)VAR_20, VAR_17->len);

      return 0;
     }

     VAR_18 = VAR_17->len;
    }

    if (!(VAR_17->flags & VAR_7)) {

     if (VAR_20 > 0) {
      VAR_11 ++;
      VAR_20 --;
     }
    }
    else {

     VAR_18 = 0;
    }
   }
   else {

    if (VAR_20 < VAR_17->len) {
     FUNC_10 (&VAR_10->err, "not enough data remain to "
       "read object's length: %u remain, %u needed",
       (unsigned)VAR_20, VAR_17->len);

     return 0;
    }

    VAR_11 ++;
    VAR_20 --;

    switch (VAR_17->len) {
    case 1:
     VAR_18 = *VAR_11;
     break;
    case 2:
     VAR_18 = FUNC_0 (*(uint16_t *)VAR_11);
     break;
    case 4:
     VAR_18 = FUNC_1 (*(uint32_t *)VAR_11);
     break;
    case 8:
     VAR_18 = FUNC_2 (*(uint64_t *)VAR_11);
     break;
    default:
     FUNC_3 (0);
     break;
    }

    VAR_11 += VAR_17->len;
    VAR_20 -= VAR_17->len;
   }

   if (VAR_17->flags & VAR_3) {

    VAR_15 = start_assoc;
   }
   else if (VAR_17->flags & VAR_4){
    VAR_15 = start_array;
   }
   else {
    VAR_15 = VAR_16;
   }

   break;
  case start_assoc:
   VAR_10->cur_obj = FUNC_16 (VAR_9,
     VAR_10->chunks->priority);

   if (VAR_10->stack && !FUNC_14 (VAR_10,
     VAR_13, VAR_21, VAR_10->cur_obj)) {
    return 0;
   }

   VAR_14 = FUNC_11 (VAR_10, VAR_17, VAR_18);

   if (VAR_14 == ((void*)0)) {
    return 0;
   }

   VAR_19 = VAR_17->func (VAR_10, VAR_14, VAR_18, VAR_17->fmt,
     VAR_11, VAR_20);
   VAR_0;
   VAR_13 = ((void*)0);
   VAR_21 = 0;

   if (VAR_18 > 0) {
    VAR_15 = read_type;
    VAR_16 = read_assoc_key;
   }
   else {

    VAR_15 = finish_assoc_value;
   }
   break;

  case start_array:
   VAR_10->cur_obj = FUNC_16 (VAR_8,
     VAR_10->chunks->priority);

   if (VAR_10->stack && !FUNC_14 (VAR_10,
     VAR_13, VAR_21, VAR_10->cur_obj)) {
    return 0;
   }

   VAR_14 = FUNC_11 (VAR_10, VAR_17, VAR_18);

   if (VAR_14 == ((void*)0)) {
    return 0;
   }

   VAR_19 = VAR_17->func (VAR_10, VAR_14, VAR_18, VAR_17->fmt,
        VAR_11, VAR_20);
   VAR_0;

   if (VAR_18 > 0) {
    VAR_15 = read_type;
    VAR_16 = read_array_value;
   }
   else {

    VAR_15 = finish_array_value;
   }
   break;

  case read_array_value:




   VAR_14 = VAR_10->stack;

   if (VAR_14 == ((void*)0)) {
    return 0;
   }

   VAR_19 = VAR_17->func (VAR_10, VAR_14, VAR_18, VAR_17->fmt,
     VAR_11, VAR_20);
   VAR_0;



   if (!FUNC_14 (VAR_10, ((void*)0), 0,
     VAR_10->cur_obj)) {
    return 0;
   }

   if (FUNC_15 (VAR_14)) {
    VAR_15 = finish_array_value;
   }
   else {

    VAR_15 = read_type;
    VAR_16 = read_array_value;
   }

   break;

  case read_assoc_key:



   if (!(VAR_17->flags & VAR_6)) {
    FUNC_10 (&VAR_10->err, "bad type for key: %u, expected "
      "string", (unsigned)VAR_17->fmt);

    return 0;
   }

   VAR_13 = VAR_11;
   VAR_21 = VAR_18;

   if (VAR_21 > VAR_20 || VAR_21 == 0) {
    FUNC_10 (&VAR_10->err, "too long or empty key");
    return 0;
   }

   VAR_11 += VAR_18;
   VAR_20 -= VAR_18;

   VAR_15 = read_type;
   VAR_16 = read_assoc_value;
   break;

  case read_assoc_value:




   VAR_14 = VAR_10->stack;

   if (VAR_14 == ((void*)0)) {
    return 0;
   }

   VAR_19 = VAR_17->func (VAR_10, VAR_14, VAR_18, VAR_17->fmt,
     VAR_11, VAR_20);
   VAR_0;

   FUNC_3 (VAR_13 != ((void*)0) && VAR_21 > 0);

   if (!FUNC_14 (VAR_10, VAR_13, VAR_21,
     VAR_10->cur_obj)) {
    return 0;
   }

   VAR_13 = ((void*)0);
   VAR_21 = 0;

   if (FUNC_15 (VAR_14)) {
    VAR_15 = finish_assoc_value;
   }
   else {

    VAR_15 = read_type;
    VAR_16 = read_assoc_key;
   }
   break;

  case finish_array_value:
  case finish_assoc_value:
   VAR_1;
   VAR_15 = read_type;
   break;

  case error_state:
   FUNC_10 (&VAR_10->err, "invalid state machine state");

   return 0;
  }
 }


 switch (VAR_15) {
 case start_array:
 case start_assoc:

  if (VAR_18 != 0) {
   FUNC_10 (&VAR_10->err, "invalid non-empty container at the end");

   return 0;
  }

  VAR_10->cur_obj = FUNC_16 (
    VAR_15 == start_array ? VAR_8 : VAR_9,
    VAR_10->chunks->priority);

  if (!FUNC_14 (VAR_10,
    VAR_13, VAR_21, VAR_10->cur_obj)) {
   return 0;
  }

  VAR_14 = FUNC_11 (VAR_10, VAR_17, VAR_18);

  if (VAR_14 == ((void*)0)) {
   return 0;
  }

  VAR_19 = VAR_17->func (VAR_10, VAR_14, VAR_18, VAR_17->fmt,
    VAR_11, VAR_20);
  break;

 case read_array_value:
 case read_assoc_value:
  if (VAR_18 != 0) {
   FUNC_10 (&VAR_10->err, "unfinished value at the end");

   return 0;
  }

  VAR_14 = VAR_10->stack;

  if (VAR_14 == ((void*)0)) {
   return 0;
  }

  VAR_19 = VAR_17->func (VAR_10, VAR_14, VAR_18, VAR_17->fmt,
    VAR_11, VAR_20);
  VAR_0;



  if (!FUNC_14 (VAR_10, ((void*)0), 0,
    VAR_10->cur_obj)) {
   return 0;
  }
  break;
 case finish_array_value:
 case finish_assoc_value:
 case read_type:

  break;
 default:

  FUNC_10 (&VAR_10->err, "invalid state machine finishing state: %d",
    VAR_15);

  return 0;
 }


 FUNC_12 (VAR_10);
 FUNC_3 (VAR_10->stack == ((void*)0) ||
   (VAR_10->stack->level & VAR_2) == 0);

 return 1;
}
