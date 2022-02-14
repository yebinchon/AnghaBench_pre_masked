
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* to_shortname; char* to_longname; char* to_doc; int to_mourn_inferior; int to_create_inferior; int to_open; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_0 = VAR_4;

  VAR_0.to_shortname = "extended-async";
  VAR_0.to_longname =
    "Extended remote serial target in async gdb-specific protocol";
  VAR_0.to_doc =
    "Use a remote computer via a serial line, using an async gdb-specific protocol.\nSpecify the serial device it is connected to (e.g. /dev/ttya).",

    VAR_0.to_open = VAR_2;
  VAR_0.to_create_inferior = VAR_1;
  VAR_0.to_mourn_inferior = VAR_3;
}
