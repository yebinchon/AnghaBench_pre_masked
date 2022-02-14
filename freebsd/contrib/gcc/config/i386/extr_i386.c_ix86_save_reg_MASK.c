
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ force_align_arg_pointer; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_2 () ;
 scalar_t__ VAR_10 ;
 scalar_t__* VAR_11 ;

__attribute__((used)) static int
FUNC_3 (unsigned int VAR_12, int VAR_13)
{
  if (VAR_10
      && VAR_12 == VAR_2
      && (VAR_11[VAR_2]
   || VAR_6
   || VAR_5
   || VAR_7))
    {
      if (FUNC_2 () != VAR_1)
 return 0;
      return 1;
    }

  if (VAR_5 && VAR_13)
    {
      unsigned VAR_14;
      for (VAR_14 = 0; ; VAR_14++)
 {
   unsigned VAR_15 = FUNC_0 (VAR_14);
   if (VAR_15 == VAR_1)
     break;
   if (VAR_15 == VAR_12)
     return 1;
 }
    }

  if (VAR_4->machine->force_align_arg_pointer
      && VAR_12 == FUNC_1 (VAR_4->machine->force_align_arg_pointer))
    return 1;

  return (VAR_11[VAR_12]
   && !VAR_3[VAR_12]
   && !VAR_8[VAR_12]
   && (VAR_12 != VAR_0 || !VAR_9));
}
