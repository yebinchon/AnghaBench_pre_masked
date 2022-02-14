
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct g_provider {int sectorsize; } ;
struct g_part_table {int gpt_entries; int gpt_entry; } ;
struct g_part_entry {int gpe_index; int gpe_deleted; } ;
struct g_part_bsd_table {int * bbarea; } ;
struct TYPE_2__ {int p_cpg; int p_frag; int p_fstype; int p_fsize; int p_offset; int p_size; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 struct g_part_entry* FUNC_0 (int *) ;
 struct g_part_entry* FUNC_1 (struct g_part_entry*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct g_consumer*,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct g_part_table *VAR_2, struct g_consumer *VAR_3)
{
 struct g_provider *VAR_4;
 struct g_part_entry *VAR_5;
 struct g_part_bsd_entry *VAR_6;
 struct g_part_bsd_table *VAR_7;
 uint16_t VAR_8;
 u_char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 VAR_4 = VAR_3->provider;
 VAR_7 = (struct g_part_bsd_table *)VAR_2;
 VAR_5 = FUNC_0(&VAR_2->gpt_entry);
 VAR_9 = VAR_7->bbarea + VAR_4->sectorsize;
 for (VAR_13 = 1; VAR_13 <= VAR_2->gpt_entries; VAR_13++) {
  VAR_10 = VAR_9 + 148 + (VAR_13 - 1) * 16;
  VAR_6 = (VAR_5 != ((void*)0) && VAR_13 == VAR_5->gpe_index)
      ? (struct g_part_bsd_entry *)VAR_5 : ((void*)0);
  if (VAR_6 != ((void*)0) && !VAR_5->gpe_deleted) {
   FUNC_6(VAR_10 + 0, VAR_6->part.p_size);
   FUNC_6(VAR_10 + 4, VAR_6->part.p_offset);
   FUNC_6(VAR_10 + 8, VAR_6->part.p_fsize);
   VAR_10[12] = VAR_6->part.p_fstype;
   VAR_10[13] = VAR_6->part.p_frag;
   FUNC_5(VAR_10 + 14, VAR_6->part.p_cpg);
  } else
   FUNC_2(VAR_10, 16);

  if (VAR_6 != ((void*)0))
   VAR_5 = FUNC_1(VAR_5, VAR_1);
 }


 FUNC_5(VAR_9 + 136, 0);
 VAR_11 = VAR_9 + 148 + VAR_2->gpt_entries * 16;
 VAR_8 = 0;
 for (VAR_10 = VAR_9; VAR_10 < VAR_11; VAR_10 += 2)
  VAR_8 ^= FUNC_4(VAR_10);
 FUNC_5(VAR_9 + 136, VAR_8);

 VAR_12 = FUNC_3(VAR_3, 0, VAR_7->bbarea, VAR_0);
 return (VAR_12);
}
