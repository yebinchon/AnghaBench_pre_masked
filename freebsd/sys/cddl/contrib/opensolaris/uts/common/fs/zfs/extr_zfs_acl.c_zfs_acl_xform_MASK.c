
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_18__ {int z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_19__ {int z_access_mask; int z_fuid; void* z_type; void* z_flags; } ;
typedef TYPE_2__ zfs_oldace_t ;
typedef int zfs_object_ace_t ;
struct TYPE_20__ {scalar_t__ z_version; int z_acl_count; int z_acl_bytes; int z_acl; int z_ops; } ;
typedef TYPE_3__ zfs_acl_t ;
struct TYPE_21__ {int z_ace_count; int z_size; int z_acldata; } ;
typedef TYPE_4__ zfs_acl_node_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
typedef int cred_t ;
struct TYPE_17__ {int v_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_15__* FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int VAR_3 ;
 void* FUNC_6 (TYPE_3__*,void*,int *,int *,void**,void**) ;
 TYPE_4__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_3__*,TYPE_2__*,int ,int,int *,int *,int *) ;

void
FUNC_10(znode_t *VAR_4, zfs_acl_t *VAR_5, cred_t *VAR_6)
{
 zfs_oldace_t *VAR_7;
 int VAR_8;
 uint16_t VAR_9, VAR_10;
 uint32_t VAR_11;
 uint64_t VAR_12;
 void *VAR_13 = ((void*)0);
 zfs_acl_node_t *VAR_14;

 FUNC_0(VAR_5->z_version == VAR_2);







 VAR_7 = FUNC_3(sizeof (zfs_oldace_t) * VAR_5->z_acl_count,
     VAR_0);
 VAR_8 = 0;
 while ((VAR_13 = FUNC_6(VAR_5, VAR_13, &VAR_12,
     &VAR_11, &VAR_10, &VAR_9))) {
  VAR_7[VAR_8].z_flags = VAR_10;
  VAR_7[VAR_8].z_type = VAR_9;
  VAR_7[VAR_8].z_fuid = VAR_12;
  VAR_7[VAR_8++].z_access_mask = VAR_11;
 }

 VAR_14 = FUNC_7(VAR_5->z_acl_count *
     sizeof (zfs_object_ace_t));
 VAR_5->z_ops = VAR_3;
 FUNC_1(FUNC_9(VAR_4->z_zfsvfs, FUNC_2(VAR_4)->v_type, VAR_5,
     VAR_7, VAR_14->z_acldata, VAR_5->z_acl_count,
     &VAR_14->z_size, ((void*)0), VAR_6) == 0);
 VAR_14->z_ace_count = VAR_5->z_acl_count;
 VAR_5->z_version = VAR_1;
 FUNC_4(VAR_7, VAR_5->z_acl_count * sizeof (zfs_oldace_t));





 FUNC_8(VAR_5);

 FUNC_5(&VAR_5->z_acl, VAR_14);

 VAR_5->z_acl_bytes = VAR_14->z_size;
 VAR_5->z_acl_count = VAR_14->z_ace_count;

}
