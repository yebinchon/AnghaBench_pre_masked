
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct g_part_table {int dummy; } ;
struct g_part_ldm_entry {int type; } ;
struct g_part_entry {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(struct g_part_table *VAR_0,
    struct g_part_entry *VAR_1, struct sbuf *VAR_2, const char *VAR_3)
{
 struct g_part_ldm_entry *VAR_4;

 VAR_4 = (struct g_part_ldm_entry *)VAR_1;
 if (VAR_3 == ((void*)0)) {

  FUNC_0(VAR_2, " xs LDM xt %u", VAR_4->type);
 } else if (VAR_4 != ((void*)0)) {

  FUNC_0(VAR_2, "%s<rawtype>%u</rawtype>\n", VAR_3,
      VAR_4->type);
 } else {

 }
}
