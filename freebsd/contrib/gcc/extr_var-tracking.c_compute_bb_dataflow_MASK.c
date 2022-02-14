
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int rtx ;
struct TYPE_21__ {int stack_adjust; int vars; } ;
typedef TYPE_3__ dataflow_set ;
typedef int basic_block ;
struct TYPE_19__ {int adjust; int loc; } ;
struct TYPE_20__ {int type; TYPE_1__ u; } ;
struct TYPE_18__ {int n_mos; TYPE_2__* mos; TYPE_3__ out; TYPE_3__ in; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;







 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 TYPE_17__* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int FUNC_14 (TYPE_3__*,int ,int) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,int) ;

__attribute__((used)) static bool
FUNC_17 (basic_block VAR_4)
{
  int VAR_5, VAR_6, VAR_7;
  bool VAR_8;
  dataflow_set VAR_9;
  dataflow_set *VAR_10 = &FUNC_4 (VAR_4)->in;
  dataflow_set *VAR_11 = &FUNC_4 (VAR_4)->out;

  FUNC_8 (&VAR_9, FUNC_9 (FUNC_4 (VAR_4)->out.vars) + 3);
  FUNC_5 (&VAR_9, VAR_11);
  FUNC_5 (VAR_11, VAR_10);

  VAR_6 = FUNC_4 (VAR_4)->n_mos;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    {
      switch (FUNC_4 (VAR_4)->mos[VAR_5].type)
 {
   case 133:
     for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
       if (FUNC_3 (VAR_3, VAR_7))
  FUNC_16 (VAR_11, VAR_7);
     break;

   case 129:
     {
       rtx VAR_12 = FUNC_4 (VAR_4)->mos[VAR_5].u.loc;

       if (FUNC_0 (VAR_12) == VAR_2)
  FUNC_15 (VAR_11, VAR_12);
       else if (FUNC_0 (VAR_12) == VAR_1)
  FUNC_12 (VAR_11, VAR_12);
     }
     break;

   case 130:
     {
       rtx VAR_13 = FUNC_4 (VAR_4)->mos[VAR_5].u.loc;

       if (FUNC_2 (VAR_13))
  FUNC_14 (VAR_11, VAR_13, 1);
       else if (FUNC_1 (VAR_13))
  FUNC_11 (VAR_11, VAR_13, 1);
     }
     break;

   case 131:
     {
       rtx VAR_14 = FUNC_4 (VAR_4)->mos[VAR_5].u.loc;

       if (FUNC_2 (VAR_14))
  FUNC_14 (VAR_11, VAR_14, 0);
       else if (FUNC_1 (VAR_14))
  FUNC_11 (VAR_11, VAR_14, 0);
     }
     break;

   case 128:
     {
       rtx VAR_15 = FUNC_4 (VAR_4)->mos[VAR_5].u.loc;

       if (FUNC_2 (VAR_15))
  FUNC_13 (VAR_11, VAR_15, 0);
       else if (FUNC_1 (VAR_15))
  FUNC_10 (VAR_11, VAR_15, 0);
     }
     break;

   case 132:
     {
       rtx VAR_16 = FUNC_4 (VAR_4)->mos[VAR_5].u.loc;

       if (FUNC_2 (VAR_16))
  FUNC_13 (VAR_11, VAR_16, 1);
       else if (FUNC_1 (VAR_16))
  FUNC_10 (VAR_11, VAR_16, 1);
     }
     break;

   case 134:
     VAR_11->stack_adjust += FUNC_4 (VAR_4)->mos[VAR_5].u.adjust;
     break;
 }
    }

  VAR_8 = FUNC_7 (&VAR_9, VAR_11);
  FUNC_6 (&VAR_9);
  return VAR_8;
}
