
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct g_provider {int sectorsize; int mediasize; } ;
struct g_part_table {int gpt_sectors; int gpt_heads; int gpt_entries; int gpt_last; int gpt_isleaf; scalar_t__ gpt_first; } ;
struct g_part_parms {struct g_provider* gpp_provider; } ;
struct g_part_entry {int gpe_internal; } ;
struct g_part_bsd_table {int offset; int * bbarea; } ;
struct TYPE_2__ {int p_size; int p_offset; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;
struct disklabel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int,int) ;
 struct g_part_entry* FUNC_2 (struct g_part_table*,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(struct g_part_table *VAR_8, struct g_part_parms *VAR_9)
{
 struct g_provider *VAR_10;
 struct g_part_entry *VAR_11;
 struct g_part_bsd_entry *VAR_12;
 struct g_part_bsd_table *VAR_13;
 u_char *VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;

 VAR_10 = VAR_9->gpp_provider;

 if (VAR_10->sectorsize < sizeof(struct disklabel))
  return (VAR_2);
 if (VAR_0 % VAR_10->sectorsize)
  return (VAR_3);

 VAR_15 = FUNC_0(VAR_10->mediasize / VAR_10->sectorsize, VAR_7);
 VAR_17 = VAR_8->gpt_sectors * VAR_8->gpt_heads;
 VAR_16 = VAR_15 / VAR_17;

 VAR_13 = (struct g_part_bsd_table *)VAR_8;
 VAR_13->bbarea = FUNC_1(VAR_0, VAR_4 | VAR_5);
 VAR_14 = VAR_13->bbarea + VAR_10->sectorsize;

 FUNC_4(VAR_14 + 0, VAR_1);
 FUNC_4(VAR_14 + 40, VAR_10->sectorsize);
 FUNC_4(VAR_14 + 44, VAR_8->gpt_sectors);
 FUNC_4(VAR_14 + 48, VAR_8->gpt_heads);
 FUNC_4(VAR_14 + 52, VAR_16);
 FUNC_4(VAR_14 + 56, VAR_17);
 FUNC_4(VAR_14 + 60, VAR_15);
 FUNC_3(VAR_14 + 72, 3600);
 FUNC_4(VAR_14 + 132, VAR_1);
 FUNC_3(VAR_14 + 138, VAR_8->gpt_entries);
 FUNC_4(VAR_14 + 140, VAR_0);

 VAR_8->gpt_first = 0;
 VAR_8->gpt_last = VAR_15 - 1;
 VAR_8->gpt_isleaf = 1;

 VAR_11 = FUNC_2(VAR_8, VAR_6 + 1,
     VAR_8->gpt_first, VAR_8->gpt_last);
 VAR_11->gpe_internal = 1;
 VAR_12 = (struct g_part_bsd_entry *)VAR_11;
 VAR_12->part.p_size = VAR_8->gpt_last + 1;
 VAR_12->part.p_offset = VAR_13->offset;

 return (0);
}
