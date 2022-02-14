
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct df_reg_info {struct df_ref* reg_chain; } ;
struct df_ref {struct df_ref* next_reg; } ;
struct df_rd_bb_info {int out; } ;
typedef int rtx ;
struct TYPE_3__ {int latch; } ;


 struct df_rd_bb_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct df_ref*) ;
 int FUNC_2 (struct df_ref*) ;
 struct df_reg_info* FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_2, struct df_ref **VAR_3)
{
  struct df_ref *VAR_4 = ((void*)0), *VAR_5;
  unsigned VAR_6 = FUNC_4 (VAR_2);
  struct df_reg_info *VAR_7 = FUNC_3 (VAR_1, VAR_6);
  struct df_rd_bb_info *VAR_8 = FUNC_0 (VAR_1, VAR_0->latch);

  for (VAR_5 = VAR_7->reg_chain; VAR_5; VAR_5 = VAR_5->next_reg)
    {
      if (!FUNC_5 (VAR_8->out, FUNC_2 (VAR_5)))
 continue;


      if (VAR_4)
 return 0;

      if (!FUNC_6 (VAR_0, FUNC_1 (VAR_5)))
 return 0;

      VAR_4 = VAR_5;
    }

  *VAR_3 = VAR_4;
  return 1;
}
