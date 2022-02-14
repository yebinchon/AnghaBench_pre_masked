
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* variable ;
typedef TYPE_3__* location_chain ;
struct TYPE_11__ {int vars; } ;
typedef TYPE_4__ dataflow_set ;
struct TYPE_10__ {int * loc; struct TYPE_10__* next; } ;
struct TYPE_9__ {int refcount; int n_var_parts; int decl; TYPE_1__* var_part; } ;
struct TYPE_8__ {int * cur_loc; TYPE_3__* loc_chain; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void** FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static variable
FUNC_3 (dataflow_set *VAR_3, variable VAR_4)
{
  void **VAR_5;
  variable VAR_6;
  int VAR_7;

  VAR_6 = FUNC_2 (VAR_2);
  VAR_6->decl = VAR_4->decl;
  VAR_6->refcount = 1;
  VAR_4->refcount--;
  VAR_6->n_var_parts = VAR_4->n_var_parts;

  for (VAR_7 = 0; VAR_7 < VAR_4->n_var_parts; VAR_7++)
    {
      location_chain VAR_8;
      location_chain *VAR_9;

      VAR_6->var_part[VAR_7].offset = VAR_4->var_part[VAR_7].offset;
      VAR_9 = &VAR_6->var_part[VAR_7].loc_chain;
      for (VAR_8 = VAR_4->var_part[VAR_7].loc_chain; VAR_8; VAR_8 = VAR_8->next)
 {
   location_chain VAR_10;

   VAR_10 = FUNC_2 (VAR_1);
   VAR_10->next = ((void*)0);
   VAR_10->loc = VAR_8->loc;

   *VAR_9 = VAR_10;
   VAR_9 = &VAR_10->next;
 }



      if (VAR_6->var_part[VAR_7].loc_chain)
 VAR_6->var_part[VAR_7].cur_loc = VAR_6->var_part[VAR_7].loc_chain->loc;
      else
 VAR_6->var_part[VAR_7].cur_loc = ((void*)0);
    }

  VAR_5 = FUNC_1 (VAR_3->vars, VAR_6->decl,
       FUNC_0 (VAR_6->decl),
       VAR_0);
  *VAR_5 = VAR_6;
  return VAR_6;
}
