
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpt_hdr {unsigned int hdr_lba_table; unsigned int hdr_entries; unsigned int hdr_entsz; scalar_t__ hdr_crc_table; } ;
struct gpt_ent {char* ent_name; void* ent_attr; void* ent_lba_end; void* ent_lba_start; int ent_uuid; int ent_type; } ;
struct g_provider {unsigned int sectorsize; } ;
struct g_part_gpt_table {unsigned int* lba; int * state; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef enum gpt_elt { ____Placeholder_gpt_elt } gpt_elt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int,int) ;
 char* FUNC_4 (struct g_consumer*,unsigned int,unsigned int,int*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*,int *) ;

__attribute__((used)) static struct gpt_ent *
FUNC_8(struct g_part_gpt_table *VAR_6, struct g_consumer *VAR_7,
    enum gpt_elt VAR_8, struct gpt_hdr *VAR_9)
{
 struct g_provider *VAR_10;
 struct gpt_ent *VAR_11, *VAR_12;
 char *VAR_13, *VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;

 if (VAR_9 == ((void*)0))
  return (((void*)0));

 VAR_10 = VAR_7->provider;
 VAR_6->lba[VAR_8] = VAR_9->hdr_lba_table;

 VAR_6->state[VAR_8] = VAR_1;
 VAR_17 = VAR_9->hdr_entries * VAR_9->hdr_entsz;
 VAR_16 = FUNC_5(VAR_17, VAR_10->sectorsize);
 VAR_13 = FUNC_3(VAR_16 * VAR_10->sectorsize, VAR_4 | VAR_5);
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15 += VAR_3 / VAR_10->sectorsize) {
  VAR_18 = (VAR_16 - VAR_15 > VAR_3 / VAR_10->sectorsize) ? VAR_3:
      (VAR_16 - VAR_15) * VAR_10->sectorsize;
  VAR_14 = FUNC_4(VAR_7, (VAR_6->lba[VAR_8] + VAR_15) * VAR_10->sectorsize,
      VAR_18, &VAR_19);
  if (VAR_14 == ((void*)0)) {
   FUNC_2(VAR_13);
   return (((void*)0));
  }
  FUNC_0(VAR_14, VAR_13 + VAR_15 * VAR_10->sectorsize, VAR_18);
  FUNC_2(VAR_14);
 }
 VAR_6->state[VAR_8] = VAR_0;
 if (FUNC_1(VAR_13, VAR_17) != VAR_9->hdr_crc_table) {
  FUNC_2(VAR_13);
  return (((void*)0));
 }

 VAR_6->state[VAR_8] = VAR_2;
 VAR_12 = FUNC_3(VAR_9->hdr_entries * sizeof(struct gpt_ent),
     VAR_4 | VAR_5);

 for (VAR_15 = 0, VAR_11 = VAR_12, VAR_14 = VAR_13;
      VAR_15 < VAR_9->hdr_entries;
      VAR_15++, VAR_11++, VAR_14 += VAR_9->hdr_entsz) {
  FUNC_7(VAR_14, &VAR_11->ent_type);
  FUNC_7(VAR_14 + 16, &VAR_11->ent_uuid);
  VAR_11->ent_lba_start = FUNC_6(VAR_14 + 32);
  VAR_11->ent_lba_end = FUNC_6(VAR_14 + 40);
  VAR_11->ent_attr = FUNC_6(VAR_14 + 48);

  FUNC_0(VAR_14 + 56, VAR_11->ent_name, sizeof(VAR_11->ent_name));
 }

 FUNC_2(VAR_13);
 return (VAR_12);
}
