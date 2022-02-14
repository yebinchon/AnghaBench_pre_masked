
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
struct TYPE_10__ {int flags; char* cont; char* step; char* stop; char* set_break; char* clr_break; char* clr_all_break; char* fill; char* dump_registers; char* register_pattern; char* load; char* loadresp; char* prompt; char* line_term; int magic; int regname; int * regnames; int stopbits; int * target; int * cmd_end; int * load_routine; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_7.flags = VAR_1 | VAR_2 | VAR_3 |
    VAR_4 | VAR_5;
  VAR_7.init = VAR_8;
  VAR_7.cont = "go\r";
  VAR_7.step = "sidr\r";
  VAR_7.stop = "\003";
  VAR_7.set_break = "sb %x\r";
  VAR_7.clr_break = "rb %x\r";
  VAR_7.clr_all_break = "rb\r";
  VAR_7.fill = "bfb %x %x %x\r";
  VAR_7.setmem.cmdb = "smb %x %x\r";
  VAR_7.setmem.cmdw = "smw %x %x\r";
  VAR_7.setmem.cmdl = "sml %x %x\r";
  VAR_7.setmem.cmdll = ((void*)0);
  VAR_7.setmem.resp_delim = ((void*)0);
  VAR_7.setmem.term = ((void*)0);
  VAR_7.setmem.term_cmd = ((void*)0);
  VAR_7.getmem.cmdb = "dmb %x %x\r";
  VAR_7.getmem.cmdw = "dmw %x %x\r";
  VAR_7.getmem.cmdl = "dml %x %x\r";
  VAR_7.getmem.cmdll = ((void*)0);
  VAR_7.getmem.resp_delim = ": ";
  VAR_7.getmem.term = ((void*)0);
  VAR_7.getmem.term_cmd = ((void*)0);
  VAR_7.setreg.cmd = "sr %s %x\r";
  VAR_7.setreg.resp_delim = ((void*)0);
  VAR_7.setreg.term = ((void*)0);
  VAR_7.setreg.term_cmd = ((void*)0);
  VAR_7.getreg.cmd = "dr %s\r";
  VAR_7.getreg.resp_delim = " = ";
  VAR_7.getreg.term = ((void*)0);
  VAR_7.getreg.term_cmd = ((void*)0);
  VAR_7.dump_registers = "dr\r";
  VAR_7.register_pattern = "\\(\\w+\\) = \\([0-9a-fA-F]+\\)";
  VAR_7.supply_register = VAR_11;
  VAR_7.load_routine = ((void*)0);
  VAR_7.load = "dl\r";
  VAR_7.loadresp = "+";
  VAR_7.prompt = ">BKM>";
  VAR_7.line_term = "\r";
  VAR_7.cmd_end = ((void*)0);
  VAR_7.target = &VAR_9;
  VAR_7.stopbits = VAR_6;
  VAR_7.regnames = ((void*)0);
  VAR_7.regname = VAR_10;
  VAR_7.magic = VAR_0;
}
