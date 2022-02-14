
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {scalar_t__ gpt_last; TYPE_2__* gpt_gp; } ;
struct g_part_parms {scalar_t__ gpp_size; } ;
struct g_part_entry {scalar_t__ gpe_start; scalar_t__ gpe_end; } ;
struct TYPE_4__ {scalar_t__ ent_size; } ;
struct g_part_apm_entry {TYPE_1__ ent; } ;
struct TYPE_6__ {struct g_provider* provider; } ;
struct TYPE_5__ {int consumer; } ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_1,
    struct g_part_entry *VAR_2, struct g_part_parms *VAR_3)
{
 struct g_part_apm_entry *VAR_4;
 struct g_provider *VAR_5;

 if (VAR_2 == ((void*)0)) {
  VAR_5 = FUNC_0(&VAR_1->gpt_gp->consumer)->provider;
  VAR_1->gpt_last = FUNC_1(VAR_5->mediasize / VAR_5->sectorsize,
      VAR_0) - 1;
  return (0);
 }

 VAR_4 = (struct g_part_apm_entry *)VAR_2;
 VAR_2->gpe_end = VAR_2->gpe_start + VAR_3->gpp_size - 1;
 VAR_4->ent.ent_size = VAR_3->gpp_size;

 return (0);
}
