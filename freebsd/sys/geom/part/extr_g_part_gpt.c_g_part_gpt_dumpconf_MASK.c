
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct g_part_table {int dummy; } ;
struct TYPE_4__ {scalar_t__ gpe_start; scalar_t__ gpe_end; int gpe_index; } ;
struct TYPE_3__ {int ent_attr; int ent_uuid; int ent_type; int ent_name; } ;
struct g_part_gpt_entry {TYPE_2__ base; TYPE_1__ ent; } ;
struct g_part_entry {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sbuf*,int ,int) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*,char*,char const*,...) ;
 int FUNC_3 (struct sbuf*,int *) ;

__attribute__((used)) static void
FUNC_4(struct g_part_table *VAR_3, struct g_part_entry *VAR_4,
    struct sbuf *VAR_5, const char *VAR_6)
{
 struct g_part_gpt_entry *VAR_7;

 VAR_7 = (struct g_part_gpt_entry *)VAR_4;
 if (VAR_6 == ((void*)0)) {

  FUNC_1(VAR_5, " xs GPT xt ");
  FUNC_3(VAR_5, &VAR_7->ent.ent_type);
 } else if (VAR_7 != ((void*)0)) {

  FUNC_2(VAR_5, "%s<label>", VAR_6);
  FUNC_0(VAR_5, VAR_7->ent.ent_name,
      sizeof(VAR_7->ent.ent_name) >> 1);
  FUNC_1(VAR_5, "</label>\n");
  if (VAR_7->ent.ent_attr & VAR_1)
   FUNC_2(VAR_5, "%s<attrib>bootme</attrib>\n", VAR_6);
  if (VAR_7->ent.ent_attr & VAR_2) {
   FUNC_2(VAR_5, "%s<attrib>bootonce</attrib>\n",
       VAR_6);
  }
  if (VAR_7->ent.ent_attr & VAR_0) {
   FUNC_2(VAR_5, "%s<attrib>bootfailed</attrib>\n",
       VAR_6);
  }
  FUNC_2(VAR_5, "%s<rawtype>", VAR_6);
  FUNC_3(VAR_5, &VAR_7->ent.ent_type);
  FUNC_1(VAR_5, "</rawtype>\n");
  FUNC_2(VAR_5, "%s<rawuuid>", VAR_6);
  FUNC_3(VAR_5, &VAR_7->ent.ent_uuid);
  FUNC_1(VAR_5, "</rawuuid>\n");
  FUNC_2(VAR_5, "%s<efimedia>", VAR_6);
  FUNC_2(VAR_5, "HD(%d,GPT,", VAR_7->base.gpe_index);
  FUNC_3(VAR_5, &VAR_7->ent.ent_uuid);
  FUNC_2(VAR_5, ",%#jx,%#jx)", (intmax_t)VAR_7->base.gpe_start,
      (intmax_t)(VAR_7->base.gpe_end - VAR_7->base.gpe_start + 1));
  FUNC_1(VAR_5, "</efimedia>\n");
 } else {

 }
}
