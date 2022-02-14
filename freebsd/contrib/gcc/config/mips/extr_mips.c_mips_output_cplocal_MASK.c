
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ global_pointer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (!VAR_1
      && VAR_2->machine->global_pointer > 0
      && VAR_2->machine->global_pointer != VAR_0)
    FUNC_0 (".cplocal %+", 0);
}
