
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct probe_finder {TYPE_2__* pvar; int cu_die; int addr; TYPE_1__* tvar; } ;
struct TYPE_4__ {char* var; char* type; char* name; } ;
struct TYPE_3__ {int * name; int * type; int * value; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct probe_finder*) ;
 int FUNC_1 (int *,char*,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_8(Dwarf_Die *VAR_2, struct probe_finder *VAR_3)
{
 Dwarf_Die VAR_4;
 char VAR_5[32], *VAR_6;
 int VAR_7 = 0;

 if (!FUNC_2(VAR_3->pvar->var)) {

  VAR_3->tvar->value = FUNC_6(VAR_3->pvar->var);
  if (VAR_3->tvar->value == ((void*)0))
   return -VAR_1;
  if (VAR_3->pvar->type) {
   VAR_3->tvar->type = FUNC_6(VAR_3->pvar->type);
   if (VAR_3->tvar->type == ((void*)0))
    return -VAR_1;
  }
  if (VAR_3->pvar->name) {
   VAR_3->tvar->name = FUNC_6(VAR_3->pvar->name);
   if (VAR_3->tvar->name == ((void*)0))
    return -VAR_1;
  } else
   VAR_3->tvar->name = ((void*)0);
  return 0;
 }

 if (VAR_3->pvar->name)
  VAR_3->tvar->name = FUNC_6(VAR_3->pvar->name);
 else {
  VAR_7 = FUNC_7(VAR_3->pvar, VAR_5, 32);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_6 = FUNC_5(VAR_5, ':');
  if (VAR_6)
   *VAR_6 = '_';
  VAR_3->tvar->name = FUNC_6(VAR_5);
 }
 if (VAR_3->tvar->name == ((void*)0))
  return -VAR_1;

 FUNC_3("Searching '%s' variable in context.\n", VAR_3->pvar->var);

 if (!FUNC_1(VAR_2, VAR_3->pvar->var, VAR_3->addr, &VAR_4)) {

  if (!FUNC_1(&VAR_3->cu_die, VAR_3->pvar->var, 0, &VAR_4))
   VAR_7 = -VAR_0;
 }
 if (VAR_7 >= 0)
  VAR_7 = FUNC_0(&VAR_4, VAR_3);

 if (VAR_7 < 0)
  FUNC_4("Failed to find '%s' in this function.\n",
      VAR_3->pvar->var);
 return VAR_7;
}
