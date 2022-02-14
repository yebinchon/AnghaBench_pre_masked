
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_acl_version; scalar_t__ z_acl_count; int * z_ace_data; int z_acl_size; void* z_acl_extern_obj; } ;
struct TYPE_4__ {TYPE_1__ zp_acl; void** zp_pad; void* zp_zap; void* zp_gid; void* zp_uid; void* zp_flags; void* zp_rdev; void* zp_xattr; void* zp_links; void* zp_parent; void* zp_size; void* zp_mode; void* zp_gen; void** zp_ctime; void** zp_mtime; void** zp_atime; void** zp_crtime; } ;
typedef TYPE_2__ znode_phys_t ;
typedef int ace_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(void *VAR_3, size_t VAR_4)
{
 znode_phys_t *VAR_5 = VAR_3;

 FUNC_0(VAR_4 >= sizeof (znode_phys_t));

 VAR_5->zp_crtime[0] = FUNC_3(VAR_5->zp_crtime[0]);
 VAR_5->zp_crtime[1] = FUNC_3(VAR_5->zp_crtime[1]);
 VAR_5->zp_atime[0] = FUNC_3(VAR_5->zp_atime[0]);
 VAR_5->zp_atime[1] = FUNC_3(VAR_5->zp_atime[1]);
 VAR_5->zp_mtime[0] = FUNC_3(VAR_5->zp_mtime[0]);
 VAR_5->zp_mtime[1] = FUNC_3(VAR_5->zp_mtime[1]);
 VAR_5->zp_ctime[0] = FUNC_3(VAR_5->zp_ctime[0]);
 VAR_5->zp_ctime[1] = FUNC_3(VAR_5->zp_ctime[1]);
 VAR_5->zp_gen = FUNC_3(VAR_5->zp_gen);
 VAR_5->zp_mode = FUNC_3(VAR_5->zp_mode);
 VAR_5->zp_size = FUNC_3(VAR_5->zp_size);
 VAR_5->zp_parent = FUNC_3(VAR_5->zp_parent);
 VAR_5->zp_links = FUNC_3(VAR_5->zp_links);
 VAR_5->zp_xattr = FUNC_3(VAR_5->zp_xattr);
 VAR_5->zp_rdev = FUNC_3(VAR_5->zp_rdev);
 VAR_5->zp_flags = FUNC_3(VAR_5->zp_flags);
 VAR_5->zp_uid = FUNC_3(VAR_5->zp_uid);
 VAR_5->zp_gid = FUNC_3(VAR_5->zp_gid);
 VAR_5->zp_zap = FUNC_3(VAR_5->zp_zap);
 VAR_5->zp_pad[0] = FUNC_3(VAR_5->zp_pad[0]);
 VAR_5->zp_pad[1] = FUNC_3(VAR_5->zp_pad[1]);
 VAR_5->zp_pad[2] = FUNC_3(VAR_5->zp_pad[2]);

 VAR_5->zp_acl.z_acl_extern_obj = FUNC_3(VAR_5->zp_acl.z_acl_extern_obj);
 VAR_5->zp_acl.z_acl_size = FUNC_2(VAR_5->zp_acl.z_acl_size);
 VAR_5->zp_acl.z_acl_version = FUNC_1(VAR_5->zp_acl.z_acl_version);
 VAR_5->zp_acl.z_acl_count = FUNC_1(VAR_5->zp_acl.z_acl_count);
 if (VAR_5->zp_acl.z_acl_version == VAR_2) {
  FUNC_4((void *)&VAR_5->zp_acl.z_ace_data[0],
      VAR_1);
 } else {
  FUNC_5((ace_t *)&VAR_5->zp_acl.z_ace_data[0],
      VAR_0);
 }
}
