
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int force_align_arg_pointer; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_7 ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static rtx
FUNC_12 (void)
{
  bool VAR_8 =
    (0 != FUNC_10 (VAR_6,
       FUNC_6 (FUNC_5 (VAR_4))));
  if ((VAR_0
       && FUNC_2 (VAR_4)
       && FUNC_3 (FUNC_2 (VAR_4))
       && FUNC_1 (VAR_4))
      || VAR_5
      || VAR_8)
    {


      if (FUNC_0 (VAR_4)
   && FUNC_4 (FUNC_0 (VAR_4)) == VAR_1)
 {
   if (VAR_5)
     FUNC_11 (0, "-mstackrealign ignored for nested functions");
   if (VAR_8)
     FUNC_8 ("%s not supported for nested functions",
     VAR_6);
   return VAR_7;
 }
      VAR_3->machine->force_align_arg_pointer = FUNC_9 (VAR_2, 2);
      return FUNC_7 (VAR_3->machine->force_align_arg_pointer);
    }
  else
    return VAR_7;
}
