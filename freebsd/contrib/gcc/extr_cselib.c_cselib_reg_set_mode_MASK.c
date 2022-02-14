
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {TYPE_2__* elt; } ;
struct TYPE_4__ {int val_rtx; } ;
struct TYPE_5__ {TYPE_1__ u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int VAR_0 ;

enum machine_mode
FUNC_4 (rtx VAR_1)
{
  if (!FUNC_2 (VAR_1))
    return FUNC_0 (VAR_1);

  if (FUNC_3 (FUNC_1 (VAR_1)) == ((void*)0)
      || FUNC_3 (FUNC_1 (VAR_1))->elt == ((void*)0))
    return VAR_0;

  return FUNC_0 (FUNC_3 (FUNC_1 (VAR_1))->elt->u.val_rtx);
}
