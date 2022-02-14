
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct g_provider {int mediasize; int sectorsize; char* name; } ;
struct g_part_table {int gpt_corrupt; int gpt_sectors; int gpt_entries; int gpt_last; scalar_t__ gpt_first; } ;
struct g_part_entry {int gpe_offset; } ;
struct g_part_ebr_table {int ebr; } ;
struct dos_partition {int dp_typ; int dp_start; int dp_size; } ;
struct g_part_ebr_entry {struct dos_partition ent; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,struct dos_partition*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct g_part_table*,int,int,int) ;
 int * FUNC_5 (struct g_consumer*,int,int,int*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct g_part_table *VAR_3, struct g_consumer *VAR_4)
{
 struct dos_partition VAR_5[2];
 struct g_provider *VAR_6;
 struct g_part_entry *VAR_7;
 struct g_part_ebr_table *VAR_8;
 struct g_part_ebr_entry *VAR_9;
 u_char *VAR_10;
 off_t VAR_11, VAR_12;
 u_int VAR_13;
 int VAR_14, VAR_15;

 VAR_6 = VAR_4->provider;
 VAR_8 = (struct g_part_ebr_table *)VAR_3;
 VAR_12 = FUNC_0(VAR_6->mediasize / VAR_6->sectorsize, VAR_2);

 VAR_13 = 0;
 while (1) {
  VAR_11 = (off_t)VAR_13 * VAR_6->sectorsize;
  VAR_10 = FUNC_5(VAR_4, VAR_11, VAR_6->sectorsize, &VAR_14);
  if (VAR_10 == ((void*)0))
   return (VAR_14);

  FUNC_2(VAR_10 + VAR_0 + 0 * VAR_1, VAR_5 + 0);
  FUNC_2(VAR_10 + VAR_0 + 1 * VAR_1, VAR_5 + 1);


  if (FUNC_6(VAR_10 + VAR_0 + 2 * VAR_1) +
      FUNC_6(VAR_10 + VAR_0 + 3 * VAR_1) != 0) {
   VAR_3->gpt_corrupt = 1;
   FUNC_7("GEOM: %s: invalid entries in the EBR ignored.\n",
       VAR_6->name);
  }


  if (VAR_13 == 0)
   FUNC_1(VAR_10, VAR_8->ebr, sizeof(VAR_8->ebr));

  FUNC_3(VAR_10);

  if (VAR_5[0].dp_typ == 0)
   break;

  if (VAR_5[0].dp_typ == 5 && VAR_5[1].dp_typ == 0) {
   VAR_13 = VAR_5[0].dp_start;
   continue;
  }

  VAR_15 = (VAR_13 / VAR_3->gpt_sectors) + 1;
  VAR_7 = (struct g_part_entry *)FUNC_4(VAR_3,
      VAR_15, VAR_13, VAR_13 + VAR_5[0].dp_start + VAR_5[0].dp_size - 1);
  VAR_7->gpe_offset = (off_t)(VAR_13 + VAR_5[0].dp_start) *
      VAR_6->sectorsize;
  VAR_9 = (struct g_part_ebr_entry *)VAR_7;
  VAR_9->ent = VAR_5[0];

  if (VAR_5[1].dp_typ == 0)
   break;

  VAR_13 = VAR_5[1].dp_start;
 }

 VAR_3->gpt_entries = VAR_12 / VAR_3->gpt_sectors;
 VAR_3->gpt_first = 0;
 VAR_3->gpt_last = VAR_12 - 1;
 return (0);
}
