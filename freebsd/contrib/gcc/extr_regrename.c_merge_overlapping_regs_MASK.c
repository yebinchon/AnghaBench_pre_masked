
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct du_chain {scalar_t__ insn; struct du_chain* next_use; } ;
typedef scalar_t__ rtx ;
typedef TYPE_3__* basic_block ;
struct TYPE_7__ {TYPE_1__* rtl; } ;
struct TYPE_8__ {TYPE_2__ il; } ;
struct TYPE_6__ {int global_live_at_start; } ;
typedef int HARD_REG_SET ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ,void*) ;

__attribute__((used)) static void
FUNC_9 (basic_block VAR_3, HARD_REG_SET *VAR_4,
   struct du_chain *VAR_5)
{
  struct du_chain *VAR_6 = VAR_5;
  rtx VAR_7;
  HARD_REG_SET VAR_8;

  FUNC_6 (VAR_8, VAR_3->il.rtl->global_live_at_start);
  VAR_7 = FUNC_0 (VAR_3);
  while (VAR_6)
    {


      while (VAR_7 != VAR_6->insn)
 {
   if (FUNC_1 (VAR_7))
     {
       FUNC_7 (&VAR_8, VAR_0, FUNC_5 (VAR_7));
       FUNC_8 (FUNC_4 (VAR_7), VAR_2, (void *) &VAR_8);


       if (VAR_6 != VAR_5)
  FUNC_2 (*VAR_4, VAR_8);
       FUNC_7 (&VAR_8, VAR_1, FUNC_5 (VAR_7));
     }
   VAR_7 = FUNC_3 (VAR_7);
 }

      FUNC_2 (*VAR_4, VAR_8);




      if (! VAR_6->next_use)
 FUNC_8 (FUNC_4 (VAR_7), VAR_2, (void *) VAR_4);

      VAR_6 = VAR_6->next_use;
    }
}
