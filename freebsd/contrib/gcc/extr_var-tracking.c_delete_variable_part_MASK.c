
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
typedef scalar_t__ rtx ;
typedef TYPE_3__* location_chain ;
struct TYPE_15__ {int vars; } ;
typedef TYPE_4__ dataflow_set ;
struct TYPE_14__ {scalar_t__ loc; struct TYPE_14__* next; } ;
struct TYPE_13__ {int refcount; int n_var_parts; TYPE_1__* var_part; } ;
struct TYPE_12__ {TYPE_3__* loc_chain; scalar_t__ cur_loc; } ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 void** FUNC_4 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_9 (dataflow_set *VAR_2, rtx VAR_3, tree VAR_4,
        HOST_WIDE_INT VAR_5)
{
  void **VAR_6;

  VAR_6 = FUNC_4 (VAR_2->vars, VAR_4, FUNC_2 (VAR_4),
       VAR_0);
  if (VAR_6)
    {
      variable VAR_7 = (variable) *VAR_6;
      int VAR_8 = FUNC_3 (VAR_7, VAR_5, ((void*)0));

      if (VAR_8 >= 0)
 {
   location_chain VAR_9, VAR_10;
   location_chain *VAR_11;
   bool VAR_12;

   if (VAR_7->refcount > 1)
     {


       for (VAR_9 = VAR_7->var_part[VAR_8].loc_chain; VAR_9;
     VAR_9 = VAR_9->next)
  {
    if ((FUNC_1 (VAR_9->loc) && FUNC_1 (VAR_3)
         && FUNC_0 (VAR_9->loc) == FUNC_0 (VAR_3))
        || FUNC_6 (VAR_9->loc, VAR_3))
      {
        VAR_7 = FUNC_7 (VAR_2, VAR_7);
        break;
      }
  }
     }


   VAR_11 = &VAR_7->var_part[VAR_8].loc_chain;
   for (VAR_9 = *VAR_11; VAR_9; VAR_9 = VAR_10)
     {
       VAR_10 = VAR_9->next;
       if ((FUNC_1 (VAR_9->loc) && FUNC_1 (VAR_3)
     && FUNC_0 (VAR_9->loc) == FUNC_0 (VAR_3))
    || FUNC_6 (VAR_9->loc, VAR_3))
  {
    FUNC_5 (VAR_1, VAR_9);
    *VAR_11 = VAR_10;
    break;
  }
       else
  VAR_11 = &VAR_9->next;
     }




   if (VAR_7->var_part[VAR_8].cur_loc
       && ((FUNC_1 (VAR_3)
     && FUNC_1 (VAR_7->var_part[VAR_8].cur_loc)
     && FUNC_0 (VAR_3) == FUNC_0 (VAR_7->var_part[VAR_8].cur_loc))
    || FUNC_6 (VAR_3, VAR_7->var_part[VAR_8].cur_loc)))
     {
       VAR_12 = 1;
       if (VAR_7->var_part[VAR_8].loc_chain)
  VAR_7->var_part[VAR_8].cur_loc = VAR_7->var_part[VAR_8].loc_chain->loc;
     }
   else
     VAR_12 = 0;

   if (VAR_7->var_part[VAR_8].loc_chain == ((void*)0))
     {
       VAR_7->n_var_parts--;
       while (VAR_8 < VAR_7->n_var_parts)
  {
    VAR_7->var_part[VAR_8] = VAR_7->var_part[VAR_8 + 1];
    VAR_8++;
  }
     }
   if (VAR_12)
     FUNC_8 (VAR_7, VAR_2->vars);
 }
    }
}
