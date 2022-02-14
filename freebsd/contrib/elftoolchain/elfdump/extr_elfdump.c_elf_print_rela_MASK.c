
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct section {scalar_t__ sz; int link; int name; } ;
struct TYPE_9__ {int r_info; } ;
struct TYPE_7__ {TYPE_3__ rela; } ;
struct rel_entry {TYPE_1__ u_r; int symn; int type; } ;
struct elfdump {int flags; } ;
struct TYPE_8__ {scalar_t__ d_size; } ;
typedef TYPE_2__ Elf_Data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct elfdump*,struct section*,int,struct rel_entry*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int,TYPE_3__*) ;
 int FUNC_6 (struct section*,int*) ;
 int FUNC_7 (struct elfdump*,int ,int ) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct elfdump *VAR_2, struct section *VAR_3, Elf_Data *VAR_4)
{
 struct rel_entry VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->flags & VAR_1) {
  FUNC_1("\nRelocation Section:  %s\n", VAR_3->name);
  FUNC_1("        type                          offset     "
      "addend  section        with respect to\n");
 } else
  FUNC_1("\nrelocation with addend (%s):\n", VAR_3->name);
 VAR_5.type = VAR_0;
 FUNC_2(VAR_4->d_size == VAR_3->sz);
 if (!FUNC_6(VAR_3, &VAR_7))
  return;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (FUNC_5(VAR_4, VAR_6, &VAR_5.u_r.rela) != &VAR_5.u_r.rela) {
   FUNC_8("gelf_getrela failed: %s",
       FUNC_3(-1));
   continue;
  }
  VAR_5.symn = FUNC_7(VAR_2, VAR_3->link,
      FUNC_0(VAR_5.u_r.rela.r_info));
  FUNC_4(VAR_2, VAR_3, VAR_6, &VAR_5);
 }
}
