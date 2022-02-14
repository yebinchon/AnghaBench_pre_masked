
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_part_table {scalar_t__ gpt_entries; scalar_t__ gpt_last; scalar_t__ gpt_first; } ;
struct TYPE_4__ {int ent_pmblkcnt; scalar_t__ ent_size; } ;
struct TYPE_3__ {scalar_t__ ddr_blkcount; } ;
struct g_part_apm_table {int tivo_series1; TYPE_2__ self; TYPE_1__ ddr; } ;
struct apm_ent {scalar_t__ ent_size; scalar_t__ ent_start; int ent_type; } ;
struct g_part_apm_entry {struct apm_ent ent; } ;
struct g_consumer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_consumer*,int,struct apm_ent*,int ) ;
 scalar_t__ FUNC_1 (struct g_part_table*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct g_part_table *VAR_1, struct g_consumer *VAR_2)
{
 struct apm_ent VAR_3;
 struct g_part_apm_entry *VAR_4;
 struct g_part_apm_table *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = (struct g_part_apm_table *)VAR_1;

 VAR_1->gpt_first = VAR_5->self.ent_size + 1;
 VAR_1->gpt_last = VAR_5->ddr.ddr_blkcount - 1;
 VAR_1->gpt_entries = VAR_5->self.ent_size - 1;

 for (VAR_7 = VAR_5->self.ent_pmblkcnt - 1; VAR_7 > 0; VAR_7--) {
  VAR_6 = FUNC_0(VAR_2, VAR_7 + 1, &VAR_3, VAR_5->tivo_series1);
  if (VAR_6)
   continue;
  if (!FUNC_2(VAR_3.ent_type, VAR_0))
   continue;
  VAR_4 = (struct g_part_apm_entry *)FUNC_1(VAR_1,
      VAR_7, VAR_3.ent_start, VAR_3.ent_start + VAR_3.ent_size - 1);
  VAR_4->ent = VAR_3;
 }

 return (0);
}
