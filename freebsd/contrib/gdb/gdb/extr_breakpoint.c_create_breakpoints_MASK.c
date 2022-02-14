
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int section; int pc; } ;
struct expression {int dummy; } ;
struct breakpoint {int thread; char* addr_string; char* cond_string; int ignore_count; int disposition; scalar_t__ commands; TYPE_1__* loc; struct expression* cond; int enable_state; scalar_t__ number; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;
typedef enum bpdisp { ____Placeholder_bpdisp } bpdisp ;
struct TYPE_2__ {int address; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct breakpoint*) ;
 int FUNC_7 (int ) ;
 struct expression* FUNC_8 (char**,int ,int ) ;
 char* FUNC_9 (char*,int ) ;
 int FUNC_10 (scalar_t__) ;
 struct breakpoint* FUNC_11 (struct symtab_and_line,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char**,char*,int ) ;

__attribute__((used)) static void
FUNC_14 (struct symtabs_and_lines VAR_3, char **VAR_4,
      struct expression **VAR_5, char **VAR_6,
      enum bptype VAR_7, enum bpdisp VAR_8,
      int VAR_9, int VAR_10, int VAR_11,
      struct breakpoint *VAR_12)
{
  if (VAR_7 == VAR_1)
    {
      int VAR_13 = FUNC_5 ();
      int VAR_14 =
 FUNC_0 (VAR_1,
         VAR_13 + VAR_3.nelts, 0);
      if (VAR_14 == 0)
 FUNC_4 ("No hardware breakpoint support in the target.");
      else if (VAR_14 < 0)
 FUNC_4 ("Hardware breakpoints used exceeds limit.");
    }


  {
    int VAR_15;
    for (VAR_15 = 0; VAR_15 < VAR_3.nelts; VAR_15++)
      {
 struct breakpoint *VAR_16;
 struct symtab_and_line VAR_17 = VAR_3.sals[VAR_15];

 if (VAR_11)
   FUNC_3 (VAR_17.pc, VAR_17.section);

 VAR_16 = FUNC_11 (VAR_17, VAR_7);
 FUNC_10 (VAR_2 + 1);
 VAR_16->number = VAR_2;
 VAR_16->cond = VAR_5[VAR_15];
 VAR_16->thread = VAR_9;
 if (VAR_4[VAR_15])
   VAR_16->addr_string = VAR_4[VAR_15];
 else


   FUNC_13 (&VAR_16->addr_string, "*0x%s", FUNC_7 (VAR_16->loc->address));
 VAR_16->cond_string = VAR_6[VAR_15];
 VAR_16->ignore_count = VAR_10;
 VAR_16->enable_state = VAR_0;
 VAR_16->disposition = VAR_8;




 if (VAR_12)
   {
     char *VAR_18;
     if (VAR_12->cond_string)
       {
  VAR_18 = VAR_12->cond_string;
  VAR_16->cond_string = FUNC_9 (VAR_18, FUNC_12 (VAR_18));
  VAR_16->cond = FUNC_8 (&VAR_18, FUNC_1 (VAR_16->loc->address), 0);
  if (*VAR_18)
    FUNC_4 ("Junk at end of pending breakpoint condition expression");
       }


     if (VAR_12->commands)
       VAR_16->commands = FUNC_2 (VAR_12->commands);


     VAR_16->ignore_count = VAR_12->ignore_count;
     VAR_16->thread = VAR_12->thread;
   }
 FUNC_6 (VAR_16);
      }
  }
}
