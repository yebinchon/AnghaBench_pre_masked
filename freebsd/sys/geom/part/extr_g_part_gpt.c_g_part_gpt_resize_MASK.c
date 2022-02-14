
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_parms {scalar_t__ gpp_size; } ;
struct TYPE_2__ {scalar_t__ ent_lba_end; } ;
struct g_part_gpt_entry {TYPE_1__ ent; } ;
struct g_part_entry {scalar_t__ gpe_end; scalar_t__ gpe_start; } ;


 int FUNC_0 (struct g_part_table*) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_0,
    struct g_part_entry *VAR_1, struct g_part_parms *VAR_2)
{
 struct g_part_gpt_entry *VAR_3;

 if (VAR_1 == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_3 = (struct g_part_gpt_entry *)VAR_1;
 VAR_1->gpe_end = VAR_1->gpe_start + VAR_2->gpp_size - 1;
 VAR_3->ent.ent_lba_end = VAR_1->gpe_end;

 return (0);
}
