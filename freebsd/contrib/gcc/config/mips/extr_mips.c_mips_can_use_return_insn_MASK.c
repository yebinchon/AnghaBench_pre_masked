
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_6__ {TYPE_1__* machine; } ;
struct TYPE_5__ {scalar_t__ total_size; scalar_t__ initialized; } ;
struct TYPE_4__ {TYPE_2__ frame; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;

int
FUNC_7 (void)
{
  tree VAR_9;

  if (! VAR_8)
    return 0;

  if (VAR_7[31] || VAR_5)
    return 0;

  VAR_9 = FUNC_1 (VAR_4);




  if (VAR_1
      && VAR_6
      && ! FUNC_4 (VAR_9, VAR_4)
      && FUNC_2 (FUNC_0 (VAR_9)) == VAR_0
      && FUNC_3 (FUNC_0 (VAR_9)) <= VAR_2)
    return 0;

  if (VAR_3->machine->frame.initialized)
    return VAR_3->machine->frame.total_size == 0;

  return FUNC_5 (FUNC_6 ()) == 0;
}
