
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* variable ;
typedef int tree ;
typedef void* rtx ;
typedef TYPE_3__* location_chain ;
struct TYPE_15__ {int vars; } ;
typedef TYPE_4__ dataflow_set ;
struct TYPE_14__ {void* loc; struct TYPE_14__* next; } ;
struct TYPE_13__ {int refcount; int n_var_parts; TYPE_1__* var_part; int decl; } ;
struct TYPE_12__ {int * cur_loc; TYPE_3__* loc_chain; void* offset; } ;
typedef void* HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,void*,int*) ;
 int FUNC_4 (int) ;
 void** FUNC_5 (int ,int ,int ,int ) ;
 int VAR_2 ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_8 (void*,void*) ;
 TYPE_2__* FUNC_9 (TYPE_4__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_11 (dataflow_set *VAR_4, rtx VAR_5, tree VAR_6, HOST_WIDE_INT VAR_7)
{
  int VAR_8;
  location_chain VAR_9, VAR_10;
  location_chain *VAR_11;
  variable VAR_12;
  void **VAR_13;

  VAR_13 = FUNC_5 (VAR_4->vars, VAR_6,
       FUNC_2 (VAR_6), VAR_0);
  if (!*VAR_13)
    {

      VAR_12 = FUNC_6 (VAR_3);
      VAR_12->decl = VAR_6;
      VAR_12->refcount = 1;
      VAR_12->n_var_parts = 1;
      VAR_12->var_part[0].offset = VAR_7;
      VAR_12->var_part[0].loc_chain = ((void*)0);
      VAR_12->var_part[0].cur_loc = ((void*)0);
      *VAR_13 = VAR_12;
      VAR_8 = 0;
    }
  else
    {
      int VAR_14 = 0;

      VAR_12 = (variable) *VAR_13;

      VAR_8 = FUNC_3 (VAR_12, VAR_7, &VAR_14);

      if (VAR_8 >= 0)
 {
   VAR_9 = VAR_12->var_part[VAR_8].loc_chain;

   if (VAR_9
       && ((FUNC_1 (VAR_9->loc) && FUNC_1 (VAR_5)
     && FUNC_0 (VAR_9->loc) == FUNC_0 (VAR_5))
    || FUNC_8 (VAR_9->loc, VAR_5)))
     {


       return;
     }
   else
     {

       if (VAR_12->refcount > 1)
  VAR_12 = FUNC_9 (VAR_4, VAR_12);
     }
 }
      else
 {



   if (VAR_12->refcount > 1)
     VAR_12 = FUNC_9 (VAR_4, VAR_12);



   FUNC_4 (VAR_12->n_var_parts < VAR_1);



   for (VAR_8 = VAR_12->n_var_parts; VAR_8 > VAR_14; VAR_8--)
     VAR_12->var_part[VAR_8] = VAR_12->var_part[VAR_8 - 1];

   VAR_12->n_var_parts++;
   VAR_12->var_part[VAR_8].offset = VAR_7;
   VAR_12->var_part[VAR_8].loc_chain = ((void*)0);
   VAR_12->var_part[VAR_8].cur_loc = ((void*)0);
 }
    }


  VAR_11 = &VAR_12->var_part[VAR_8].loc_chain;
  for (VAR_9 = VAR_12->var_part[VAR_8].loc_chain; VAR_9; VAR_9 = VAR_10)
    {
      VAR_10 = VAR_9->next;
      if ((FUNC_1 (VAR_9->loc) && FUNC_1 (VAR_5)
    && FUNC_0 (VAR_9->loc) == FUNC_0 (VAR_5))
   || FUNC_8 (VAR_9->loc, VAR_5))
 {
   FUNC_7 (VAR_2, VAR_9);
   *VAR_11 = VAR_10;
   break;
 }
      else
 VAR_11 = &VAR_9->next;
    }


  VAR_9 = FUNC_6 (VAR_2);
  VAR_9->loc = VAR_5;
  VAR_9->next = VAR_12->var_part[VAR_8].loc_chain;
  VAR_12->var_part[VAR_8].loc_chain = VAR_9;


  if (VAR_12->var_part[VAR_8].cur_loc == ((void*)0))
    {
      VAR_12->var_part[VAR_8].cur_loc = VAR_5;
      FUNC_10 (VAR_12, VAR_4->vars);
    }
}
