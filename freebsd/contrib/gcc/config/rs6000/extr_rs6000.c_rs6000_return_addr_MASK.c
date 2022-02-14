
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int ra_needs_full_frame; int ra_need_lr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

rtx
FUNC_5 (int VAR_7, rtx VAR_8)
{



  if (VAR_7 != 0 || (VAR_1 != VAR_0 && VAR_6))
    {
      VAR_5->machine->ra_needs_full_frame = 1;

      return
 FUNC_1
   (VAR_3,
    FUNC_3
    (VAR_3,
     FUNC_4 (FUNC_0
      (FUNC_1 (VAR_3,
      FUNC_3 (VAR_3, VAR_8))),
      VAR_4)));
    }

  VAR_5->machine->ra_need_lr = 1;
  return FUNC_2 (VAR_3, VAR_2);
}
