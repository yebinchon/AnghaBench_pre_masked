
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpt_hdr {int hdr_size; int hdr_crc_self; int hdr_revision; int hdr_lba_self; int hdr_lba_alt; int hdr_lba_start; int hdr_lba_end; int hdr_entries; int hdr_entsz; int hdr_lba_table; int hdr_crc_table; int hdr_uuid; int hdr_sig; } ;
struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_gpt_table {scalar_t__* state; int* lba; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef int quad_t ;
typedef enum gpt_elt { ____Placeholder_gpt_elt } gpt_elt ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gpt_hdr*,struct gpt_hdr*,int) ;
 int FUNC_1 (struct gpt_hdr*,int) ;
 int FUNC_2 (struct gpt_hdr*) ;
 struct gpt_hdr* FUNC_3 (int,int) ;
 struct gpt_hdr* FUNC_4 (struct g_consumer*,int,int,int*) ;
 int FUNC_5 (int,int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;

__attribute__((used)) static struct gpt_hdr *
FUNC_10(struct g_part_gpt_table *VAR_10, struct g_consumer *VAR_11,
    enum gpt_elt VAR_12)
{
 struct gpt_hdr *VAR_13, *VAR_14;
 struct g_provider *VAR_15;
 quad_t VAR_16, VAR_17;
 int VAR_18;
 uint32_t VAR_19, VAR_20;

 VAR_15 = VAR_11->provider;
 VAR_17 = (VAR_15->mediasize / VAR_15->sectorsize) - 1;
 VAR_10->state[VAR_12] = VAR_6;




 if (VAR_12 == VAR_1) {
  if (VAR_10->state[VAR_0] != VAR_7)
   VAR_10->lba[VAR_12] = VAR_17;
 } else
  VAR_10->lba[VAR_12] = 1;
 VAR_13 = FUNC_4(VAR_11, VAR_10->lba[VAR_12] * VAR_15->sectorsize, VAR_15->sectorsize,
     &VAR_18);
 if (VAR_13 == ((void*)0))
  return (((void*)0));
 VAR_14 = ((void*)0);
 if (FUNC_9(VAR_13->hdr_sig, VAR_3, sizeof(VAR_13->hdr_sig)) != 0)
  goto fail;

 VAR_10->state[VAR_12] = VAR_4;
 VAR_20 = FUNC_6(VAR_13->hdr_size);
 if (VAR_20 < 92 || VAR_20 > VAR_15->sectorsize)
  goto fail;

 VAR_14 = FUNC_3(VAR_20, VAR_8 | VAR_9);
 FUNC_0(VAR_13, VAR_14, VAR_20);
 VAR_14->hdr_size = VAR_20;

 VAR_19 = FUNC_6(VAR_13->hdr_crc_self);
 VAR_13->hdr_crc_self = 0;
 if (FUNC_1(VAR_13, VAR_20) != VAR_19)
  goto fail;
 VAR_14->hdr_crc_self = VAR_19;

 VAR_10->state[VAR_12] = VAR_5;
 VAR_14->hdr_revision = FUNC_6(VAR_13->hdr_revision);
 if (VAR_14->hdr_revision < VAR_2)
  goto fail;
 VAR_14->hdr_lba_self = FUNC_7(VAR_13->hdr_lba_self);
 if (VAR_14->hdr_lba_self != VAR_10->lba[VAR_12])
  goto fail;
 VAR_14->hdr_lba_alt = FUNC_7(VAR_13->hdr_lba_alt);
 if (VAR_14->hdr_lba_alt == VAR_14->hdr_lba_self ||
     VAR_14->hdr_lba_alt > VAR_17)
  goto fail;


 VAR_14->hdr_lba_start = FUNC_7(VAR_13->hdr_lba_start);
 if (VAR_14->hdr_lba_start < 2 || VAR_14->hdr_lba_start >= VAR_17)
  goto fail;
 VAR_14->hdr_lba_end = FUNC_7(VAR_13->hdr_lba_end);
 if (VAR_14->hdr_lba_end < VAR_14->hdr_lba_start || VAR_14->hdr_lba_end >= VAR_17)
  goto fail;


 VAR_14->hdr_entries = FUNC_6(VAR_13->hdr_entries);
 VAR_14->hdr_entsz = FUNC_6(VAR_13->hdr_entsz);
 if (VAR_14->hdr_entries == 0 || VAR_14->hdr_entsz < 128 ||
     (VAR_14->hdr_entsz & 7) != 0)
  goto fail;
 VAR_14->hdr_lba_table = FUNC_7(VAR_13->hdr_lba_table);
 if (VAR_14->hdr_lba_table < 2 || VAR_14->hdr_lba_table >= VAR_17)
  goto fail;
 if (VAR_14->hdr_lba_table >= VAR_14->hdr_lba_start &&
     VAR_14->hdr_lba_table <= VAR_14->hdr_lba_end)
  goto fail;
 VAR_16 = VAR_14->hdr_lba_table +
     FUNC_5(VAR_14->hdr_entries * VAR_14->hdr_entsz, VAR_15->sectorsize) - 1;
 if (VAR_16 >= VAR_17)
  goto fail;
 if (VAR_16 >= VAR_14->hdr_lba_start && VAR_16 <= VAR_14->hdr_lba_end)
  goto fail;

 VAR_10->state[VAR_12] = VAR_7;
 FUNC_8(&VAR_13->hdr_uuid, &VAR_14->hdr_uuid);
 VAR_14->hdr_crc_table = FUNC_6(VAR_13->hdr_crc_table);


 if (VAR_12 == VAR_0)
  VAR_10->lba[VAR_1] = VAR_14->hdr_lba_alt;

 FUNC_2(VAR_13);
 return (VAR_14);

 fail:
 if (VAR_14 != ((void*)0))
  FUNC_2(VAR_14);
 FUNC_2(VAR_13);
 return (((void*)0));
}
