
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* machine; } ;
struct TYPE_5__ {scalar_t__ frame_size; } ;
struct TYPE_4__ {int split_branches_pending_p; void* base_reg; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_2 (int ,int) ;
 int * VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  HOST_WIDE_INT VAR_9;
  int VAR_10;
  int VAR_11[16];





  if (!VAR_3)
    VAR_4->machine->split_branches_pending_p = 1;

  do
    {
      VAR_9 = VAR_5.frame_size;


      VAR_10 = VAR_4->machine->split_branches_pending_p
    || VAR_7
    || (!FUNC_1 (VAR_9)
        && !FUNC_0 (VAR_9));




      if (!VAR_10)
 VAR_4->machine->base_reg = VAR_1;
      else if (VAR_6 && !VAR_8[5])
 VAR_4->machine->base_reg = FUNC_2 (VAR_2, 5);
      else
 VAR_4->machine->base_reg = FUNC_2 (VAR_2, VAR_0);

      FUNC_4 (VAR_11);
      FUNC_3 ();
    }
  while (VAR_9 != VAR_5.frame_size);
}
