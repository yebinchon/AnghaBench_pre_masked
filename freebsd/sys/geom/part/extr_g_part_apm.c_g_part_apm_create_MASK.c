
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct g_provider {int sectorsize; int mediasize; } ;
struct g_part_table {scalar_t__ gpt_depth; int gpt_entries; int gpt_first; void* gpt_last; } ;
struct g_part_parms {struct g_provider* gpp_provider; } ;
struct TYPE_4__ {int ent_pmblkcnt; int ent_start; int ent_size; int ent_type; int ent_name; int ent_sig; } ;
struct TYPE_3__ {int ddr_blksize; void* ddr_blkcount; int ddr_sig; } ;
struct g_part_apm_table {TYPE_2__ self; TYPE_1__ ddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct g_part_table *VAR_6, struct g_part_parms *VAR_7)
{
 struct g_provider *VAR_8;
 struct g_part_apm_table *VAR_9;
 uint32_t VAR_10;


 if (VAR_6->gpt_depth != 0)
  return (VAR_4);

 VAR_9 = (struct g_part_apm_table *)VAR_6;
 VAR_8 = VAR_7->gpp_provider;
 if (VAR_8->sectorsize != 512 ||
     VAR_8->mediasize < (2 + 2 * VAR_6->gpt_entries) * VAR_8->sectorsize)
  return (VAR_3);


 VAR_10 = FUNC_0(VAR_8->mediasize / VAR_8->sectorsize, VAR_5) - 1;

 VAR_6->gpt_first = 2 + VAR_6->gpt_entries;
 VAR_6->gpt_last = VAR_10;

 VAR_9->ddr.ddr_sig = VAR_0;
 VAR_9->ddr.ddr_blksize = VAR_8->sectorsize;
 VAR_9->ddr.ddr_blkcount = VAR_10 + 1;

 VAR_9->self.ent_sig = VAR_1;
 VAR_9->self.ent_pmblkcnt = VAR_6->gpt_entries + 1;
 VAR_9->self.ent_start = 1;
 VAR_9->self.ent_size = VAR_9->self.ent_pmblkcnt;
 FUNC_1(VAR_9->self.ent_name, "Apple");
 FUNC_1(VAR_9->self.ent_type, VAR_2);
 return (0);
}
