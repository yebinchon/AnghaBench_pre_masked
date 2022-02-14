
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {scalar_t__ loc; } ;
struct TYPE_5__ {void* insn; TYPE_1__ u; void* type; } ;
typedef TYPE_2__ micro_operation ;
typedef int basic_block ;
struct TYPE_6__ {int n_mos; TYPE_2__* mos; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_3__* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static void
FUNC_15 (rtx VAR_5, rtx VAR_6, void *VAR_7)
{
  if (FUNC_8 (VAR_5))
    {
      basic_block VAR_8 = FUNC_0 ((rtx) VAR_7);
      micro_operation *VAR_9 = FUNC_11 (VAR_8)->mos + FUNC_11 (VAR_8)->n_mos++;

      if (FUNC_1 (VAR_6) == VAR_0
   || !(FUNC_6 (VAR_5)
        && FUNC_14 (FUNC_6 (VAR_5))
        && FUNC_12 (FUNC_7 (VAR_5))))
 VAR_9->type = VAR_1;
      else if (FUNC_1 (VAR_6) == VAR_4
        && FUNC_9 (VAR_6) == VAR_5
        && FUNC_13 (FUNC_10 (VAR_6),
     FUNC_6 (VAR_5),
     FUNC_7 (VAR_5)))
 VAR_9->type = VAR_2;
      else
 VAR_9->type = VAR_3;
      VAR_9->u.loc = VAR_5;
      VAR_9->insn = FUNC_5 ((rtx) VAR_7);
    }
  else if (FUNC_4 (VAR_5)
    && FUNC_3 (VAR_5)
    && FUNC_14 (FUNC_3 (VAR_5))
    && FUNC_12 (FUNC_2 (VAR_5)))
    {
      basic_block VAR_10 = FUNC_0 ((rtx) VAR_7);
      micro_operation *VAR_11 = FUNC_11 (VAR_10)->mos + FUNC_11 (VAR_10)->n_mos++;

      if (FUNC_1 (VAR_6) == VAR_0)
 VAR_11->type = VAR_1;
      else if (FUNC_1 (VAR_6) == VAR_4
        && FUNC_9 (VAR_6) == VAR_5
        && FUNC_13 (FUNC_10 (VAR_6),
     FUNC_3 (VAR_5),
     FUNC_2 (VAR_5)))
 VAR_11->type = VAR_2;
      else
 VAR_11->type = VAR_3;
      VAR_11->u.loc = VAR_5;
      VAR_11->insn = FUNC_5 ((rtx) VAR_7);
    }
}
