
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


struct unwind_table_entry {int dummy; } ;
struct TYPE_14__ {struct unwind_table_entry* unwind; } ;
struct TYPE_13__ {struct unwind_table_entry* unwind; } ;
struct TYPE_12__ {struct unwind_table_entry* unwind; } ;
struct TYPE_11__ {struct unwind_table_entry* unwind; } ;
struct TYPE_10__ {struct unwind_table_entry* unwind; } ;
struct TYPE_9__ {struct unwind_table_entry* unwind; } ;
struct TYPE_15__ {struct unwind_table_entry* unwind; } ;
struct TYPE_16__ {TYPE_6__ unload_stub; TYPE_5__ load_stub; TYPE_4__ unload2; TYPE_3__ unload; TYPE_2__ load; TYPE_1__ hook_stub; TYPE_7__ hook; } ;
typedef int CORE_ADDR ;


 TYPE_8__ VAR_0 ;
 struct unwind_table_entry* FUNC_0 (int) ;
 int FUNC_1 () ;

int
FUNC_2 (int VAR_1, CORE_ADDR VAR_2)
{
  struct unwind_table_entry *VAR_3;
  if ((VAR_2 & (CORE_ADDR) 0xc0000000) == (CORE_ADDR) 0xc0000000)
    return 1;




  FUNC_1 ();


  VAR_3 = FUNC_0 (VAR_2);
  if (VAR_3 == ((void*)0))
    return 0;

  if ((VAR_3 == VAR_0.hook.unwind) || (VAR_3 == VAR_0.hook_stub.unwind))
    return 1;


  if ((VAR_3 == VAR_0.load.unwind)
      || (VAR_3 == VAR_0.unload.unwind)
      || (VAR_3 == VAR_0.unload2.unwind)
      || (VAR_3 == VAR_0.load_stub.unwind)
      || (VAR_3 == VAR_0.unload_stub.unwind))
    return 1;


  return 0;
}
