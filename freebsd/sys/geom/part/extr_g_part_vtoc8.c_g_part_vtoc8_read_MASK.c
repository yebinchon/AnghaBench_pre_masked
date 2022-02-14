
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct g_provider {int sectorsize; int mediasize; char* name; } ;
struct TYPE_8__ {TYPE_3__* part; TYPE_1__* map; int nparts; int sanity; TYPE_3__* volume; int version; int ncyls; int nheads; int nsecs; } ;
struct g_part_vtoc8_table {int secpercyl; TYPE_4__ vtoc; } ;
struct g_part_table {int gpt_sectors; int gpt_heads; int gpt_last; int gpt_isleaf; int gpt_entries; scalar_t__ gpt_first; int gpt_fixgeom; } ;
struct g_part_entry {int gpe_internal; } ;
struct g_consumer {struct g_provider* provider; } ;
typedef int off_t ;
struct TYPE_7__ {int tag; } ;
struct TYPE_6__ {int gps_minent; int gps_maxent; } ;
struct TYPE_5__ {int nblks; int cyl; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (TYPE_3__**,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int,int*,int*) ;
 struct g_part_entry* FUNC_9 (struct g_part_table*,int,int,int) ;
 TYPE_2__ VAR_10 ;
 int * FUNC_10 (struct g_consumer*,int ,int,int*) ;
 int FUNC_11 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_12(struct g_part_table *VAR_11, struct g_consumer *VAR_12)
{
 struct g_provider *VAR_13;
 struct g_part_vtoc8_table *VAR_14;
 struct g_part_entry *VAR_15;
 u_char *VAR_16;
 off_t VAR_17, VAR_18;
 uint64_t VAR_19, VAR_20;
 u_int VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 uint16_t VAR_27;

 VAR_13 = VAR_12->provider;
 VAR_16 = FUNC_10(VAR_12, 0, VAR_13->sectorsize, &VAR_24);
 if (VAR_16 == ((void*)0))
  return (VAR_24);

 VAR_14 = (struct g_part_vtoc8_table *)VAR_11;
 FUNC_1(VAR_16, &VAR_14->vtoc, sizeof(VAR_14->vtoc));
 FUNC_7(VAR_16);

 VAR_18 = FUNC_0(VAR_13->mediasize / VAR_13->sectorsize, VAR_1);
 VAR_23 = FUNC_2(&VAR_14->vtoc.nsecs);
 if (VAR_23 < 1)
  goto invalid_label;
 if (VAR_23 != VAR_11->gpt_sectors && !VAR_11->gpt_fixgeom) {
  FUNC_8(VAR_18, VAR_23, &VAR_17, &VAR_22);
  if (VAR_17 != 0) {
   VAR_11->gpt_sectors = VAR_23;
   VAR_11->gpt_heads = VAR_22;
  }
 }

 VAR_22 = FUNC_2(&VAR_14->vtoc.nheads);
 if (VAR_22 < 1)
  goto invalid_label;
 if (VAR_22 != VAR_11->gpt_heads && !VAR_11->gpt_fixgeom)
  VAR_11->gpt_heads = VAR_22;






 if (VAR_9 && (VAR_23 != VAR_11->gpt_sectors ||
     VAR_22 != VAR_11->gpt_heads))
  FUNC_11("GEOM: %s: geometry does not match VTOC8 label "
      "(label: %uh,%us GEOM: %uh,%us).\n", VAR_13->name, VAR_22,
      VAR_23, VAR_11->gpt_heads, VAR_11->gpt_sectors);

 VAR_14->secpercyl = VAR_22 * VAR_23;
 VAR_21 = FUNC_2(&VAR_14->vtoc.ncyls);
 VAR_17 = VAR_21 * VAR_14->secpercyl;
 if (VAR_17 < 1 || VAR_17 > VAR_18)
  goto invalid_label;

 VAR_11->gpt_first = 0;
 VAR_11->gpt_last = VAR_17 - 1;
 VAR_11->gpt_isleaf = 1;

 VAR_26 = (FUNC_4(&VAR_14->vtoc.sanity) == VAR_4) ? 1 : 0;
 if (!VAR_26) {
  FUNC_11("GEOM: %s: adding VTOC8 information.\n", VAR_13->name);
  FUNC_5(&VAR_14->vtoc.version, VAR_7);
  FUNC_6(&VAR_14->vtoc.volume, VAR_8);
  FUNC_3(&VAR_14->vtoc.nparts, VAR_2);
  FUNC_6(&VAR_14->vtoc.part, sizeof(VAR_14->vtoc.part));
  FUNC_5(&VAR_14->vtoc.sanity, VAR_4);
 }

 VAR_11->gpt_entries = FUNC_2(&VAR_14->vtoc.nparts);
 if (VAR_11->gpt_entries < VAR_10.gps_minent ||
     VAR_11->gpt_entries > VAR_10.gps_maxent)
  goto invalid_label;

 for (VAR_25 = VAR_11->gpt_entries - 1; VAR_25 >= 0; VAR_25--) {
  VAR_19 = FUNC_4(&VAR_14->vtoc.map[VAR_25].cyl) *
      VAR_14->secpercyl;
  VAR_20 = FUNC_4(&VAR_14->vtoc.map[VAR_25].nblks);
  if (VAR_20 == 0)
   continue;
  if (VAR_26)
   VAR_27 = FUNC_2(&VAR_14->vtoc.part[VAR_25].tag);
  else
   VAR_27 = (VAR_25 == VAR_3)
       ? VAR_5
       : VAR_6;

  if (VAR_25 == VAR_3 && VAR_27 != VAR_5)
   continue;
  if (VAR_25 != VAR_3 && VAR_27 == VAR_5)
   continue;
  VAR_15 = FUNC_9(VAR_11, VAR_25 + 1, VAR_19,
      VAR_19 + VAR_20 - 1);
  if (VAR_27 == VAR_5)
   VAR_15->gpe_internal = 1;

  if (!VAR_26)
   FUNC_3(&VAR_14->vtoc.part[VAR_25].tag, VAR_27);
 }

 return (0);

 invalid_label:
 FUNC_11("GEOM: %s: invalid VTOC8 label.\n", VAR_13->name);
 return (VAR_0);
}
