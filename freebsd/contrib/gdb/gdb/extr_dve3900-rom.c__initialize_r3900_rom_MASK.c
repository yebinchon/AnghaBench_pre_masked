
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {char* cmd; char* resp_delim; char* term; char* term_cmd; } ;
struct TYPE_11__ {char* cmd; } ;
struct TYPE_10__ {char* cmdb; char* cmdw; char* cmdl; char* resp_delim; char* term; char* term_cmd; } ;
struct TYPE_9__ {char* cmdb; char* cmdw; char* cmdl; } ;
struct TYPE_14__ {int flags; char* cont; char* step; char* set_break; char* clr_break; char* fill; char* dump_registers; char* register_pattern; char* load; char* prompt; char* line_term; int magic; int regnames; int stopbits; TYPE_5__* target; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int init; } ;
struct TYPE_13__ {char* to_shortname; char* to_longname; char* to_doc; int to_load; int to_store_registers; int to_fetch_registers; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_5__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_2 (void)
{
  VAR_11.flags = VAR_4 |
    VAR_1 |
    VAR_2 |
    VAR_3 |
    VAR_5;

  VAR_11.init = VAR_7;
  VAR_11.cont = "g\r";
  VAR_11.step = "t\r";
  VAR_11.set_break = "b %A\r";
  VAR_11.clr_break = "b %A,0\r";
  VAR_11.fill = "fx %A s %x %x\r";

  VAR_11.setmem.cmdb = "sx %A %x\r";
  VAR_11.setmem.cmdw = "sh %A %x\r";
  VAR_11.setmem.cmdl = "sw %A %x\r";

  VAR_11.getmem.cmdb = "sx %A\r";
  VAR_11.getmem.cmdw = "sh %A\r";
  VAR_11.getmem.cmdl = "sw %A\r";
  VAR_11.getmem.resp_delim = " : ";
  VAR_11.getmem.term = " ";
  VAR_11.getmem.term_cmd = ".\r";

  VAR_11.setreg.cmd = "x%s %x\r";

  VAR_11.getreg.cmd = "x%s\r";
  VAR_11.getreg.resp_delim = "=";
  VAR_11.getreg.term = " ";
  VAR_11.getreg.term_cmd = ".\r";

  VAR_11.dump_registers = "x\r";
  VAR_11.register_pattern =
    "\\([a-zA-Z0-9_]+\\) *=\\([0-9a-f]+ [0-9a-f]+\\b\\)";
  VAR_11.supply_register = VAR_18;

  VAR_11.load = "r0\r";
  VAR_11.prompt = "#";
  VAR_11.line_term = "\r";
  VAR_11.target = &VAR_15;
  VAR_11.stopbits = VAR_6;
  VAR_11.regnames = VAR_16;
  VAR_11.magic = VAR_0;

  FUNC_1 (&VAR_15);

  VAR_15.to_shortname = "r3900";
  VAR_15.to_longname = "R3900 monitor";
  VAR_15.to_doc = "Debug using the DVE R3900 monitor.\nSpecify the serial device it is connected to (e.g. /dev/ttya).";

  VAR_15.to_open = VAR_14;





  VAR_8 = VAR_15.to_fetch_registers;
  VAR_10 = VAR_15.to_store_registers;
  VAR_15.to_fetch_registers = VAR_12;
  VAR_15.to_store_registers = VAR_17;



  VAR_9 = VAR_15.to_load;
  VAR_15.to_load = VAR_13;

  FUNC_0 (&VAR_15);
}
