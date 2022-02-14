
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {int dummy; } ;
struct breakpoint {int thread; int disposition; int enable_state; int * addr_string; int * cond_string; int * cond; scalar_t__ number; } ;
typedef enum exception_event_kind { ____Placeholder_exception_event_kind } exception_event_kind ;
typedef enum bptype { ____Placeholder_bptype } bptype ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct breakpoint*) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct breakpoint* FUNC_4 (struct symtab_and_line,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (int VAR_6, char *VAR_7,
        enum exception_event_kind VAR_8,
        struct symtab_and_line *VAR_9)
{
  struct breakpoint *VAR_10;
  int VAR_11 = -1;
  enum bptype VAR_12;

  if (!VAR_9)
    return;

  switch (VAR_8)
    {
    case 128:
      VAR_12 = VAR_1;
      break;
    case 129:
      VAR_12 = VAR_0;
      break;
    default:
      FUNC_0 ("Internal error -- invalid catchpoint kind");
    }

  VAR_10 = FUNC_4 (*VAR_9, VAR_12);
  FUNC_3 (VAR_3 + 1);
  VAR_10->number = VAR_3;
  VAR_10->cond = ((void*)0);
  VAR_10->cond_string = (VAR_7 == ((void*)0)) ?
    ((void*)0) : FUNC_2 (VAR_7, FUNC_5 (VAR_7));
  VAR_10->thread = VAR_11;
  VAR_10->addr_string = ((void*)0);
  VAR_10->enable_state = VAR_2;
  VAR_10->disposition = VAR_6 ? VAR_4 : VAR_5;
  FUNC_1 (VAR_10);
}
