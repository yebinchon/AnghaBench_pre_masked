
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* cmd; char* resp_delim; char* term; char* term_cmd; } ;
struct TYPE_8__ {char* cmd; char* resp_delim; char* term; char* term_cmd; } ;
struct TYPE_7__ {char* cmdb; char* cmdw; char* cmdl; char* resp_delim; int * term_cmd; int * term; int * cmdll; } ;
struct TYPE_6__ {char* cmdb; char* cmdw; char* cmdl; int * term_cmd; int * term; int * resp_delim; int * cmdll; } ;
struct TYPE_10__ {char* cont; char* step; char* set_break; char* clr_break; char* clr_all_break; char* fill; char* dump_registers; char* register_pattern; char* load; char* loadresp; char* prompt; char* line_term; int magic; int regname; int * regnames; int stopbits; int * target; int * cmd_end; int * load_routine; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int * stop; int init; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_3.flags = VAR_1;
  VAR_3.init = VAR_4;
  VAR_3.cont = "g\r";
  VAR_3.step = "t\r";
  VAR_3.stop = ((void*)0);
  VAR_3.set_break = "br %x\r";
  VAR_3.clr_break = "nobr %x\r";
  VAR_3.clr_all_break = "nobr\r";
  VAR_3.fill = "bf %x:%x %x;b\r";
  VAR_3.setmem.cmdb = "ms %x %02x\r";
  VAR_3.setmem.cmdw = "ms %x %04x\r";
  VAR_3.setmem.cmdl = "ms %x %08x\r";
  VAR_3.setmem.cmdll = ((void*)0);
  VAR_3.setmem.resp_delim = ((void*)0);
  VAR_3.setmem.term = ((void*)0);
  VAR_3.setmem.term_cmd = ((void*)0);
  VAR_3.getmem.cmdb = "md %x:%x;b\r";
  VAR_3.getmem.cmdw = "md %x:%x;b\r";
  VAR_3.getmem.cmdl = "md %x:%x;b\r";
  VAR_3.getmem.cmdll = ((void*)0);
  VAR_3.getmem.resp_delim = " ";
  VAR_3.getmem.term = ((void*)0);
  VAR_3.getmem.term_cmd = ((void*)0);
  VAR_3.setreg.cmd = "rm %s %x\r";
  VAR_3.setreg.resp_delim = "=";
  VAR_3.setreg.term = "? ";
  VAR_3.setreg.term_cmd = ".\r";
  VAR_3.getreg.cmd = "rm %s\r";
  VAR_3.getreg.resp_delim = "=";
  VAR_3.getreg.term = "? ";
  VAR_3.getreg.term_cmd = ".\r";
  VAR_3.dump_registers = "rd\r";
  VAR_3.register_pattern = "\\(\\w+\\) +=\\([0-9a-fA-F]+\\b\\)";
  VAR_3.supply_register = VAR_7;
  VAR_3.load_routine = ((void*)0);
  VAR_3.load = "lo 0\r";
  VAR_3.loadresp = "\n";
  VAR_3.prompt = "135Bug>";
  VAR_3.line_term = "\r";
  VAR_3.cmd_end = ((void*)0);
  VAR_3.target = &VAR_5;
  VAR_3.stopbits = VAR_2;
  VAR_3.regnames = ((void*)0);
  VAR_3.regname = VAR_6;
  VAR_3.magic = VAR_0;
}
