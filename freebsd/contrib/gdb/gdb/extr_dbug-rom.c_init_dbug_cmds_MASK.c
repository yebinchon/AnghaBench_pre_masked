
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* cmd; char* resp_delim; int * term_cmd; int * term; } ;
struct TYPE_8__ {char* cmd; int * term_cmd; int * term; int * resp_delim; } ;
struct TYPE_7__ {char* cmdb; char* cmdw; char* cmdl; char* resp_delim; int * term_cmd; int * term; int * cmdll; } ;
struct TYPE_6__ {char* cmdb; char* cmdw; char* cmdl; int * term_cmd; int * term; int * resp_delim; int * cmdll; } ;
struct TYPE_10__ {int flags; char* cont; char* step; char* set_break; char* clr_break; char* clr_all_break; char* fill; char* dump_registers; char* register_pattern; char* load; char* loadresp; char* prompt; char* line_term; int magic; int regname; int * regnames; int stopbits; int * target; int * cmd_end; int * load_routine; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int * stop; int init; } ;


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
  VAR_5.flags = VAR_1 | VAR_3 | VAR_2;
  VAR_5.init = VAR_6;
  VAR_5.cont = "go\r";
  VAR_5.step = "trace\r";
  VAR_5.stop = ((void*)0);
  VAR_5.set_break = "br %x\r";
  VAR_5.clr_break = "br -r %x\r";
  VAR_5.clr_all_break = "br -r\r";
  VAR_5.fill = "bf.b %x %x %x\r";
  VAR_5.setmem.cmdb = "mm.b %x %x\r";
  VAR_5.setmem.cmdw = "mm.w %x %x\r";
  VAR_5.setmem.cmdl = "mm.l %x %x\r";
  VAR_5.setmem.cmdll = ((void*)0);
  VAR_5.setmem.resp_delim = ((void*)0);
  VAR_5.setmem.term = ((void*)0);
  VAR_5.setmem.term_cmd = ((void*)0);
  VAR_5.getmem.cmdb = "md.b %x %x\r";
  VAR_5.getmem.cmdw = "md.w %x %x\r";
  VAR_5.getmem.cmdl = "md.l %x %x\r";
  VAR_5.getmem.cmdll = ((void*)0);
  VAR_5.getmem.resp_delim = ":";
  VAR_5.getmem.term = ((void*)0);
  VAR_5.getmem.term_cmd = ((void*)0);
  VAR_5.setreg.cmd = "rm %s %x\r";
  VAR_5.setreg.resp_delim = ((void*)0);
  VAR_5.setreg.term = ((void*)0);
  VAR_5.setreg.term_cmd = ((void*)0);
  VAR_5.getreg.cmd = "rd %s\r";
  VAR_5.getreg.resp_delim = ":";
  VAR_5.getreg.term = ((void*)0);
  VAR_5.getreg.term_cmd = ((void*)0);
  VAR_5.dump_registers = "rd\r";
  VAR_5.register_pattern = "\\(\\w+\\) +:\\([0-9a-fA-F]+\\b\\)";
  VAR_5.supply_register = VAR_9;
  VAR_5.load_routine = ((void*)0);
  VAR_5.load = "dl\r";
  VAR_5.loadresp = "\n";
  VAR_5.prompt = "dBUG>";
  VAR_5.line_term = "\r";
  VAR_5.cmd_end = ((void*)0);
  VAR_5.target = &VAR_7;
  VAR_5.stopbits = VAR_4;
  VAR_5.regnames = ((void*)0);
  VAR_5.regname = VAR_8;
  VAR_5.magic = VAR_0;
}
