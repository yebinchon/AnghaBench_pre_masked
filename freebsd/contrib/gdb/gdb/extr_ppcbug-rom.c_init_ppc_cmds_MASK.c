
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_8__ {char* cmd; char* resp_delim; int * term_cmd; int * term; } ;
struct TYPE_7__ {char* cmd; int * term_cmd; int * term; int * resp_delim; } ;
struct TYPE_6__ {char* cmdb; char* cmdw; char* cmdl; char* resp_delim; int * term_cmd; int * term; int * cmdll; } ;
struct TYPE_5__ {char* cmdb; char* cmdw; char* cmdl; int * term_cmd; int * term; int * resp_delim; int * cmdll; } ;
struct monitor_ops {int flags; char* cont; char* step; char* set_break; char* clr_break; char* clr_all_break; char* fill; char* register_pattern; char* dump_registers; char* load; char* prompt; char* line_term; int magic; int regnames; int stopbits; struct target_ops* target; int * cmd_end; int * loadresp; int * load_routine; int supply_register; TYPE_4__ getreg; TYPE_3__ setreg; TYPE_2__ getmem; TYPE_1__ setmem; int * stop; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_0 (char *VAR_7,
        struct monitor_ops *VAR_8,
        struct target_ops *VAR_9)
{
  VAR_8->flags = VAR_1 | VAR_2;
  VAR_8->init = VAR_4;
  VAR_8->cont = "g\r";
  VAR_8->step = "t\r";
  VAR_8->stop = ((void*)0);
  VAR_8->set_break = "br %x\r";
  VAR_8->clr_break = "nobr %x\r";
  VAR_8->clr_all_break = "nobr\r";
  VAR_8->fill = "bf %x:%x %x;b\r";
  VAR_8->setmem.cmdb = "ms %x %02x\r";
  VAR_8->setmem.cmdw = "ms %x %04x\r";
  VAR_8->setmem.cmdl = "ms %x %08x\r";
  VAR_8->setmem.cmdll = ((void*)0);
  VAR_8->setmem.resp_delim = ((void*)0);
  VAR_8->setmem.term = ((void*)0);
  VAR_8->setmem.term_cmd = ((void*)0);
  VAR_8->getmem.cmdb = "md %x:%x;b\r";
  VAR_8->getmem.cmdw = "md %x:%x;b\r";
  VAR_8->getmem.cmdl = "md %x:%x;b\r";
  VAR_8->getmem.cmdll = ((void*)0);
  VAR_8->getmem.resp_delim = " ";
  VAR_8->getmem.term = ((void*)0);
  VAR_8->getmem.term_cmd = ((void*)0);
  VAR_8->setreg.cmd = "rs %s %x\r";
  VAR_8->setreg.resp_delim = ((void*)0);
  VAR_8->setreg.term = ((void*)0);
  VAR_8->setreg.term_cmd = ((void*)0);
  VAR_8->getreg.cmd = "rs %s\r";
  VAR_8->getreg.resp_delim = "=";
  VAR_8->getreg.term = ((void*)0);
  VAR_8->getreg.term_cmd = ((void*)0);
  VAR_8->register_pattern = "\\(\\w+\\) +=\\([0-9a-fA-F]+\\b\\)";
  VAR_8->supply_register = VAR_6;
  VAR_8->dump_registers = "rd\r";
  VAR_8->load_routine = ((void*)0);
  VAR_8->load = VAR_7;
  VAR_8->loadresp = ((void*)0);
  VAR_8->prompt = "PPC1-Bug>";
  VAR_8->line_term = "\r";
  VAR_8->cmd_end = ((void*)0);
  VAR_8->target = VAR_9;
  VAR_8->stopbits = VAR_3;
  VAR_8->regnames = VAR_5;
  VAR_8->magic = VAR_0;
}
