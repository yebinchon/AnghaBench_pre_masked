
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct so_list {struct so_list* next; } ;
struct TYPE_15__ {int * unwind; scalar_t__ address; } ;
struct TYPE_14__ {int * unwind; scalar_t__ address; } ;
struct TYPE_13__ {int * unwind; scalar_t__ address; } ;
struct TYPE_12__ {int * unwind; scalar_t__ address; } ;
struct TYPE_11__ {int * unwind; scalar_t__ address; } ;
struct TYPE_10__ {int * unwind; scalar_t__ address; } ;
struct TYPE_9__ {int * unwind; scalar_t__ address; } ;
struct TYPE_16__ {TYPE_7__ unload_stub; TYPE_6__ unload2; TYPE_5__ unload; TYPE_4__ load_stub; TYPE_3__ load; TYPE_2__ hook_stub; TYPE_1__ hook; scalar_t__ is_valid; } ;
typedef scalar_t__ LONGEST ;


 int FUNC_0 (int ) ;
 TYPE_8__ VAR_0 ;
 struct so_list* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct so_list*) ;

void
FUNC_2 (void)
{
  struct so_list *VAR_4 = VAR_1;




  FUNC_0 (0);



  while (VAR_4)
    {
      struct so_list *VAR_5 = VAR_4->next;
      FUNC_1 (VAR_4);
      VAR_4 = VAR_5;
    }
  VAR_1 = ((void*)0);

  VAR_3 = (LONGEST) 0;
  VAR_2 = 0;

  VAR_0.is_valid = 0;

  VAR_0.hook.address = 0;
  VAR_0.hook.unwind = ((void*)0);

  VAR_0.hook_stub.address = 0;
  VAR_0.hook_stub.unwind = ((void*)0);

  VAR_0.load.address = 0;
  VAR_0.load.unwind = ((void*)0);

  VAR_0.load_stub.address = 0;
  VAR_0.load_stub.unwind = ((void*)0);

  VAR_0.unload.address = 0;
  VAR_0.unload.unwind = ((void*)0);

  VAR_0.unload2.address = 0;
  VAR_0.unload2.unwind = ((void*)0);

  VAR_0.unload_stub.address = 0;
  VAR_0.unload_stub.unwind = ((void*)0);
}
