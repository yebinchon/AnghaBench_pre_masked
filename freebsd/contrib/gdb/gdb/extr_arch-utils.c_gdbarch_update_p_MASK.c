
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;
struct TYPE_2__ {int printable_name; } ;


 struct gdbarch* VAR_0 ;
 int FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (struct gdbarch*) ;
 scalar_t__ VAR_2 ;
 struct gdbarch* FUNC_3 (struct gdbarch_info) ;

int
FUNC_4 (struct gdbarch_info VAR_3)
{
  struct gdbarch *VAR_4 = FUNC_3 (VAR_3);


  if (VAR_4 == ((void*)0))
    {
      if (VAR_2)
 FUNC_1 (VAR_1, "gdbarch_update_p: "
       "Architecture not found\n");
      return 0;
    }



  if (VAR_4 == VAR_0)
    {
      if (VAR_2)
 FUNC_1 (VAR_1, "gdbarch_update_p: "
       "Architecture 0x%08lx (%s) unchanged\n",
       (long) VAR_4,
       FUNC_2 (VAR_4)->printable_name);
      return 1;
    }


  if (VAR_2)
    FUNC_1 (VAR_1, "gdbarch_update_p: "
   "New architecture 0x%08lx (%s) selected\n",
   (long) VAR_4,
   FUNC_2 (VAR_4)->printable_name);
  FUNC_0 (VAR_4);

  return 1;
}
