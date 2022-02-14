
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_4__ {TYPE_1__* part; int altcyls; int nheads; int nsecs; } ;
struct g_part_vtoc8_table {TYPE_2__ vtoc; } ;
struct g_part_table {int dummy; } ;
struct g_part_entry {int gpe_index; } ;
struct TYPE_3__ {int tag; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sbuf*,char*,char const*,int ,...) ;

__attribute__((used)) static void
FUNC_2(struct g_part_table *VAR_0,
    struct g_part_entry *VAR_1, struct sbuf *VAR_2, const char *VAR_3)
{
 struct g_part_vtoc8_table *VAR_4;

 VAR_4 = (struct g_part_vtoc8_table *)VAR_0;
 if (VAR_3 == ((void*)0)) {

  FUNC_1(VAR_2, " xs SUN sc %u hd %u alt %u",
      FUNC_0(&VAR_4->vtoc.nsecs), FUNC_0(&VAR_4->vtoc.nheads),
      FUNC_0(&VAR_4->vtoc.altcyls));
 } else if (VAR_1 != ((void*)0)) {

  FUNC_1(VAR_2, "%s<rawtype>%u</rawtype>\n", VAR_3,
      FUNC_0(&VAR_4->vtoc.part[VAR_1->gpe_index - 1].tag));
 } else {

 }
}
