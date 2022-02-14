
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {scalar_t__ nelts; char* sals; } ;
struct breakpoint {int thread; char* addr_string; int * ops; int disposition; int enable_state; int * cond_string; int * cond; scalar_t__ number; } ;
typedef enum exception_event_kind { ____Placeholder_exception_event_kind } exception_event_kind ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct symtabs_and_lines FUNC_0 (char**,int,int *,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct breakpoint*) ;
 int * FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct breakpoint* FUNC_4 (char,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8 (int VAR_7, char *VAR_8,
     enum exception_event_kind VAR_9, int VAR_10)
{
  char *VAR_11, *VAR_12;
  struct symtabs_and_lines VAR_13;
  struct breakpoint *VAR_14;

  if (VAR_9 == VAR_0)
    VAR_11 = FUNC_7 ("__cxa_begin_catch");
  else
    VAR_11 = FUNC_7 ("__cxa_throw");

  VAR_12 = VAR_11;
  VAR_13 = FUNC_0 (&VAR_12, 1, ((void*)0), 0, ((void*)0), ((void*)0));
  if (VAR_13.nelts == 0)
    {
      FUNC_6 (VAR_11);
      return 0;
    }

  VAR_14 = FUNC_4 (VAR_13.sals[0], VAR_1);
  FUNC_3 (VAR_3 + 1);
  VAR_14->number = VAR_3;
  VAR_14->cond = ((void*)0);
  VAR_14->cond_string = (VAR_8 == ((void*)0)) ?
    ((void*)0) : FUNC_2 (VAR_8, FUNC_5 (VAR_8));
  VAR_14->thread = -1;
  VAR_14->addr_string = VAR_11;
  VAR_14->enable_state = VAR_2;
  VAR_14->disposition = VAR_7 ? VAR_4 : VAR_5;
  VAR_14->ops = &VAR_6;

  FUNC_6 (VAR_13.sals);
  FUNC_1 (VAR_14);
  return 1;
}
