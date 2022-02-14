
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {char* cmd; char* resp_delim; } ;
struct TYPE_11__ {char* cmd; char* term; } ;
struct TYPE_10__ {char* cmdb; char* resp_delim; } ;
struct TYPE_9__ {char* cmdb; char* cmdw; char* cmdl; char* term; } ;
struct TYPE_14__ {int flags; char* cont; char* step; char* set_break; char* clr_break; char* fill; char* dump_registers; char* register_pattern; char* load; char* loadresp; char* prompt; char* line_term; int magic; int regnames; int stopbits; TYPE_5__* target; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int init; } ;
struct TYPE_13__ {char* to_shortname; char* to_longname; char* to_doc; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_7__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (TYPE_5__*) ;

void
FUNC_2 (void)
{
  VAR_13.flags = VAR_7 | VAR_5 | VAR_3 | VAR_6 | VAR_1 | VAR_9 | VAR_8 | VAR_4 | VAR_2 | VAR_10 | VAR_11;
  VAR_13.init = VAR_14;
  VAR_13.cont = "go +\r";
  VAR_13.step = "tr +\r";
  VAR_13.set_break = "bp 0x%x\r";
  VAR_13.clr_break = "bp %d\r";



  VAR_13.setmem.cmdb = "mm -b %x\r";
  VAR_13.setmem.cmdw = "mm -w %x\r";
  VAR_13.setmem.cmdl = "mm %x\r";
  VAR_13.setmem.term = " ?  ";
  VAR_13.getmem.cmdb = "md %x\r";
  VAR_13.getmem.resp_delim = "        ";
  VAR_13.setreg.cmd = "rm %s\r";
  VAR_13.setreg.term = " ?  ";
  VAR_13.getreg.cmd = "rd %s\r";
  VAR_13.getreg.resp_delim = ": ";
  VAR_13.dump_registers = "rd r\r";
  VAR_13.register_pattern = "\\(\\w+\\) +=\\([0-9a-fA-F]+\\b\\)";
  VAR_13.supply_register = VAR_18;

  VAR_13.load = "dl -k\r";
  VAR_13.loadresp = "Set Input Port : set to Keyboard Port\r";
  VAR_13.prompt = "DINK32_603 >>";
  VAR_13.line_term = "\r";
  VAR_13.target = &VAR_16;
  VAR_13.stopbits = VAR_12;
  VAR_13.regnames = VAR_17;
  VAR_13.magic = VAR_0;

  FUNC_1 (&VAR_16);

  VAR_16.to_shortname = "dink32";
  VAR_16.to_longname = "DINK32 monitor";
  VAR_16.to_doc = "Debug using the DINK32 monitor.\nSpecify the serial device it is connected to (e.g. /dev/ttya).";

  VAR_16.to_open = VAR_15;

  FUNC_0 (&VAR_16);
}
