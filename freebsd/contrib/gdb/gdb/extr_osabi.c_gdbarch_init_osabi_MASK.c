
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch_info {scalar_t__ osabi; TYPE_1__* bfd_arch_info; } ;
struct gdbarch {int dummy; } ;
struct gdb_osabi_handler {scalar_t__ osabi; int (* init_osabi ) (struct gdbarch_info,struct gdbarch*) ;int arch_info; struct gdb_osabi_handler* next; } ;
struct TYPE_2__ {int printable_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 struct gdb_osabi_handler* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;
 int FUNC_3 (char*,int ,int ) ;

void
FUNC_4 (struct gdbarch_info VAR_2, struct gdbarch *VAR_3)
{
  struct gdb_osabi_handler *VAR_4;

  if (VAR_2.osabi == VAR_0)
    {


      return;
    }

  for (VAR_4 = VAR_1; VAR_4 != ((void*)0);
       VAR_4 = VAR_4->next)
    {
      if (VAR_4->osabi != VAR_2.osabi)
 continue;
      if (FUNC_0 (VAR_2.bfd_arch_info, VAR_4->arch_info))
 {
   (*VAR_4->init_osabi) (VAR_2, VAR_3);
   return;
 }
    }

  FUNC_3
    ("A handler for the OS ABI \"%s\" is not built into this configuration\n"
     "of GDB.  Attempting to continue with the default %s settings.\n",
     FUNC_1 (VAR_2.osabi),
     VAR_2.bfd_arch_info->printable_name);
}
