
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_3__ ucl_object_t ;
struct ucl_parser {TYPE_3__* cur_obj; TYPE_2__* stack; TYPE_1__* chunks; } ;
struct TYPE_11__ {TYPE_3__* obj; } ;
struct TYPE_10__ {int priority; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (struct ucl_parser*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static inline ucl_object_t*
FUNC_4 (struct ucl_parser *VAR_2)
{
 ucl_object_t *VAR_3, *VAR_4 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_2->stack == ((void*)0) || VAR_2->stack->obj == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_2->stack->obj->type == VAR_0) {

  VAR_4 = FUNC_2 (VAR_1, VAR_2->chunks->priority);
  VAR_3 = VAR_2->stack->obj;

  if (!FUNC_0 (VAR_3, VAR_4)) {
   FUNC_3 (VAR_4);
   return ((void*)0);
  }

  VAR_2->cur_obj = VAR_4;
  FUNC_1 (VAR_2, VAR_4, 0);
 }
 else {

  VAR_4 = VAR_2->cur_obj;
 }

 return VAR_4;
}
