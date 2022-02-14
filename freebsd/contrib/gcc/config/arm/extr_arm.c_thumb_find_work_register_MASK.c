
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nregs; } ;
struct TYPE_6__ {TYPE_1__ args_info; TYPE_2__* machine; } ;
struct TYPE_5__ {scalar_t__ uses_anonymous_args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int * VAR_6 ;

__attribute__((used)) static int
FUNC_1 (unsigned long VAR_7)
{
  int VAR_8;




  for (VAR_8 = VAR_0; VAR_8 >= 0; VAR_8 --)
    if (!VAR_6[VAR_8])
      return VAR_8;
  if (VAR_3->machine->uses_anonymous_args
      && VAR_5 > 0)
    return VAR_0;
  if (! VAR_3->machine->uses_anonymous_args
      && VAR_4 >= 0
      && VAR_4 <= (VAR_0 * VAR_2)
      && VAR_3->args_info.nregs < 4)
    return VAR_0;


  for (VAR_8 = VAR_1; VAR_8 > VAR_0; VAR_8 --)
    if (VAR_7 & (1 << VAR_8))
      return VAR_8;



  FUNC_0 ();
}
