
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* to_shortname; char* to_longname; char* to_doc; int to_open; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_3 (void)
{
  FUNC_2 ();
  FUNC_1 (&VAR_1);

  VAR_1.to_shortname = "rom68k";
  VAR_1.to_longname = "Rom68k debug monitor for the IDP Eval board";
  VAR_1.to_doc = "Debug on a Motorola IDP eval board running the ROM68K monitor.\nSpecify the serial device it is connected to (e.g. /dev/ttya).";

  VAR_1.to_open = VAR_0;

  FUNC_0 (&VAR_1);
}
