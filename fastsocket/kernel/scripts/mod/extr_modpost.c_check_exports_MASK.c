
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int name; int export; struct module* module; struct symbol* next; } ;
struct module {char* name; int gpl_compatible; struct symbol* unres; } ;


 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,char const*,int ) ;
 struct symbol* FUNC_2 (int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(struct module *VAR_0)
{
 struct symbol *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->unres; VAR_1; VAR_1 = VAR_1->next) {
  const char *VAR_3;
  VAR_2 = FUNC_2(VAR_1->name);
  if (!VAR_2 || VAR_2->module == VAR_0)
   continue;
  VAR_3 = FUNC_3(VAR_0->name, '/');
  if (VAR_3)
   VAR_3++;
  else
   VAR_3 = VAR_0->name;
  if (!VAR_0->gpl_compatible)
   FUNC_0(VAR_2->export, VAR_3, VAR_2->name);
  FUNC_1(VAR_2->export, VAR_3, VAR_2->name);
 }
}
