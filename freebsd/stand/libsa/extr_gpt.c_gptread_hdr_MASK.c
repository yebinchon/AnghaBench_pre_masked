
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct gpt_hdr {scalar_t__ hdr_lba_self; int hdr_revision; int hdr_entsz; scalar_t__ hdr_entries; scalar_t__ hdr_crc_self; int hdr_size; int hdr_sig; } ;
struct gpt_ent {int dummy; } ;
struct dsk {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,struct gpt_hdr*,int) ;
 scalar_t__ FUNC_2 (struct gpt_hdr*,int ) ;
 scalar_t__ FUNC_3 (struct dsk*,int ,scalar_t__,int) ;
 int FUNC_4 (char*,char*,char const*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5, struct dsk *VAR_6, struct gpt_hdr *VAR_7,
    uint64_t VAR_8)
{
 uint32_t VAR_9;

 if (FUNC_3(VAR_6, VAR_4, VAR_8, 1)) {
  FUNC_4("%s: unable to read %s GPT header\n", VAR_0, VAR_5);
  return (-1);
 }
 FUNC_1(VAR_4, VAR_7, sizeof(*VAR_7));
 if (FUNC_0(VAR_7->hdr_sig, VAR_2, sizeof(VAR_7->hdr_sig)) != 0 ||
     VAR_7->hdr_lba_self != VAR_8 || VAR_7->hdr_revision < 0x00010000 ||
     VAR_7->hdr_entsz < sizeof(struct gpt_ent) ||
     VAR_7->hdr_entries > VAR_3 || VAR_1 % VAR_7->hdr_entsz != 0) {
  FUNC_4("%s: invalid %s GPT header\n", VAR_0, VAR_5);
  return (-1);
 }
 VAR_9 = VAR_7->hdr_crc_self;
 VAR_7->hdr_crc_self = 0;
 if (FUNC_2(VAR_7, VAR_7->hdr_size) != VAR_9) {
  FUNC_4("%s: %s GPT header checksum mismatch\n", VAR_0,
      VAR_5);
  return (-1);
 }
 VAR_7->hdr_crc_self = VAR_9;
 return (0);
}
