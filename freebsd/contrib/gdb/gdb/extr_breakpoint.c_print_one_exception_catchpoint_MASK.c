
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {int addr_string; TYPE_1__* loc; } ;
struct TYPE_2__ {int address; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (struct breakpoint *VAR_2, CORE_ADDR *VAR_3)
{
  if (VAR_0)
    {
      FUNC_0 (4);
      FUNC_2 (VAR_1, "addr", VAR_2->loc->address);
    }
  FUNC_0 (5);
  *VAR_3 = VAR_2->loc->address;
  if (FUNC_1 (VAR_2->addr_string, "throw") != ((void*)0))
    FUNC_3 (VAR_1, "what", "exception throw");
  else
    FUNC_3 (VAR_1, "what", "exception catch");
}
