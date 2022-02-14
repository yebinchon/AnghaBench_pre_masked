
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch_tdep {size_t fp_model; } ;
struct cmd_list_element {int dummy; } ;
struct TYPE_2__ {scalar_t__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_5, int VAR_6,
        struct cmd_list_element *VAR_7)
{
  struct gdbarch_tdep *VAR_8 = FUNC_1 (VAR_3);

  if (VAR_1 == VAR_0
      && FUNC_0 (VAR_3)->arch == VAR_2)
    FUNC_2 ("  - the default for the current ABI is \"%s\".\n",
       VAR_4[VAR_8->fp_model]);
}
