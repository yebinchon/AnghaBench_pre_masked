
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* variable ;
typedef int tree ;
typedef scalar_t__ rtx ;
typedef TYPE_3__* location_chain ;
struct TYPE_13__ {TYPE_5__** regs; int vars; } ;
typedef TYPE_4__ dataflow_set ;
typedef TYPE_5__* attrs ;
struct TYPE_14__ {scalar_t__ offset; int decl; struct TYPE_14__* next; } ;
struct TYPE_12__ {scalar_t__ loc; struct TYPE_12__* next; } ;
struct TYPE_11__ {TYPE_1__* var_part; } ;
struct TYPE_10__ {TYPE_3__* loc_chain; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int *) ;
 void** FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_8 (dataflow_set *VAR_2, rtx VAR_3, tree VAR_4,
        HOST_WIDE_INT VAR_5)
{
  void **VAR_6;

  if (! VAR_4 || ! FUNC_0 (VAR_4))
    return;

  VAR_6 = FUNC_6 (VAR_2->vars, VAR_4, FUNC_3 (VAR_4),
       VAR_0);
  if (VAR_6)
    {
      variable VAR_7 = (variable) *VAR_6;
      int VAR_8 = FUNC_5 (VAR_7, VAR_5, ((void*)0));

      if (VAR_8 >= 0)
 {
   location_chain VAR_9, VAR_10;


   VAR_10 = VAR_7->var_part[VAR_8].loc_chain;
   for (VAR_9 = VAR_10; VAR_9; VAR_9 = VAR_10)
     {
       VAR_10 = VAR_9->next;
       if (VAR_9->loc != VAR_3)
  {
    if (FUNC_2 (VAR_9->loc))
      {
        attrs VAR_11, VAR_12;
        attrs *VAR_13;





        VAR_13 = &VAR_2->regs[FUNC_1 (VAR_9->loc)];
        for (VAR_11 = *VAR_13; VAR_11; VAR_11 = VAR_12)
   {
     VAR_12 = VAR_11->next;
     if (VAR_11->decl == VAR_4
         && VAR_11->offset == VAR_5)
       {
         FUNC_7 (VAR_1, VAR_11);
         *VAR_13 = VAR_12;
       }
   }
      }

    FUNC_4 (VAR_2, VAR_9->loc, VAR_4, VAR_5);
  }
     }
 }
    }
}
