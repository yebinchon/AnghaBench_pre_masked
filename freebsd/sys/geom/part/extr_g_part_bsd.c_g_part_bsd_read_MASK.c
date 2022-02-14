
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef void* u_char ;
struct partition {int p_size; int p_offset; void* p_cpg; void* p_frag; void* p_fstype; void* p_fsize; } ;
struct g_provider {int mediasize; int sectorsize; char* name; } ;
struct g_part_table {int gpt_sectors; int gpt_heads; int gpt_last; int gpt_isleaf; int gpt_entries; scalar_t__ gpt_first; int gpt_fixgeom; } ;
struct g_part_entry {int gpe_internal; } ;
struct g_part_bsd_table {void** bbarea; int offset; } ;
struct g_part_bsd_entry {struct partition part; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef int off_t ;
struct TYPE_2__ {int gps_minent; int gps_maxent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void**) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int,int,int*,int*) ;
 struct g_part_entry* FUNC_3 (struct g_part_table*,int,int,int) ;
 void** FUNC_4 (struct g_consumer*,int ,int ,int*) ;
 void* FUNC_5 (void**) ;
 void* FUNC_6 (void**) ;
 int FUNC_7 (void**,int) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(struct g_part_table *VAR_5, struct g_consumer *VAR_6)
{
 struct g_provider *VAR_7;
 struct g_part_bsd_table *VAR_8;
 struct g_part_entry *VAR_9;
 struct g_part_bsd_entry *VAR_10;
 struct partition VAR_11;
 u_char *VAR_12, *VAR_13;
 off_t VAR_14, VAR_15;
 u_int VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_7 = VAR_6->provider;
 VAR_8 = (struct g_part_bsd_table *)VAR_5;
 VAR_15 = FUNC_0(VAR_7->mediasize / VAR_7->sectorsize, VAR_3);

 VAR_8->bbarea = FUNC_4(VAR_6, 0, VAR_0, &VAR_18);
 if (VAR_8->bbarea == ((void*)0))
  return (VAR_18);

 VAR_12 = VAR_8->bbarea + VAR_7->sectorsize;

 if (FUNC_6(VAR_12 + 40) != VAR_7->sectorsize)
  goto invalid_label;
 VAR_16 = FUNC_6(VAR_12 + 44);
 if (VAR_16 < 1 || VAR_16 > 255)
  goto invalid_label;
 if (VAR_16 != VAR_5->gpt_sectors && !VAR_5->gpt_fixgeom) {
  FUNC_2(VAR_15, VAR_16, &VAR_14, &VAR_17);
  if (VAR_14 != 0) {
   VAR_5->gpt_sectors = VAR_16;
   VAR_5->gpt_heads = VAR_17;
  }
 }
 VAR_17 = FUNC_6(VAR_12 + 48);
 if (VAR_17 < 1 || VAR_17 > 255)
  goto invalid_label;
 if (VAR_17 != VAR_5->gpt_heads && !VAR_5->gpt_fixgeom)
  VAR_5->gpt_heads = VAR_17;

 VAR_14 = FUNC_6(VAR_12 + 60);
 if (VAR_14 < 1)
  goto invalid_label;

 if (VAR_14 > VAR_15) {
  VAR_14 = VAR_15;
  FUNC_7(VAR_12 + 60, VAR_15);
 }

 VAR_5->gpt_first = 0;
 VAR_5->gpt_last = VAR_15 - 1;
 VAR_5->gpt_isleaf = 1;

 VAR_5->gpt_entries = FUNC_5(VAR_12 + 138);
 if (VAR_5->gpt_entries < VAR_4.gps_minent ||
     VAR_5->gpt_entries > VAR_4.gps_maxent)
  goto invalid_label;

 VAR_8->offset = FUNC_6(VAR_12 + 148 + VAR_2 * 16 + 4);
 for (VAR_19 = VAR_5->gpt_entries - 1; VAR_19 >= 0; VAR_19--) {
  VAR_13 = VAR_12 + 148 + VAR_19 * 16;
  VAR_11.p_size = FUNC_6(VAR_13 + 0);
  VAR_11.p_offset = FUNC_6(VAR_13 + 4);
  VAR_11.p_fsize = FUNC_6(VAR_13 + 8);
  VAR_11.p_fstype = VAR_13[12];
  VAR_11.p_frag = VAR_13[13];
  VAR_11.p_cpg = FUNC_5(VAR_13 + 14);
  if (VAR_11.p_size == 0)
   continue;
  if (VAR_11.p_offset < VAR_8->offset)
   continue;
  if (VAR_11.p_offset - VAR_8->offset > VAR_5->gpt_last)
   goto invalid_label;
  VAR_9 = FUNC_3(VAR_5, VAR_19 + 1,
      VAR_11.p_offset - VAR_8->offset,
      VAR_11.p_offset - VAR_8->offset + VAR_11.p_size - 1);
  VAR_10 = (struct g_part_bsd_entry *)VAR_9;
  VAR_10->part = VAR_11;
  if (VAR_19 == VAR_2)
   VAR_9->gpe_internal = 1;
 }

 return (0);

 invalid_label:
 FUNC_8("GEOM: %s: invalid disklabel.\n", VAR_7->name);
 FUNC_1(VAR_8->bbarea);
 VAR_8->bbarea = ((void*)0);
 return (VAR_1);
}
