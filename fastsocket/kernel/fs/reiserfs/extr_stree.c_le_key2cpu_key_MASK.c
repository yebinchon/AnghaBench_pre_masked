
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_key {int k_objectid; int k_dir_id; } ;
struct TYPE_2__ {int k_type; int k_offset; void* k_objectid; void* k_dir_id; } ;
struct cpu_key {int version; TYPE_1__ on_disk_key; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int,struct reiserfs_key const*) ;
 int FUNC_2 (int,struct reiserfs_key const*) ;
 int FUNC_3 (struct reiserfs_key const*) ;

inline void FUNC_4(struct cpu_key *VAR_0, const struct reiserfs_key *VAR_1)
{
 int VAR_2;
 VAR_0->on_disk_key.k_dir_id = FUNC_0(VAR_1->k_dir_id);
 VAR_0->on_disk_key.k_objectid = FUNC_0(VAR_1->k_objectid);


 VAR_2 = FUNC_3(VAR_1);
 VAR_0->version = VAR_2;
 VAR_0->on_disk_key.k_offset = FUNC_1(VAR_2, VAR_1);
 VAR_0->on_disk_key.k_type = FUNC_2(VAR_2, VAR_1);
}
