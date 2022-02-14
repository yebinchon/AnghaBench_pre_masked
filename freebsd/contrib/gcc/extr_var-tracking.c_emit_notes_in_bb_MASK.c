
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int rtx ;
struct TYPE_20__ {int stack_adjust; } ;
typedef TYPE_3__ dataflow_set ;
typedef int basic_block ;
struct TYPE_18__ {int adjust; int loc; } ;
struct TYPE_19__ {int type; TYPE_1__ u; int insn; } ;
struct TYPE_16__ {int vars; } ;
struct TYPE_17__ {int n_mos; TYPE_2__* mos; TYPE_14__ in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;







 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_15__* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*,TYPE_14__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_16 (basic_block VAR_5)
{
  int VAR_6;
  dataflow_set VAR_7;

  FUNC_6 (&VAR_7, FUNC_8 (FUNC_3 (VAR_5)->in.vars) + 3);
  FUNC_4 (&VAR_7, &FUNC_3 (VAR_5)->in);

  for (VAR_6 = 0; VAR_6 < FUNC_3 (VAR_5)->n_mos; VAR_6++)
    {
      rtx VAR_8 = FUNC_3 (VAR_5)->mos[VAR_6].insn;

      switch (FUNC_3 (VAR_5)->mos[VAR_6].type)
 {
   case 133:
     {
       int VAR_9;

       for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  if (FUNC_2 (VAR_4, VAR_9))
    {
      FUNC_15 (&VAR_7, VAR_9);
    }
       FUNC_7 (VAR_8, VAR_0);
     }
     break;

   case 129:
     {
       rtx VAR_10 = FUNC_3 (VAR_5)->mos[VAR_6].u.loc;

       if (FUNC_0 (VAR_10) == VAR_3)
  FUNC_14 (&VAR_7, VAR_10);
       else
  FUNC_11 (&VAR_7, VAR_10);

       FUNC_7 (VAR_8, VAR_0);
     }
     break;

   case 130:
     {
       rtx VAR_11 = FUNC_3 (VAR_5)->mos[VAR_6].u.loc;

       if (FUNC_1 (VAR_11))
  FUNC_13 (&VAR_7, VAR_11, 1);
       else
  FUNC_10 (&VAR_7, VAR_11, 1);

       FUNC_7 (VAR_8, VAR_1);
     }
     break;

   case 131:
     {
       rtx VAR_12 = FUNC_3 (VAR_5)->mos[VAR_6].u.loc;

       if (FUNC_1 (VAR_12))
  FUNC_13 (&VAR_7, VAR_12, 0);
       else
  FUNC_10 (&VAR_7, VAR_12, 0);

       FUNC_7 (VAR_8, VAR_1);
     }
     break;

   case 128:
     {
       rtx VAR_13 = FUNC_3 (VAR_5)->mos[VAR_6].u.loc;

       if (FUNC_1 (VAR_13))
  FUNC_12 (&VAR_7, VAR_13, 0);
       else
  FUNC_9 (&VAR_7, VAR_13, 0);

       FUNC_7 (VAR_8, VAR_0);
     }
     break;

   case 132:
     {
       rtx VAR_14 = FUNC_3 (VAR_5)->mos[VAR_6].u.loc;

       if (FUNC_1 (VAR_14))
  FUNC_12 (&VAR_7, VAR_14, 1);
       else
  FUNC_9 (&VAR_7, VAR_14, 1);

       FUNC_7 (VAR_8, VAR_1);
     }
     break;

   case 134:
     VAR_7.stack_adjust += FUNC_3 (VAR_5)->mos[VAR_6].u.adjust;
     break;
 }
    }
  FUNC_5 (&VAR_7);
}
