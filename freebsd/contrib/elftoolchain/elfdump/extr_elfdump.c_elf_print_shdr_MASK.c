
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uintmax_t ;
struct section {size_t name; scalar_t__ flags; size_t link; size_t info; scalar_t__ entsize; scalar_t__ align; scalar_t__ sz; scalar_t__ off; scalar_t__ addr; int type; } ;
struct TYPE_2__ {int e_machine; } ;
struct elfdump {int flags; size_t shnum; TYPE_1__ ehdr; struct section* sl; int snl; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct elfdump *VAR_1)
{
 struct section *VAR_2;
 size_t VAR_3;

 if (!FUNC_1(&VAR_1->snl))
  return;

 if ((VAR_1->flags & VAR_0) == 0)
  FUNC_0("\nsection header:\n");
 for (VAR_3 = 0; VAR_3 < VAR_1->shnum; VAR_3++) {
  VAR_2 = &VAR_1->sl[VAR_3];
  if (VAR_1->flags & VAR_0) {
   if (VAR_3 == 0)
    continue;
   FUNC_0("\nSection Header[%zu]:", VAR_3);
   FUNC_0("  sh_name: %s\n", VAR_2->name);
   FUNC_0("    sh_addr:      %#-14jx", (uintmax_t)VAR_2->addr);
   if (VAR_2->flags != 0)
    FUNC_0("  sh_flags:   [ %s ]\n", FUNC_2(VAR_2->flags));
   else
    FUNC_0("  sh_flags:   0\n");
   FUNC_0("    sh_size:      %#-14jx", (uintmax_t)VAR_2->sz);
   FUNC_0("  sh_type:    [ %s ]\n",
       FUNC_3(VAR_1->ehdr.e_machine, VAR_2->type));
   FUNC_0("    sh_offset:    %#-14jx", (uintmax_t)VAR_2->off);
   FUNC_0("  sh_entsize: %#jx\n", (uintmax_t)VAR_2->entsize);
   FUNC_0("    sh_link:      %-14u", VAR_2->link);
   FUNC_0("  sh_info:    %u\n", VAR_2->info);
   FUNC_0("    sh_addralign: %#jx\n", (uintmax_t)VAR_2->align);
  } else {
   FUNC_0("\n");
   FUNC_0("entry: %ju\n", (uintmax_t)VAR_3);
   FUNC_0("\tsh_name: %s\n", VAR_2->name);
   FUNC_0("\tsh_type: %s\n",
       FUNC_3(VAR_1->ehdr.e_machine, VAR_2->type));
   FUNC_0("\tsh_flags: %s\n", FUNC_2(VAR_2->flags));
   FUNC_0("\tsh_addr: %#jx\n", (uintmax_t)VAR_2->addr);
   FUNC_0("\tsh_offset: %ju\n", (uintmax_t)VAR_2->off);
   FUNC_0("\tsh_size: %ju\n", (uintmax_t)VAR_2->sz);
   FUNC_0("\tsh_link: %u\n", VAR_2->link);
   FUNC_0("\tsh_info: %u\n", VAR_2->info);
   FUNC_0("\tsh_addralign: %ju\n", (uintmax_t)VAR_2->align);
   FUNC_0("\tsh_entsize: %ju\n", (uintmax_t)VAR_2->entsize);
  }
 }
}
