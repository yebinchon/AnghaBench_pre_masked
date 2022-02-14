
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {TYPE_1__* module; struct symbol* next; } ;
struct module {struct symbol* unres; int name; int seen; struct module* next; } ;
struct buffer {int dummy; } ;
struct TYPE_2__ {int seen; char* name; } ;


 int FUNC_0 (struct buffer*,char*,...) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(struct buffer *VAR_0, struct module *VAR_1,
   struct module *VAR_2)
{
 struct symbol *VAR_3;
 struct module *VAR_4;
 int VAR_5 = 1;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
  VAR_4->seen = FUNC_1(VAR_4->name);

 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "static const char __module_depends[]\n");
 FUNC_0(VAR_0, "__used\n");
 FUNC_0(VAR_0, "__attribute__((section(\".modinfo\"))) =\n");
 FUNC_0(VAR_0, "\"depends=");
 for (VAR_3 = VAR_1->unres; VAR_3; VAR_3 = VAR_3->next) {
  const char *VAR_6;
  if (!VAR_3->module)
   continue;

  if (VAR_3->module->seen)
   continue;

  VAR_3->module->seen = 1;
  VAR_6 = FUNC_2(VAR_3->module->name, '/');
  if (VAR_6)
   VAR_6++;
  else
   VAR_6 = VAR_3->module->name;
  FUNC_0(VAR_0, "%s%s", VAR_5 ? "" : ",", VAR_6);
  VAR_5 = 0;
 }
 FUNC_0(VAR_0, "\";\n");
}
