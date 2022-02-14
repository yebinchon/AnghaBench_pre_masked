
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
typedef void* u_char ;
struct g_provider {int mediasize; int sectorsize; } ;
struct g_part_table {scalar_t__ gpt_sectors; int gpt_entries; scalar_t__ gpt_first; scalar_t__ gpt_last; void* gpt_heads; int gpt_fixgeom; } ;
struct g_part_mbr_table {int mbr; } ;
struct dos_partition {scalar_t__ dp_typ; int dp_esect; scalar_t__ dp_start; scalar_t__ dp_size; void* dp_ecyl; void* dp_ehd; void* dp_scyl; void* dp_ssect; void* dp_shd; void* dp_flag; } ;
struct g_part_mbr_entry {struct dos_partition ent; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void**,int ,int) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (scalar_t__,void*,scalar_t__*,void**) ;
 scalar_t__ FUNC_4 (struct g_part_table*,int,scalar_t__,scalar_t__) ;
 void** FUNC_5 (struct g_consumer*,long,int,int*) ;
 void* FUNC_6 (void**) ;

__attribute__((used)) static int
FUNC_7(struct g_part_table *VAR_5, struct g_consumer *VAR_6)
{
 struct dos_partition VAR_7;
 struct g_provider *VAR_8;
 struct g_part_mbr_table *VAR_9;
 struct g_part_mbr_entry *VAR_10;
 u_char *VAR_11, *VAR_12;
 off_t VAR_13, VAR_14, VAR_15;
 u_int VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_8 = VAR_6->provider;
 VAR_9 = (struct g_part_mbr_table *)VAR_5;
 VAR_15 = VAR_5->gpt_sectors;
 VAR_14 = FUNC_0(VAR_8->mediasize / VAR_8->sectorsize, VAR_4);

 VAR_11 = FUNC_5(VAR_6, 0L, VAR_8->sectorsize, &VAR_18);
 if (VAR_11 == ((void*)0))
  return (VAR_18);

 FUNC_1(VAR_11, VAR_9->mbr, sizeof(VAR_9->mbr));
 for (VAR_19 = VAR_3 - 1; VAR_19 >= 0; VAR_19--) {
  VAR_12 = VAR_11 + VAR_0 + VAR_19 * VAR_1;
  VAR_7.dp_flag = VAR_12[0];
  VAR_7.dp_shd = VAR_12[1];
  VAR_7.dp_ssect = VAR_12[2];
  VAR_7.dp_scyl = VAR_12[3];
  VAR_7.dp_typ = VAR_12[4];
  VAR_7.dp_ehd = VAR_12[5];
  VAR_7.dp_esect = VAR_12[6];
  VAR_7.dp_ecyl = VAR_12[7];
  VAR_7.dp_start = FUNC_6(VAR_12 + 8);
  VAR_7.dp_size = FUNC_6(VAR_12 + 12);
  if (VAR_7.dp_typ == 0 || VAR_7.dp_typ == VAR_2)
   continue;
  if (VAR_7.dp_start == 0 || VAR_7.dp_size == 0)
   continue;
  VAR_16 = VAR_7.dp_esect & 0x3f;
  if (VAR_16 > VAR_5->gpt_sectors &&
      !VAR_5->gpt_fixgeom) {
   FUNC_3(VAR_14, VAR_16, &VAR_13, &VAR_17);
   if (VAR_13 != 0) {
    VAR_5->gpt_sectors = VAR_16;
    VAR_5->gpt_heads = VAR_17;
   }
  }
  if (VAR_7.dp_start < VAR_15)
   VAR_15 = VAR_7.dp_start;
  VAR_10 = (struct g_part_mbr_entry *)FUNC_4(VAR_5,
      VAR_19 + 1, VAR_7.dp_start, VAR_7.dp_start + VAR_7.dp_size - 1);
  VAR_10->ent = VAR_7;
 }

 VAR_5->gpt_entries = VAR_3;
 VAR_5->gpt_first = VAR_5->gpt_sectors;
 VAR_5->gpt_last = VAR_14 - 1;

 if (VAR_15 < VAR_5->gpt_first)
  VAR_5->gpt_first = 1;

 FUNC_2(VAR_11);
 return (0);
}
