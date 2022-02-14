
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_2__ {char const* dp_typ; int dp_flag; } ;
struct g_part_ebr_entry {TYPE_1__ ent; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(struct g_part_table *VAR_0, struct g_part_entry *VAR_1,
    struct sbuf *VAR_2, const char *VAR_3)
{
 struct g_part_ebr_entry *VAR_4;

 VAR_4 = (struct g_part_ebr_entry *)VAR_1;
 if (VAR_3 == ((void*)0)) {

  FUNC_0(VAR_2, " xs MBREXT xt %u", VAR_4->ent.dp_typ);
 } else if (VAR_4 != ((void*)0)) {

  FUNC_0(VAR_2, "%s<rawtype>%u</rawtype>\n", VAR_3,
      VAR_4->ent.dp_typ);
  if (VAR_4->ent.dp_flag & 0x80)
   FUNC_0(VAR_2, "%s<attrib>active</attrib>\n", VAR_3);
 } else {

 }
}
