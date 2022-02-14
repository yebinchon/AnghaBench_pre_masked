
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct g_part_table {int gpt_entries; int gpt_entry; } ;
struct g_part_mbr_table {int * mbr; } ;
struct TYPE_3__ {int dp_size; int dp_start; int dp_ecyl; int dp_esect; int dp_ehd; int dp_typ; int dp_scyl; int dp_ssect; int dp_shd; int dp_flag; } ;
struct g_part_mbr_entry {TYPE_1__ ent; } ;
struct g_part_entry {int gpe_index; int gpe_deleted; } ;
struct g_consumer {TYPE_2__* provider; } ;
struct TYPE_4__ {int sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_part_entry* FUNC_0 (int *) ;
 struct g_part_entry* FUNC_1 (struct g_part_entry*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct g_consumer*,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct g_part_table *VAR_3, struct g_consumer *VAR_4)
{
 struct g_part_entry *VAR_5;
 struct g_part_mbr_entry *VAR_6;
 struct g_part_mbr_table *VAR_7;
 u_char *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = (struct g_part_mbr_table *)VAR_3;
 VAR_5 = FUNC_0(&VAR_3->gpt_entry);
 for (VAR_10 = 1; VAR_10 <= VAR_3->gpt_entries; VAR_10++) {
  VAR_8 = VAR_7->mbr + VAR_0 + (VAR_10 - 1) * VAR_1;
  VAR_6 = (VAR_5 != ((void*)0) && VAR_10 == VAR_5->gpe_index)
      ? (struct g_part_mbr_entry *)VAR_5 : ((void*)0);
  if (VAR_6 != ((void*)0) && !VAR_5->gpe_deleted) {
   VAR_8[0] = VAR_6->ent.dp_flag;
   VAR_8[1] = VAR_6->ent.dp_shd;
   VAR_8[2] = VAR_6->ent.dp_ssect;
   VAR_8[3] = VAR_6->ent.dp_scyl;
   VAR_8[4] = VAR_6->ent.dp_typ;
   VAR_8[5] = VAR_6->ent.dp_ehd;
   VAR_8[6] = VAR_6->ent.dp_esect;
   VAR_8[7] = VAR_6->ent.dp_ecyl;
   FUNC_4(VAR_8 + 8, VAR_6->ent.dp_start);
   FUNC_4(VAR_8 + 12, VAR_6->ent.dp_size);
  } else
   FUNC_2(VAR_8, VAR_1);

  if (VAR_6 != ((void*)0))
   VAR_5 = FUNC_1(VAR_5, VAR_2);
 }

 VAR_9 = FUNC_3(VAR_4, 0, VAR_7->mbr, VAR_4->provider->sectorsize);
 return (VAR_9);
}
