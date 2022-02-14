
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct propagate_block_info {int dummy; } ;
typedef scalar_t__ rtx ;
typedef int regset_head ;
typedef TYPE_3__* basic_block ;
struct TYPE_8__ {TYPE_1__* rtl; } ;
struct TYPE_9__ {TYPE_2__ il; } ;
struct TYPE_7__ {int global_live_at_end; } ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct propagate_block_info*) ;
 struct propagate_block_info* FUNC_8 (TYPE_3__*,int *,int *,int *,int ) ;
 scalar_t__ FUNC_9 (struct propagate_block_info*,scalar_t__) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static void
FUNC_11 (HARD_REG_SET * VAR_0, rtx VAR_1, int VAR_2)
{
  basic_block VAR_3;
  regset_head VAR_4;
  HARD_REG_SET VAR_5;
  struct propagate_block_info *VAR_6;
  rtx VAR_7;
  int VAR_8;


  VAR_3 = FUNC_2 (VAR_1);
  FUNC_5 (&VAR_4);
  FUNC_4 (&VAR_4, VAR_3->il.rtl->global_live_at_end);
  VAR_6 = FUNC_8 (VAR_3, &VAR_4, ((void*)0), ((void*)0), 0);


  for (VAR_7 = FUNC_1 (VAR_3); VAR_7 != VAR_1;)
    VAR_7 = FUNC_9 (VAR_6, VAR_7);


  FUNC_10 (&VAR_5, &VAR_4);
  FUNC_0 (*VAR_0, VAR_5);


  for (VAR_8 = 0; VAR_8 < VAR_2;)
    {
      rtx VAR_9 = FUNC_9 (VAR_6, VAR_7);

      if (FUNC_6 (VAR_7))
        {
          FUNC_10 (&VAR_5, &VAR_4);
          FUNC_0 (*VAR_0, VAR_5);
          VAR_8++;
        }

      VAR_7 = VAR_9;
    }


  FUNC_7 (VAR_6);
  FUNC_3 (&VAR_4);
}
