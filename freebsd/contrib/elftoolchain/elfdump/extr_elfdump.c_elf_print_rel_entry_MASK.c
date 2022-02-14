
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
struct section {int name; } ;
struct TYPE_7__ {scalar_t__ r_addend; } ;
struct TYPE_6__ {scalar_t__ r_info; scalar_t__ r_offset; } ;
struct TYPE_8__ {TYPE_3__ rela; TYPE_2__ rel; } ;
struct rel_entry {scalar_t__ type; int symn; TYPE_4__ u_r; } ;
struct TYPE_5__ {int e_machine; } ;
struct elfdump {int flags; scalar_t__ ec; TYPE_1__ ehdr; } ;
typedef int intmax_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct elfdump *VAR_3, struct section *VAR_4, int VAR_5,
    struct rel_entry *VAR_6)
{

 if (VAR_3->flags & VAR_2) {
  FUNC_4("        %-23s ", FUNC_5(VAR_3->ehdr.e_machine,
   FUNC_3(VAR_6->u_r.rel.r_info)));
  FUNC_4("%#12jx ", (uintmax_t)VAR_6->u_r.rel.r_offset);
  if (VAR_6->type == VAR_1)
   FUNC_4("%10jd  ", (intmax_t)VAR_6->u_r.rela.r_addend);
  else
   FUNC_4("    ");
  FUNC_4("%-14s ", VAR_4->name);
  FUNC_4("%s\n", VAR_6->symn);
 } else {
  FUNC_4("\n");
  FUNC_4("entry: %d\n", VAR_5);
  FUNC_4("\tr_offset: %#jx\n", (uintmax_t)VAR_6->u_r.rel.r_offset);
  if (VAR_3->ec == VAR_0)
   FUNC_4("\tr_info: %#jx\n", (uintmax_t)
       FUNC_0(FUNC_1(VAR_6->u_r.rel.r_info),
       FUNC_2(VAR_6->u_r.rel.r_info)));
  else
   FUNC_4("\tr_info: %#jx\n", (uintmax_t)VAR_6->u_r.rel.r_info);
  if (VAR_6->type == VAR_1)
   FUNC_4("\tr_addend: %jd\n",
       (intmax_t)VAR_6->u_r.rela.r_addend);
 }
}
