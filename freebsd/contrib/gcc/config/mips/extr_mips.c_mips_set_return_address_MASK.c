
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_6__ {TYPE_2__* machine; } ;
struct TYPE_4__ {int mask; int gp_sp_offset; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_1 ;

void
FUNC_7 (rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4;

  FUNC_1 (FUNC_5 ());
  FUNC_3 ((VAR_0->machine->frame.mask >> 31) & 1);
  VAR_4 = FUNC_6 (VAR_3, VAR_1,
      VAR_0->machine->frame.gp_sp_offset);

  FUNC_2 (FUNC_4 (FUNC_0 (VAR_2), VAR_4), VAR_2);
}
