
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_chain {int used_spill_regs; int dead_or_set; int live_throughout; } ;
typedef scalar_t__ rtx ;
struct TYPE_2__ {int mode; int when_needed; int opnum; scalar_t__ reg_rtx; } ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 TYPE_1__* VAR_21 ;

__attribute__((used)) static void
FUNC_8 (struct insn_chain *VAR_22, rtx *VAR_23)
{
  int VAR_24;

  for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++)
    VAR_21[VAR_24].reg_rtx = VAR_23[VAR_24];

  FUNC_7 (VAR_4, 0, VAR_0);
  FUNC_7 (VAR_3, 0, VAR_0 * sizeof (rtx));
  FUNC_7 (VAR_6, 0, VAR_0 * sizeof (rtx));

  FUNC_0 (VAR_8);
  FUNC_0 (VAR_9);
  FUNC_0 (VAR_15);
  FUNC_0 (VAR_16);
  FUNC_0 (VAR_14);
  FUNC_0 (VAR_17);

  FUNC_0 (VAR_2);
  {
    HARD_REG_SET VAR_25;
    FUNC_4 (VAR_25, &VAR_22->live_throughout);
    FUNC_2 (VAR_2, VAR_25);
    FUNC_4 (VAR_25, &VAR_22->dead_or_set);
    FUNC_2 (VAR_2, VAR_25);
    FUNC_5 (&VAR_2, &VAR_22->live_throughout);
    FUNC_5 (&VAR_2, &VAR_22->dead_or_set);
  }

  for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++)
    {
      FUNC_0 (VAR_19[VAR_24]);
      FUNC_0 (VAR_12[VAR_24]);
      FUNC_0 (VAR_13[VAR_24]);
      FUNC_0 (VAR_11[VAR_24]);
      FUNC_0 (VAR_20[VAR_24]);
      FUNC_0 (VAR_18[VAR_24]);
    }

  FUNC_1 (VAR_7, VAR_22->used_spill_regs);

  FUNC_0 (VAR_10);

  for (VAR_24 = 0; VAR_24 < VAR_1; VAR_24++)


    if (VAR_21[VAR_24].reg_rtx)
      FUNC_6 (FUNC_3 (VAR_21[VAR_24].reg_rtx), VAR_21[VAR_24].opnum,
         VAR_21[VAR_24].when_needed, VAR_21[VAR_24].mode);
}
