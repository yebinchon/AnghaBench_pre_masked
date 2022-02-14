
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vim_num_entries; int vim_entry_offset; int * vim_entries; TYPE_4__* vim_dn; int vim_spa; TYPE_1__* vim_phys; } ;
typedef TYPE_2__ vdev_indirect_mapping_t ;
typedef int vdev_indirect_mapping_entry_phys_t ;
typedef int uint64_t ;
typedef int off_t ;
struct TYPE_7__ {int dn_datablkszsec; } ;
struct TYPE_5__ {int vimp_num_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static vdev_indirect_mapping_entry_phys_t *
FUNC_3(vdev_indirect_mapping_t *VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3;
 off_t VAR_4 = 0;
 int VAR_5;

 if (VAR_1->vim_phys->vimp_num_entries == 0)
  return (((void*)0));

 if (VAR_1->vim_entries == ((void*)0)) {
  uint64_t VAR_6;

  VAR_6 = VAR_1->vim_dn->dn_datablkszsec << VAR_0;
  VAR_3 = VAR_1->vim_phys->vimp_num_entries *
      sizeof (*VAR_1->vim_entries);
  if (VAR_3 > VAR_6) {
   VAR_3 = VAR_6 / sizeof (*VAR_1->vim_entries);
   VAR_3 *= sizeof (*VAR_1->vim_entries);
  }
  VAR_1->vim_entries = FUNC_2(VAR_3);
  if (VAR_1->vim_entries == ((void*)0))
   return (((void*)0));
  VAR_1->vim_num_entries = VAR_3 / sizeof (*VAR_1->vim_entries);
  VAR_4 = VAR_2 * sizeof (*VAR_1->vim_entries);
 }


 if (VAR_4 == 0) {
  if (VAR_2 >= VAR_1->vim_entry_offset &&
      VAR_2 <= VAR_1->vim_entry_offset + VAR_1->vim_num_entries) {
   VAR_2 -= VAR_1->vim_entry_offset;
   return (&VAR_1->vim_entries[VAR_2]);
  }
  VAR_4 = VAR_2 * sizeof (*VAR_1->vim_entries);
 }

 VAR_1->vim_entry_offset = VAR_2;
 VAR_3 = VAR_1->vim_num_entries * sizeof (*VAR_1->vim_entries);
 VAR_5 = FUNC_0(VAR_1->vim_spa, VAR_1->vim_dn, VAR_4, VAR_1->vim_entries,
     VAR_3);
 if (VAR_5 != 0) {

  FUNC_1(VAR_1->vim_entries);
  VAR_1->vim_entries = ((void*)0);
  return (((void*)0));
 }
 VAR_2 -= VAR_1->vim_entry_offset;
 return (&VAR_1->vim_entries[VAR_2]);
}
