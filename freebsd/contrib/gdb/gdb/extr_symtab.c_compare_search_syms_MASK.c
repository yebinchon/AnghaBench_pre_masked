
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_search {int symbol; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (const void *VAR_0, const void *VAR_1)
{
  struct symbol_search **VAR_2 = (struct symbol_search **) VAR_0;
  struct symbol_search **VAR_3 = (struct symbol_search **) VAR_1;

  return FUNC_1 (FUNC_0 ((*VAR_2)->symbol),
   FUNC_0 ((*VAR_3)->symbol));
}
