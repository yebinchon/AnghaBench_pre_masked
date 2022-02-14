
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {int number; int addr_string; } ;


 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2 (struct breakpoint *VAR_0)
{
  if (FUNC_1 (VAR_0->addr_string, "throw") != ((void*)0))
    FUNC_0 ("Catchpoint %d (throw)", VAR_0->number);
  else
    FUNC_0 ("Catchpoint %d (catch)", VAR_0->number);
}
