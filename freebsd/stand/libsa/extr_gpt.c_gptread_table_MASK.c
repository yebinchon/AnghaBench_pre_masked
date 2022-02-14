
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int table ;
struct gpt_hdr {int hdr_entries; int hdr_entsz; scalar_t__ hdr_crc_table; int hdr_lba_table; } ;
struct gpt_ent {int dummy; } ;
struct dsk {int dummy; } ;
typedef int daddr_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpt_ent*,struct gpt_ent*,int) ;
 scalar_t__ FUNC_1 (struct gpt_ent*,int) ;
 scalar_t__ FUNC_2 (struct dsk*,scalar_t__,int ,int) ;
 int FUNC_3 (char*,char*,char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_3, struct dsk *VAR_4, struct gpt_hdr *VAR_5,
    struct gpt_ent *VAR_6)
{
 struct gpt_ent *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;
 daddr_t VAR_11;

 if (VAR_5->hdr_entries == 0)
  return (0);

 VAR_8 = VAR_1 / VAR_5->hdr_entsz;
 VAR_11 = VAR_5->hdr_lba_table;
 VAR_10 = 0;
 for (;;) {
  if (FUNC_2(VAR_4, VAR_2, VAR_11, 1)) {
   FUNC_3("%s: unable to read %s GPT partition table\n",
       VAR_0, VAR_3);
   return (-1);
  }
  VAR_7 = (struct gpt_ent *)VAR_2;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++, VAR_7++) {
   FUNC_0(VAR_7, &VAR_6[VAR_10], sizeof(VAR_6[VAR_10]));
   if (++VAR_10 >= VAR_5->hdr_entries)
    break;
  }
  if (VAR_10 >= VAR_5->hdr_entries)
   break;
  VAR_11++;
 }
 if (FUNC_1(VAR_6, VAR_10 * VAR_5->hdr_entsz) != VAR_5->hdr_crc_table) {
  FUNC_3("%s: %s GPT table checksum mismatch\n", VAR_0, VAR_3);
  return (-1);
 }
 return (0);
}
