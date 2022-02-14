
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct probe_finder {TYPE_1__* pvar; TYPE_2__* tvar; int fb_ops; int addr; } ;
struct TYPE_5__ {int ref; } ;
struct TYPE_4__ {int type; scalar_t__ field; int var; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int *,int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(Dwarf_Die *VAR_2, struct probe_finder *VAR_3)
{
 Dwarf_Die VAR_4;
 int VAR_5;

 FUNC_4("Converting variable %s into trace event.\n",
   FUNC_3(VAR_2));

 VAR_5 = FUNC_1(VAR_2, VAR_3->addr, VAR_3->fb_ops,
     VAR_3->tvar);
 if (VAR_5 == -VAR_0)
  FUNC_5("Failed to find the location of %s at this address.\n"
         " Perhaps, it has been optimized out.\n", VAR_3->pvar->var);
 else if (VAR_5 == -VAR_1)
  FUNC_5("Sorry, we don't support this variable location yet.\n");
 else if (VAR_3->pvar->field) {
  VAR_5 = FUNC_0(VAR_2, VAR_3->pvar->var,
           VAR_3->pvar->field, &VAR_3->tvar->ref,
           &VAR_4);
  VAR_2 = &VAR_4;
 }
 if (VAR_5 == 0)
  VAR_5 = FUNC_2(VAR_2, VAR_3->tvar, VAR_3->pvar->type);

 return VAR_5;
}
