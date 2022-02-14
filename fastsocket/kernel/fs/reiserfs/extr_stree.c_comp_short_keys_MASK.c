
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_key {int k_objectid; int k_dir_id; } ;
struct TYPE_2__ {scalar_t__ k_dir_id; scalar_t__ k_objectid; } ;
struct cpu_key {TYPE_1__ on_disk_key; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int ) ;

inline int FUNC_1(const struct reiserfs_key *VAR_0,
      const struct cpu_key *VAR_1)
{
 __u32 VAR_2;
 VAR_2 = FUNC_0(VAR_0->k_dir_id);
 if (VAR_2 < VAR_1->on_disk_key.k_dir_id)
  return -1;
 if (VAR_2 > VAR_1->on_disk_key.k_dir_id)
  return 1;
 VAR_2 = FUNC_0(VAR_0->k_objectid);
 if (VAR_2 < VAR_1->on_disk_key.k_objectid)
  return -1;
 if (VAR_2 > VAR_1->on_disk_key.k_objectid)
  return 1;
 return 0;
}
