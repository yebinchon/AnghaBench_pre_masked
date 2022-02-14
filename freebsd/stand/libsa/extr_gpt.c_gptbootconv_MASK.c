
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpt_hdr {int hdr_entsz; scalar_t__ hdr_lba_table; int hdr_entries; int ent_attr; int hdr_size; scalar_t__ hdr_lba_self; void* hdr_crc_self; void* hdr_crc_table; } ;
struct gpt_ent {int hdr_entsz; scalar_t__ hdr_lba_table; int hdr_entries; int ent_attr; int hdr_size; scalar_t__ hdr_lba_self; void* hdr_crc_self; void* hdr_crc_table; } ;
struct dsk {int dummy; } ;
typedef scalar_t__ daddr_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gpt_hdr*,int ,int) ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (struct gpt_hdr*,int) ;
 scalar_t__ FUNC_3 (struct dsk*,int ,scalar_t__,int) ;
 int FUNC_4 (char*,char*,char const*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_6, struct dsk *VAR_7, struct gpt_hdr *VAR_8,
    struct gpt_ent *VAR_9)
{
 struct gpt_ent *VAR_10;
 daddr_t VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_12 = 0;
 VAR_14 = VAR_1 / VAR_8->hdr_entsz;
 for (VAR_15 = 0, VAR_11 = VAR_8->hdr_lba_table;
      VAR_11 < VAR_8->hdr_lba_table + VAR_8->hdr_entries / VAR_14;
      VAR_11++, VAR_15 += VAR_14) {
  VAR_13 = 0;
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
   VAR_10 = &VAR_9[VAR_15 + VAR_16];
   if ((VAR_10->ent_attr & (VAR_3 |
       VAR_4 |
       VAR_2)) !=
       VAR_4) {
    continue;
   }
   VAR_10->ent_attr &= ~VAR_4;
   VAR_10->ent_attr |= VAR_2;
   VAR_12 = 1;
   VAR_13 = 1;
  }
  if (!VAR_13)
   continue;
  FUNC_0(&VAR_9[VAR_15], VAR_5, VAR_1);
  if (FUNC_3(VAR_7, VAR_5, VAR_11, 1)) {
   FUNC_4("%s: unable to update %s GPT partition table\n",
       VAR_0, VAR_6);
  }
 }
 if (!VAR_12)
  return;
 VAR_8->hdr_crc_table = FUNC_2(VAR_9, VAR_8->hdr_entries * VAR_8->hdr_entsz);
 VAR_8->hdr_crc_self = 0;
 VAR_8->hdr_crc_self = FUNC_2(VAR_8, VAR_8->hdr_size);
 FUNC_1(VAR_5, VAR_1);
 FUNC_0(VAR_8, VAR_5, VAR_8->hdr_size);
 if (FUNC_3(VAR_7, VAR_5, VAR_8->hdr_lba_self, 1))
  FUNC_4("%s: unable to update %s GPT header\n", VAR_0, VAR_6);
}
