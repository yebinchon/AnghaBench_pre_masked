
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
struct breakpoint {int enable_state; int addr_string; } ;


 int FUNC_0 (struct minimal_symbol*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct breakpoint* FUNC_1 (int ,int ) ;
 struct minimal_symbol* FUNC_2 (char*,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_6)
{
  struct breakpoint *VAR_7;
  struct minimal_symbol *VAR_8;

  if ((VAR_8 = FUNC_2 (VAR_6, ((void*)0))) == ((void*)0))
    return;

  VAR_7 = FUNC_1 (FUNC_0 (VAR_8),
      VAR_2);
  VAR_7->addr_string = FUNC_3 (VAR_6);

  if (VAR_3 == VAR_5)
    {
      VAR_7->enable_state = VAR_1;
      VAR_4 = 1;
    }
  else
    {
      VAR_7->enable_state = VAR_0;
      VAR_4 = 0;
    }
}
