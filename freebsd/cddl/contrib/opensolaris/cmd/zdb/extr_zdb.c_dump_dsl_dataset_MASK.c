
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int used ;
typedef int unique ;
typedef int uncompressed ;
typedef int uint64_t ;
typedef char* u_longlong_t ;
typedef int time_t ;
typedef int objset_t ;
struct TYPE_2__ {scalar_t__ ds_props_obj; scalar_t__ ds_next_clones_obj; scalar_t__ ds_flags; scalar_t__ ds_guid; scalar_t__ ds_fsid_guid; scalar_t__ ds_deadlist_obj; scalar_t__ ds_creation_txg; scalar_t__ ds_userrefs_obj; scalar_t__ ds_num_children; scalar_t__ ds_snapnames_zapobj; scalar_t__ ds_next_snap_obj; scalar_t__ ds_prev_snap_txg; scalar_t__ ds_prev_snap_obj; scalar_t__ ds_dir_obj; int ds_bp; int ds_unique_bytes; int ds_uncompressed_bytes; int ds_compressed_bytes; int ds_referenced_bytes; int ds_creation_time; } ;
typedef TYPE_1__ dsl_dataset_phys_t ;
typedef int compressed ;
typedef int blkbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(objset_t *VAR_2, uint64_t VAR_3, void *VAR_4, size_t VAR_5)
{
 dsl_dataset_phys_t *VAR_6 = VAR_4;
 time_t VAR_7;
 char VAR_8[32], VAR_9[32], VAR_10[32], VAR_11[32];
 char VAR_12[VAR_0];


 FUNC_1(sizeof (VAR_8) >= VAR_1);
 FUNC_1(sizeof (VAR_9) >= VAR_1);
 FUNC_1(sizeof (VAR_10) >= VAR_1);
 FUNC_1(sizeof (VAR_11) >= VAR_1);

 if (VAR_6 == ((void*)0))
  return;

 FUNC_0(VAR_5 == sizeof (*VAR_6));
 VAR_7 = VAR_6->ds_creation_time;
 FUNC_5(VAR_6->ds_referenced_bytes, VAR_8, sizeof (VAR_8));
 FUNC_5(VAR_6->ds_compressed_bytes, VAR_9, sizeof (VAR_9));
 FUNC_5(VAR_6->ds_uncompressed_bytes, VAR_10,
     sizeof (VAR_10));
 FUNC_5(VAR_6->ds_unique_bytes, VAR_11, sizeof (VAR_11));
 FUNC_4(VAR_12, sizeof (VAR_12), &VAR_6->ds_bp);

 (void) FUNC_3("\t\tdir_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_dir_obj);
 (void) FUNC_3("\t\tprev_snap_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_prev_snap_obj);
 (void) FUNC_3("\t\tprev_snap_txg = %llu\n",
     (u_longlong_t)VAR_6->ds_prev_snap_txg);
 (void) FUNC_3("\t\tnext_snap_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_next_snap_obj);
 (void) FUNC_3("\t\tsnapnames_zapobj = %llu\n",
     (u_longlong_t)VAR_6->ds_snapnames_zapobj);
 (void) FUNC_3("\t\tnum_children = %llu\n",
     (u_longlong_t)VAR_6->ds_num_children);
 (void) FUNC_3("\t\tuserrefs_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_userrefs_obj);
 (void) FUNC_3("\t\tcreation_time = %s", FUNC_2(&VAR_7));
 (void) FUNC_3("\t\tcreation_txg = %llu\n",
     (u_longlong_t)VAR_6->ds_creation_txg);
 (void) FUNC_3("\t\tdeadlist_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_deadlist_obj);
 (void) FUNC_3("\t\tused_bytes = %s\n", VAR_8);
 (void) FUNC_3("\t\tcompressed_bytes = %s\n", VAR_9);
 (void) FUNC_3("\t\tuncompressed_bytes = %s\n", VAR_10);
 (void) FUNC_3("\t\tunique = %s\n", VAR_11);
 (void) FUNC_3("\t\tfsid_guid = %llu\n",
     (u_longlong_t)VAR_6->ds_fsid_guid);
 (void) FUNC_3("\t\tguid = %llu\n",
     (u_longlong_t)VAR_6->ds_guid);
 (void) FUNC_3("\t\tflags = %llx\n",
     (u_longlong_t)VAR_6->ds_flags);
 (void) FUNC_3("\t\tnext_clones_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_next_clones_obj);
 (void) FUNC_3("\t\tprops_obj = %llu\n",
     (u_longlong_t)VAR_6->ds_props_obj);
 (void) FUNC_3("\t\tbp = %s\n", VAR_12);
}
