
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
struct TYPE_8__ {char* cmd; int * term_cmd; int * term; int * resp_delim; } ;
struct TYPE_7__ {char* cmdb; char* cmdw; char* resp_delim; char* term; char* term_cmd; int * cmdll; int * cmdl; } ;
struct TYPE_6__ {char* cmdb; char* cmdw; int * term_cmd; int * term; int * resp_delim; int * cmdll; int * cmdl; } ;
struct TYPE_10__ {int flags; char* cont; char* step; char* stop; char* set_break; char* clr_break; char* clr_all_break; char* fill; char* dump_registers; char* register_pattern; char* load; char* prompt; char* line_term; int magic; int regnames; int stopbits; int * target; int * cmd_end; int * loadresp; int * load_routine; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_5.flags = VAR_1 | VAR_2 | VAR_3;
  VAR_5.init = VAR_6;
  VAR_5.cont = "g\r";
  VAR_5.step = "s\r";
  VAR_5.stop = "\003";
  VAR_5.set_break = "b %x\r";
  VAR_5.clr_break = "b - %x\r";
  VAR_5.clr_all_break = "b -\r";
  VAR_5.fill = "f %x %x %x\r";
  VAR_5.setmem.cmdb = "m.b %x=%x\r";
  VAR_5.setmem.cmdw = "m.w %x=%x\r";
  VAR_5.setmem.cmdl = ((void*)0);
  VAR_5.setmem.cmdll = ((void*)0);
  VAR_5.setmem.resp_delim = ((void*)0);
  VAR_5.setmem.term = ((void*)0);
  VAR_5.setmem.term_cmd = ((void*)0);
  VAR_5.getmem.cmdb = "m.b %x %x\r";
  VAR_5.getmem.cmdw = "m.w %x %x\r";
  VAR_5.getmem.cmdl = ((void*)0);
  VAR_5.getmem.cmdll = ((void*)0);
  VAR_5.getmem.resp_delim = ": ";
  VAR_5.getmem.term = ">";
  VAR_5.getmem.term_cmd = "\003";
  VAR_5.setreg.cmd = "r %s=%x\r";
  VAR_5.setreg.resp_delim = ((void*)0);
  VAR_5.setreg.term = ((void*)0);
  VAR_5.setreg.term_cmd = ((void*)0);
  VAR_5.getreg.cmd = "r %s\r";
  VAR_5.getreg.resp_delim = " (";
  VAR_5.getreg.term = ":";
  VAR_5.getreg.term_cmd = "\003";
  VAR_5.dump_registers = "r\r";
  VAR_5.register_pattern = "\\(\\w+\\)=\\([0-9a-fA-F]+\\)";
  VAR_5.supply_register = VAR_9;
  VAR_5.load_routine = ((void*)0);
  VAR_5.load = "tl\r";
  VAR_5.loadresp = ((void*)0);
  VAR_5.prompt = ">";
  VAR_5.line_term = "\r";
  VAR_5.cmd_end = ((void*)0);
  VAR_5.target = &VAR_7;
  VAR_5.stopbits = VAR_4;
  VAR_5.regnames = VAR_8;
  VAR_5.magic = VAR_0;
}
