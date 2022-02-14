
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; int * buf; } ;
struct demangle_data {int ptr; int ref; int cnst; int array; int cnst_fn; int class_name; int vec; int arg; int type; TYPE_1__ array_str; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(struct demangle_data *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (0);

 VAR_1->ptr = 0;
 VAR_1->ref = 0;
 VAR_1->cnst = 0;
 VAR_1->array = 0;
 VAR_1->cnst_fn = 0;
 VAR_1->class_name = 0;

 VAR_1->array_str.buf = ((void*)0);
 VAR_1->array_str.size = 0;

 VAR_1->type = VAR_0;

 if (FUNC_1(&VAR_1->vec) == 0)
  return (0);

 if (FUNC_1(&VAR_1->arg) == 0) {
  FUNC_0(&VAR_1->vec);

  return (0);
 }

 return (1);
}
