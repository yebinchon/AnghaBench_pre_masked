
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_4__ {int * regs; } ;
typedef TYPE_1__ dataflow_set ;
struct TYPE_5__ {TYPE_1__ out; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_3__* FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__,int ,int ) ;
 int VAR_4 ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_14 (int ,scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_15 (void)
{
  tree VAR_5;

  for (VAR_5 = FUNC_0 (VAR_4);
       VAR_5; VAR_5 = FUNC_8 (VAR_5))
    {
      rtx VAR_6 = FUNC_3 (VAR_5);
      rtx VAR_7 = FUNC_1 (VAR_5);
      tree VAR_8;
      HOST_WIDE_INT VAR_9;
      dataflow_set *VAR_10;

      if (FUNC_9 (VAR_5) != VAR_3)
 continue;

      if (!FUNC_2 (VAR_5))
 continue;

      if (!VAR_6 || !VAR_7)
 continue;

      if (FUNC_4 (VAR_6) == VAR_0 || FUNC_4 (VAR_7) == VAR_0)
 continue;

      if (!FUNC_14 (VAR_7, &VAR_8, &VAR_9))
 if (!FUNC_14 (VAR_6, &VAR_8, &VAR_9))
   continue;

      if (!VAR_8)
 continue;

      FUNC_12 (VAR_5 == VAR_8);

      VAR_10 = &FUNC_10 (VAR_1)->out;

      if (FUNC_7 (VAR_7))
 {
   FUNC_12 (FUNC_6 (VAR_7) < VAR_2);
   FUNC_11 (&VAR_10->regs[FUNC_6 (VAR_7)],
        VAR_5, VAR_9, VAR_7);
   FUNC_13 (VAR_10, VAR_7, VAR_5, VAR_9);
 }
      else if (FUNC_5 (VAR_7))
 FUNC_13 (VAR_10, VAR_7, VAR_5, VAR_9);
    }
}
