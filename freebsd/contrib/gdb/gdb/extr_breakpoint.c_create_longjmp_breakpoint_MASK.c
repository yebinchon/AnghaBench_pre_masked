
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
struct breakpoint {int silent; int addr_string; int enable_state; } ;


 int FUNC_0 (struct minimal_symbol*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct breakpoint* FUNC_1 (int ,int ) ;
 struct minimal_symbol* FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_3)
{
  struct breakpoint *VAR_4;
  struct minimal_symbol *VAR_5;

  if (VAR_3 == ((void*)0))
    VAR_4 = FUNC_1 (0, VAR_2);
  else
    {
      if ((VAR_5 = FUNC_2 (VAR_3, ((void*)0))) == ((void*)0))
 return;

      VAR_4 = FUNC_1 (FUNC_0 (VAR_5), VAR_1);
    }

  VAR_4->enable_state = VAR_0;
  VAR_4->silent = 1;
  if (VAR_3)
    VAR_4->addr_string = FUNC_3 (VAR_3);
}
