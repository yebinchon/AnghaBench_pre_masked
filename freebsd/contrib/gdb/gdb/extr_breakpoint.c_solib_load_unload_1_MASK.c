
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; char* sals; } ;
struct symtab {int dummy; } ;
struct cleanup {int dummy; } ;
struct breakpoint {char* cond_string; int thread; char* addr_string; char* dll_pathname; int disposition; int enable_state; int * cond; scalar_t__ number; } ;
typedef enum bptype { ____Placeholder_bptype } bptype ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct symtabs_and_lines FUNC_0 (char**,int,struct symtab*,int ,char***,int *) ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct cleanup*) ;
 struct cleanup* FUNC_3 (int ,...) ;
 int FUNC_4 (struct breakpoint*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (scalar_t__) ;
 struct breakpoint* FUNC_8 (char,int) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_6, int VAR_7, char *VAR_8,
       char *VAR_9, enum bptype VAR_10)
{
  struct breakpoint *VAR_11;
  struct symtabs_and_lines VAR_12;
  struct cleanup *VAR_13;
  struct cleanup *VAR_14 = ((void*)0);
  char *VAR_15 = VAR_6;
  char *VAR_16 = ((void*)0);
  char **VAR_17 = (char **) ((void*)0);
  int VAR_18 = -1;


  VAR_12 = FUNC_0 (&VAR_6, 1, (struct symtab *) ((void*)0), 0, &VAR_17, ((void*)0));
  VAR_16 = VAR_6;

  if (VAR_12.nelts == 0)
    {
      FUNC_11 ("Unable to set a breakpoint on dynamic linker callback.");
      FUNC_11 ("Suggest linking with /opt/langtools/lib/end.o.");
      FUNC_11 ("GDB will be unable to track shl_load/shl_unload calls");
      return;
    }
  if (VAR_12.nelts != 1)
    {
      FUNC_11 ("Unable to set unique breakpoint on dynamic linker callback.");
      FUNC_11 ("GDB will be unable to track shl_load/shl_unload calls");
      return;
    }



  VAR_13 = FUNC_3 (VAR_5, VAR_12.sals);
  if (VAR_17 != (char **) ((void*)0))
    {
      FUNC_3 (VAR_5, VAR_17);
      VAR_14 = FUNC_3 (VAR_4, 0);
      if (VAR_17[0] != ((void*)0))
 FUNC_3 (VAR_5, VAR_17[0]);
    }

  FUNC_5 (&VAR_12.sals[0]);


  if (VAR_17 != (char **) ((void*)0))
    FUNC_1 (VAR_14);

  VAR_11 = FUNC_8 (VAR_12.sals[0], VAR_10);
  FUNC_7 (VAR_1 + 1);
  VAR_11->number = VAR_1;
  VAR_11->cond = ((void*)0);
  VAR_11->cond_string = (VAR_9 == ((void*)0)) ?
    ((void*)0) : FUNC_6 (VAR_9, FUNC_10 (VAR_9));
  VAR_11->thread = VAR_18;

  if (VAR_17 != (char **) ((void*)0) && VAR_17[0] != ((void*)0))
    VAR_11->addr_string = VAR_17[0];
  else if (VAR_15)
    VAR_11->addr_string = FUNC_6 (VAR_15, VAR_16 - VAR_15);

  VAR_11->enable_state = VAR_0;
  VAR_11->disposition = VAR_7 ? VAR_2 : VAR_3;

  if (VAR_8 == ((void*)0))
    VAR_11->dll_pathname = ((void*)0);
  else
    {
      VAR_11->dll_pathname = (char *) FUNC_12 (FUNC_10 (VAR_8) + 1);
      FUNC_9 (VAR_11->dll_pathname, VAR_8);
    }

  FUNC_4 (VAR_11);
  FUNC_2 (VAR_13);
}
