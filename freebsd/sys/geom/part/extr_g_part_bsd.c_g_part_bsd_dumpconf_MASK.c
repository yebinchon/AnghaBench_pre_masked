
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_2__ {int p_fstype; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(struct g_part_table *VAR_0, struct g_part_entry *VAR_1,
    struct sbuf *VAR_2, const char *VAR_3)
{
 struct g_part_bsd_entry *VAR_4;

 VAR_4 = (struct g_part_bsd_entry *)VAR_1;
 if (VAR_3 == ((void*)0)) {

  FUNC_0(VAR_2, " xs BSD xt %u", VAR_4->part.p_fstype);
 } else if (VAR_4 != ((void*)0)) {

  FUNC_0(VAR_2, "%s<rawtype>%u</rawtype>\n", VAR_3,
      VAR_4->part.p_fstype);
 } else {

 }
}
