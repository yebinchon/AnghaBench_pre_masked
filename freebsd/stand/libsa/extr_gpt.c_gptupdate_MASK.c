
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpt_hdr {int hdr_entsz; int hdr_entries; int hdr_size; int hdr_lba_self; void* hdr_crc_self; void* hdr_crc_table; scalar_t__ hdr_lba_table; } ;
struct gpt_ent {int hdr_entsz; int hdr_entries; int hdr_size; int hdr_lba_self; void* hdr_crc_self; void* hdr_crc_table; scalar_t__ hdr_lba_table; } ;
struct dsk {int dummy; } ;
typedef int daddr_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpt_hdr*,int ,int) ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (struct gpt_hdr*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct dsk*,int ,int,int) ;
 int FUNC_4 (char*,char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_4, struct dsk *VAR_5, struct gpt_hdr *VAR_6,
    struct gpt_ent *VAR_7)
{
 int VAR_8, VAR_9;
 daddr_t VAR_10;
 VAR_8 = VAR_1 / VAR_6->hdr_entsz;
 VAR_10 = VAR_2 / VAR_8;
 VAR_9 = VAR_10 * VAR_8;
 FUNC_0(&VAR_7[VAR_9], VAR_3, VAR_1);
 VAR_10 += VAR_6->hdr_lba_table;
 if (FUNC_3(VAR_5, VAR_3, VAR_10, 1)) {
  FUNC_4("%s: unable to update %s GPT partition table\n",
      VAR_0, VAR_4);
  return;
 }
 VAR_6->hdr_crc_table = FUNC_2(VAR_7, VAR_6->hdr_entries * VAR_6->hdr_entsz);
 VAR_6->hdr_crc_self = 0;
 VAR_6->hdr_crc_self = FUNC_2(VAR_6, VAR_6->hdr_size);
 FUNC_1(VAR_3, VAR_1);
 FUNC_0(VAR_6, VAR_3, VAR_6->hdr_size);
 if (FUNC_3(VAR_5, VAR_3, VAR_6->hdr_lba_self, 1)) {
  FUNC_4("%s: unable to update %s GPT header\n", VAR_0, VAR_4);
  return;
 }
}
