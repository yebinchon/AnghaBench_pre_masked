
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucl_stack {scalar_t__ level; TYPE_1__* obj; struct ucl_stack* next; } ;
struct ucl_parser {int err; struct ucl_stack* stack; TYPE_1__* cur_obj; } ;
struct ucl_chunk {unsigned char* pos; unsigned char const* end; int remain; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct ucl_stack*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ucl_parser*,TYPE_1__*,int) ;
 int FUNC_2 (struct ucl_chunk*,unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const,unsigned char const) ;
 int FUNC_4 (struct ucl_parser*,int ,char*,int *) ;
 int FUNC_5 (struct ucl_parser*) ;
 scalar_t__ FUNC_6 (unsigned char const,int ) ;

__attribute__((used)) static bool
FUNC_7 (struct ucl_parser *VAR_5, struct ucl_chunk *VAR_6)
{
 const unsigned char *VAR_7;
 bool VAR_8 = 0;
 struct ucl_stack *VAR_9;

 VAR_7 = VAR_6->pos;

 while (VAR_7 < VAR_6->end) {
  if (FUNC_6 (*VAR_7, VAR_2)) {

   FUNC_2 (VAR_6, VAR_7);
  }
  else if (VAR_6->remain >= 2 && FUNC_3 (VAR_7[0], VAR_7[1])) {

   if (!FUNC_5 (VAR_5)) {
    return 0;
   }

   VAR_8 = 1;
   VAR_7 = VAR_6->pos;
  }
  else if (FUNC_6 (*VAR_7, VAR_1)) {
   if (*VAR_7 == '}' || *VAR_7 == ']') {
    if (VAR_5->stack == ((void*)0)) {
     FUNC_4 (VAR_5, VAR_3,
       "end of array or object detected without corresponding start",
       &VAR_5->err);
     return 0;
    }
    if ((*VAR_7 == '}' && VAR_5->stack->obj->type == VAR_4) ||
      (*VAR_7 == ']' && VAR_5->stack->obj->type == VAR_0)) {


     VAR_9 = VAR_5->stack;
     VAR_5->stack = VAR_9->next;
     FUNC_0 (sizeof (struct ucl_stack), VAR_9);

     if (VAR_5->cur_obj) {
      FUNC_1 (VAR_5, VAR_5->cur_obj, 1);
     }

     while (VAR_5->stack != ((void*)0)) {
      VAR_9 = VAR_5->stack;

      if (VAR_9->next == ((void*)0) || VAR_9->next->level == VAR_9->level) {
       break;
      }

      VAR_5->stack = VAR_9->next;
      VAR_5->cur_obj = VAR_9->obj;
      FUNC_0 (sizeof (struct ucl_stack), VAR_9);
     }
    }
    else {
     FUNC_4 (VAR_5, VAR_3,
       "unexpected terminating symbol detected",
       &VAR_5->err);
     return 0;
    }

    if (VAR_5->stack == ((void*)0)) {

     return 1;
    }
    else {
     FUNC_2 (VAR_6, VAR_7);
    }
    VAR_8 = 1;
   }
   else {

    VAR_8 = 1;
    FUNC_2 (VAR_6, VAR_7);
   }
  }
  else {

   if (!VAR_8) {
    FUNC_4 (VAR_5, VAR_3, "delimiter is missing",
      &VAR_5->err);
    return 0;
   }
   return 1;
  }
 }

 return 1;
}
