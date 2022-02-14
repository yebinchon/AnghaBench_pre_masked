
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ucl_stack {int level; struct ucl_stack* next; } ;
struct ucl_parser {struct ucl_stack* stack; int err; } ;
struct ucl_msgpack_parser {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static inline struct ucl_stack *
FUNC_4 (struct ucl_parser *VAR_4,
  struct ucl_msgpack_parser *VAR_5, uint64_t VAR_6)
{
 struct ucl_stack *VAR_7;

 FUNC_0 (VAR_5 != ((void*)0));

 if (VAR_5->flags & VAR_2) {
  FUNC_0 ((VAR_6 & VAR_0) == 0);



  if (VAR_4->stack == ((void*)0)) {
   VAR_4->stack = FUNC_1 (1, sizeof (struct ucl_stack));

   if (VAR_4->stack == ((void*)0)) {
    FUNC_3 (&VAR_4->err, "no memory");
    return ((void*)0);
   }
  }
  else {
   VAR_7 = FUNC_1 (1, sizeof (struct ucl_stack));

   if (VAR_7 == ((void*)0)) {
    FUNC_3 (&VAR_4->err, "no memory");
    return ((void*)0);
   }

   VAR_7->next = VAR_4->stack;
   VAR_4->stack = VAR_7;
  }

  VAR_4->stack->level = VAR_6 | VAR_0;
 }
 else {



  if (VAR_4->stack) {
   return VAR_4->stack;
  }
  else {
   FUNC_3 (&VAR_4->err, "bad top level object for msgpack");
   return ((void*)0);
  }
 }

 return VAR_4->stack;
}
