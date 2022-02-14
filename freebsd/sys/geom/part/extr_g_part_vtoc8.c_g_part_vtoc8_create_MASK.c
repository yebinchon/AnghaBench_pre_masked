
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vtoc8 {int dummy; } ;
struct g_provider {int sectorsize; int mediasize; } ;
struct TYPE_6__ {TYPE_2__* map; TYPE_1__* part; int magic; int nsecs; int nheads; int altcyls; int ncyls; int physcyls; int rpm; int sanity; int nparts; int version; int ascii; } ;
struct g_part_vtoc8_table {int secpercyl; TYPE_3__ vtoc; } ;
struct g_part_table {int gpt_sectors; int gpt_heads; int gpt_last; int gpt_isleaf; scalar_t__ gpt_first; } ;
struct g_part_parms {struct g_provider* gpp_provider; } ;
struct g_part_entry {int gpe_internal; } ;
struct TYPE_5__ {int nblks; } ;
struct TYPE_4__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 struct g_part_entry* FUNC_3 (struct g_part_table*,int,scalar_t__,int) ;
 int FUNC_4 (int ,char*,long long,int,int,int,int) ;

__attribute__((used)) static int
FUNC_5(struct g_part_table *VAR_9, struct g_part_parms *VAR_10)
{
 struct g_provider *VAR_11;
 struct g_part_entry *VAR_12;
 struct g_part_vtoc8_table *VAR_13;
 uint64_t VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;

 VAR_11 = VAR_10->gpp_provider;

 if (VAR_11->sectorsize < sizeof(struct vtoc8))
  return (VAR_0);
 if (VAR_11->sectorsize > sizeof(struct vtoc8))
  return (VAR_1);

 VAR_13 = (struct g_part_vtoc8_table *)VAR_9;

 VAR_14 = FUNC_0(VAR_11->mediasize / VAR_11->sectorsize, VAR_2);
 VAR_13->secpercyl = VAR_9->gpt_sectors * VAR_9->gpt_heads;
 VAR_17 = VAR_14 / VAR_13->secpercyl;
 VAR_15 = 2;
 VAR_16 = VAR_17 - VAR_15;
 VAR_14 = VAR_16 * VAR_13->secpercyl;

 FUNC_4(VAR_13->vtoc.ascii, "FreeBSD%lldM cyl %u alt %u hd %u sec %u",
     (long long)(VAR_14 / 2048), VAR_16, VAR_15, VAR_9->gpt_heads,
     VAR_9->gpt_sectors);
 FUNC_2(&VAR_13->vtoc.version, VAR_8);
 FUNC_1(&VAR_13->vtoc.nparts, VAR_3);
 FUNC_2(&VAR_13->vtoc.sanity, VAR_6);
 FUNC_1(&VAR_13->vtoc.rpm, 3600);
 FUNC_1(&VAR_13->vtoc.physcyls, VAR_17);
 FUNC_1(&VAR_13->vtoc.ncyls, VAR_16);
 FUNC_1(&VAR_13->vtoc.altcyls, VAR_15);
 FUNC_1(&VAR_13->vtoc.nheads, VAR_9->gpt_heads);
 FUNC_1(&VAR_13->vtoc.nsecs, VAR_9->gpt_sectors);
 FUNC_1(&VAR_13->vtoc.magic, VAR_4);

 VAR_9->gpt_first = 0;
 VAR_9->gpt_last = VAR_14 - 1;
 VAR_9->gpt_isleaf = 1;

 VAR_12 = FUNC_3(VAR_9, VAR_5 + 1,
     VAR_9->gpt_first, VAR_9->gpt_last);
 VAR_12->gpe_internal = 1;
 FUNC_1(&VAR_13->vtoc.part[VAR_5].tag, VAR_7);
 FUNC_2(&VAR_13->vtoc.map[VAR_5].nblks, VAR_14);
 return (0);
}
