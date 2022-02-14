
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct g_provider {int sectorsize; } ;
struct TYPE_6__ {int cksum; TYPE_2__* map; TYPE_1__* part; } ;
struct g_part_vtoc8_table {TYPE_3__ vtoc; } ;
struct g_part_table {int gpt_entries; int gpt_entry; } ;
struct g_part_entry {int gpe_index; scalar_t__ gpe_deleted; } ;
struct g_consumer {struct g_provider* provider; } ;
struct TYPE_5__ {int nblks; int cyl; } ;
struct TYPE_4__ {int flag; int tag; } ;


 struct g_part_entry* FUNC_0 (int *) ;
 struct g_part_entry* FUNC_1 (struct g_part_entry*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct g_consumer*,int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(struct g_part_table *VAR_1, struct g_consumer *VAR_2)
{
 struct g_provider *VAR_3;
 struct g_part_entry *VAR_4;
 struct g_part_vtoc8_table *VAR_5;
 uint16_t VAR_6;
 u_char *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_3 = VAR_2->provider;
 VAR_5 = (struct g_part_vtoc8_table *)VAR_1;
 VAR_4 = FUNC_0(&VAR_1->gpt_entry);
 for (VAR_9 = 0; VAR_9 < VAR_1->gpt_entries; VAR_9++) {
  VAR_10 = (VAR_4 != ((void*)0) && VAR_9 == VAR_4->gpe_index - 1)
      ? 1 : 0;
  if (VAR_10) {
   if (VAR_4->gpe_deleted) {
    FUNC_3(&VAR_5->vtoc.part[VAR_9].tag, 0);
    FUNC_3(&VAR_5->vtoc.part[VAR_9].flag, 0);
    FUNC_4(&VAR_5->vtoc.map[VAR_9].cyl, 0);
    FUNC_4(&VAR_5->vtoc.map[VAR_9].nblks, 0);
   }
   VAR_4 = FUNC_1(VAR_4, VAR_0);
  }
 }


 VAR_6 = 0;
 VAR_7 = (void *)&VAR_5->vtoc;
 for (VAR_11 = 0; VAR_11 < sizeof(VAR_5->vtoc) - 2; VAR_11 += 2)
  VAR_6 ^= FUNC_2(VAR_7 + VAR_11);
 FUNC_3(&VAR_5->vtoc.cksum, VAR_6);

 VAR_8 = FUNC_5(VAR_2, 0, VAR_7, VAR_3->sectorsize);
 return (VAR_8);
}
