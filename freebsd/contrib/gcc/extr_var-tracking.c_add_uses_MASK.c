
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* rtx ;
struct TYPE_4__ {void* loc; } ;
struct TYPE_5__ {void* insn; TYPE_1__ u; void* type; } ;
typedef TYPE_2__ micro_operation ;
typedef int basic_block ;
struct TYPE_6__ {int n_mos; TYPE_2__* mos; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 TYPE_3__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10 (rtx *VAR_2, void *VAR_3)
{
  if (FUNC_6 (*VAR_2))
    {
      basic_block VAR_4 = FUNC_0 ((rtx) VAR_3);
      micro_operation *VAR_5 = FUNC_7 (VAR_4)->mos + FUNC_7 (VAR_4)->n_mos++;

      if (FUNC_4 (*VAR_2)
   && FUNC_9 (FUNC_4 (*VAR_2))
   && FUNC_8 (FUNC_5 (*VAR_2)))
 VAR_5->type = VAR_0;
      else
 VAR_5->type = VAR_1;
      VAR_5->u.loc = *VAR_2;
      VAR_5->insn = (rtx) VAR_3;
    }
  else if (FUNC_3 (*VAR_2)
    && FUNC_2 (*VAR_2)
    && FUNC_9 (FUNC_2 (*VAR_2))
    && FUNC_8 (FUNC_1 (*VAR_2)))
    {
      basic_block VAR_6 = FUNC_0 ((rtx) VAR_3);
      micro_operation *VAR_7 = FUNC_7 (VAR_6)->mos + FUNC_7 (VAR_6)->n_mos++;

      VAR_7->type = VAR_0;
      VAR_7->u.loc = *VAR_2;
      VAR_7->insn = (rtx) VAR_3;
    }

  return 0;
}
