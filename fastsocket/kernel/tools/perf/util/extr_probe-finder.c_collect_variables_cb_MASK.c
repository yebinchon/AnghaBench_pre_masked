
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct variable_list {int vars; } ;
struct TYPE_2__ {int addr; int fb_ops; } ;
struct available_var_finder {int nvls; TYPE_1__ pf; scalar_t__ child; struct variable_list* vls; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(Dwarf_Die *VAR_5, void *VAR_6)
{
 struct available_var_finder *VAR_7 = VAR_6;
 struct variable_list *VAR_8;
 char VAR_9[VAR_4];
 int VAR_10, VAR_11;

 VAR_8 = &VAR_7->vls[VAR_7->nvls - 1];

 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10 == VAR_2 ||
     VAR_10 == VAR_3) {
  VAR_11 = FUNC_0(VAR_5, VAR_7->pf.addr,
      VAR_7->pf.fb_ops, ((void*)0));
  if (VAR_11 == 0) {
   VAR_11 = FUNC_1(VAR_5, VAR_9, VAR_4);
   FUNC_4("Add new var: %s\n", VAR_9);
   if (VAR_11 > 0)
    FUNC_5(VAR_8->vars, VAR_9);
  }
 }

 if (VAR_7->child && FUNC_2(VAR_5, VAR_7->pf.addr))
  return VAR_0;
 else
  return VAR_1;
}
