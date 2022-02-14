
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uuid_t ;
struct gpt_ent {int ent_attr; int ent_lba_start; int ent_type; } ;
struct dsk {int part; int start; } ;
struct TYPE_6__ {int hdr_entries; } ;
struct TYPE_5__ {int ent_attr; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int const*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 struct gpt_ent* VAR_6 ;
 int FUNC_1 (char*,struct dsk*,int *,TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;

int
FUNC_3(const uuid_t *VAR_13, struct dsk *VAR_14, int VAR_15)
{
 struct gpt_ent *VAR_16;
 int VAR_17;

 if (VAR_15 >= 0) {
  if (VAR_15 == 0 || VAR_15 > VAR_5->hdr_entries) {
   FUNC_2("%s: invalid partition index\n", VAR_0);
   return (-1);
  }
  VAR_16 = &VAR_6[VAR_15 - 1];
  if (FUNC_0(&VAR_16->ent_type, VAR_13, sizeof(uuid_t)) != 0) {
   FUNC_2("%s: specified partition is not UFS\n",
       VAR_0);
   return (-1);
  }
  VAR_4 = VAR_15 - 1;
  goto found;
 }

 VAR_17 = (VAR_4 == -1);
 VAR_4++;
 if (VAR_4 >= VAR_5->hdr_entries) {
  VAR_4 = VAR_5->hdr_entries;
  return (-1);
 }
 if (VAR_3) {




  for (; VAR_4 < VAR_5->hdr_entries; VAR_4++) {
   VAR_16 = &VAR_6[VAR_4];
   if (FUNC_0(&VAR_16->ent_type, VAR_13, sizeof(uuid_t)) != 0)
    continue;
   if (!(VAR_16->ent_attr & VAR_1))
    continue;
   if (!(VAR_16->ent_attr & VAR_2))
    continue;

   goto found;
  }
  VAR_3 = 0;
  VAR_4 = 0;
 }
 for (; VAR_4 < VAR_5->hdr_entries; VAR_4++) {
  VAR_16 = &VAR_6[VAR_4];
  if (FUNC_0(&VAR_16->ent_type, VAR_13, sizeof(uuid_t)) != 0)
   continue;
  if (!(VAR_16->ent_attr & VAR_1))
   continue;
  if (VAR_16->ent_attr & VAR_2)
   continue;

  goto found;
 }
 if (VAR_17) {




  for (VAR_4 = 0; VAR_4 < VAR_5->hdr_entries; VAR_4++) {
   VAR_16 = &VAR_6[VAR_4];
   if (FUNC_0(&VAR_16->ent_type, VAR_13, sizeof(uuid_t)) != 0)
    continue;

   goto found;
  }
 }
 return (-1);
found:
 VAR_14->part = VAR_4 + 1;
 VAR_16 = &VAR_6[VAR_4];
 VAR_14->start = VAR_16->ent_lba_start;
 if (VAR_16->ent_attr & VAR_2) {




  if (VAR_10 > 0) {
   VAR_12[VAR_4].ent_attr &= ~VAR_1;
   FUNC_1("primary", VAR_14, &VAR_9, VAR_12);
  }
  if (VAR_8 > 0) {
   VAR_11[VAR_4].ent_attr &= ~VAR_1;
   FUNC_1("backup", VAR_14, &VAR_7, VAR_11);
  }
 }
 return (0);
}
