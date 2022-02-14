
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * ov; } ;
struct TYPE_10__ {void* type; TYPE_1__ value; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_stack {int level; TYPE_3__* obj; } ;
struct ucl_parser {int flags; TYPE_3__* cur_obj; int stack; int err; int state; TYPE_2__* chunks; } ;
struct TYPE_9__ {int priority; } ;


 int FUNC_0 (int ,struct ucl_stack*) ;
 struct ucl_stack* FUNC_1 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (void*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct ucl_parser*,int ,char*,int *) ;

__attribute__((used)) static inline ucl_object_t *
FUNC_6 (ucl_object_t *VAR_6, struct ucl_parser *VAR_7,
  bool VAR_8, int VAR_9)
{
 struct ucl_stack *VAR_10;

 if (!VAR_8) {
  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_3 (VAR_2, VAR_7->chunks->priority);
  }
  else {
   VAR_6->type = VAR_2;
  }
  if (VAR_6->value.ov == ((void*)0)) {
   VAR_6->value.ov = FUNC_2 (VAR_7->flags & VAR_3);
  }
  VAR_7->state = VAR_4;
 }
 else {
  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_3 (VAR_0, VAR_7->chunks->priority);
  }
  else {
   VAR_6->type = VAR_0;
  }
  VAR_7->state = VAR_5;
 }

 VAR_10 = FUNC_1 (sizeof (struct ucl_stack));

 if (VAR_10 == ((void*)0)) {
  FUNC_5 (VAR_7, VAR_1, "cannot allocate memory for an object",
    &VAR_7->err);
  FUNC_4 (VAR_6);
  return ((void*)0);
 }

 VAR_10->obj = VAR_6;
 VAR_10->level = VAR_9;
 FUNC_0 (VAR_7->stack, VAR_10);
 VAR_7->cur_obj = VAR_6;

 return VAR_6;
}
