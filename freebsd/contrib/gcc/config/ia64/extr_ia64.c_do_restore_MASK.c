
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int next_iter; int * prev_insn; } ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (rtx (*VAR_1) (rtx, rtx, rtx), rtx VAR_2, HOST_WIDE_INT VAR_3)
{
  int VAR_4 = VAR_0.next_iter;
  rtx VAR_5;

  VAR_5 = FUNC_1 ((*VAR_1) (VAR_2, FUNC_2 (VAR_2, VAR_3),
    FUNC_0 (VAR_3)));
  VAR_0.prev_insn[VAR_4] = VAR_5;
}
