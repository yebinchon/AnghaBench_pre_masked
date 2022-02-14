
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct g_provider {int sectorsize; } ;
struct g_part_table {int gpt_entry; } ;
struct g_part_entry {int gpe_start; scalar_t__ gpe_end; scalar_t__ gpe_deleted; } ;
struct g_part_ebr_table {int ebr; } ;
struct TYPE_2__ {int dp_size; int dp_start; int dp_ecyl; int dp_esect; int dp_ehd; int dp_typ; int dp_scyl; int dp_ssect; int dp_shd; int dp_flag; } ;
struct g_part_ebr_entry {TYPE_1__ ent; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct g_part_entry* FUNC_0 (int *) ;
 struct g_part_entry* FUNC_1 (struct g_part_entry*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct g_part_table*,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int) ;
 int FUNC_7 (struct g_consumer*,int,int *,int) ;
 int VAR_6 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(struct g_part_table *VAR_7, struct g_consumer *VAR_8)
{

 struct g_part_ebr_table *VAR_9;

 struct g_provider *VAR_10;
 struct g_part_entry *VAR_11, *VAR_12;
 struct g_part_ebr_entry *VAR_13;
 u_char *VAR_14;
 u_char *VAR_15;
 int VAR_16;

 VAR_10 = VAR_8->provider;
 VAR_14 = FUNC_6(VAR_10->sectorsize, VAR_4 | VAR_5);

 VAR_9 = (struct g_part_ebr_table *)VAR_7;
 FUNC_2(VAR_9->ebr, VAR_14, VAR_2);

 FUNC_8(VAR_14 + VAR_1, VAR_0);

 VAR_11 = FUNC_0(&VAR_7->gpt_entry);
 while (VAR_11 != ((void*)0) && VAR_11->gpe_deleted)
  VAR_11 = FUNC_1(VAR_11, VAR_6);


 if (VAR_11 == ((void*)0)) {
  VAR_16 = FUNC_7(VAR_8, 0, VAR_14, VAR_10->sectorsize);
  goto out;
 }





 if (VAR_11->gpe_start != 0) {
  FUNC_4(VAR_7, (uint32_t)VAR_11->gpe_start,
      (uint32_t)VAR_11->gpe_end, VAR_14 + VAR_2);
  VAR_16 = FUNC_7(VAR_8, 0, VAR_14, VAR_10->sectorsize);
  if (VAR_16)
   goto out;
 }

 do {
  VAR_13 = (struct g_part_ebr_entry *)VAR_11;

  VAR_15 = VAR_14 + VAR_2;
  VAR_15[0] = VAR_13->ent.dp_flag;
  VAR_15[1] = VAR_13->ent.dp_shd;
  VAR_15[2] = VAR_13->ent.dp_ssect;
  VAR_15[3] = VAR_13->ent.dp_scyl;
  VAR_15[4] = VAR_13->ent.dp_typ;
  VAR_15[5] = VAR_13->ent.dp_ehd;
  VAR_15[6] = VAR_13->ent.dp_esect;
  VAR_15[7] = VAR_13->ent.dp_ecyl;
  FUNC_9(VAR_15 + 8, VAR_13->ent.dp_start);
  FUNC_9(VAR_15 + 12, VAR_13->ent.dp_size);

  VAR_12 = FUNC_1(VAR_11, VAR_6);
  while (VAR_12 != ((void*)0) && VAR_12->gpe_deleted)
   VAR_12 = FUNC_1(VAR_12, VAR_6);

  VAR_15 += VAR_3;
  if (VAR_12 != ((void*)0))
   FUNC_4(VAR_7, (uint32_t)VAR_12->gpe_start,
       (uint32_t)VAR_12->gpe_end, VAR_15);
  else
   FUNC_3(VAR_15, VAR_3);

  VAR_16 = FUNC_7(VAR_8, VAR_11->gpe_start * VAR_10->sectorsize,
      VAR_14, VAR_10->sectorsize);

  if (VAR_11->gpe_start == 0)
   FUNC_3(VAR_14, VAR_2);

  VAR_11 = VAR_12;
 } while (!VAR_16 && VAR_11 != ((void*)0));

 out:
 FUNC_5(VAR_14);
 return (VAR_16);
}
