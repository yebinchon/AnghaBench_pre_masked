
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint16_t ;
struct vnstat {int fs_uflags; int vn_type; void* vn_dev; int vn_mode; void* vn_size; void* vn_fileid; void* vn_fsid; int vn_devname; void* vn_mntdir; struct kinfo_vmentry* fs_typedep; } ;
struct statfs {char* f_mntonname; } ;
struct TYPE_3__ {void* kf_file_size; void* kf_file_rdev; int kf_file_mode; void* kf_file_fsid; void* kf_file_fileid; } ;
struct TYPE_4__ {TYPE_1__ kf_file; } ;
struct kinfo_vmentry {char* kve_path; int kve_status; char* kf_path; int kf_status; int kf_vnode_type; TYPE_2__ kf_un; int kve_vn_type; void* kve_vn_size; void* kve_vn_rdev; int kve_vn_mode; void* kve_vn_fsid; void* kve_vn_fileid; } ;
struct kinfo_file {char* kve_path; int kve_status; char* kf_path; int kf_status; int kf_vnode_type; TYPE_2__ kf_un; int kve_vn_type; void* kve_vn_size; void* kve_vn_rdev; int kve_vn_mode; void* kve_vn_fsid; void* kve_vn_fileid; } ;
struct filestat {int fs_uflags; int vn_type; void* vn_dev; int vn_mode; void* vn_size; void* vn_fileid; void* vn_fsid; int vn_devname; void* vn_mntdir; struct kinfo_vmentry* fs_typedep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vnstat*) ;
 int FUNC_1 (struct vnstat*,int) ;
 char* FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*,struct statfs*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct filestat *VAR_9, struct vnstat *VAR_10,
    char *VAR_11)
{
 struct statfs VAR_12;
 struct kinfo_file *VAR_13;
 struct kinfo_vmentry *VAR_14;
 char *VAR_15, *VAR_16;
 uint64_t VAR_17;
 uint64_t VAR_18;
 uint64_t VAR_19;
 uint64_t VAR_20;
 uint16_t VAR_21;
 int VAR_22;
 int VAR_23;

 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 FUNC_1(VAR_10, sizeof(*VAR_10));
 if (VAR_9->fs_typedep == ((void*)0))
  return (1);
 if (VAR_9->fs_uflags & VAR_1) {
  VAR_14 = VAR_9->fs_typedep;
  VAR_17 = VAR_14->kve_vn_fileid;
  VAR_19 = VAR_14->kve_vn_fsid;
  VAR_21 = VAR_14->kve_vn_mode;
  VAR_16 = VAR_14->kve_path;
  VAR_20 = VAR_14->kve_vn_rdev;
  VAR_18 = VAR_14->kve_vn_size;
  VAR_22 = FUNC_3(VAR_14->kve_vn_type);
  VAR_23 = VAR_14->kve_status;
 } else {
  VAR_13 = VAR_9->fs_typedep;
  VAR_17 = VAR_13->kf_un.kf_file.kf_file_fileid;
  VAR_19 = VAR_13->kf_un.kf_file.kf_file_fsid;
  VAR_21 = VAR_13->kf_un.kf_file.kf_file_mode;
  VAR_16 = VAR_13->kf_path;
  VAR_20 = VAR_13->kf_un.kf_file.kf_file_rdev;
  VAR_18 = VAR_13->kf_un.kf_file.kf_file_size;
  VAR_22 = FUNC_3(VAR_13->kf_vnode_type);
  VAR_23 = VAR_13->kf_status;
 }
 VAR_10->vn_type = VAR_22;
 if (VAR_22 == VAR_5 || VAR_22 == VAR_2)
  return (0);
 if ((VAR_23 & VAR_0) == 0) {
  if (VAR_11 != ((void*)0)) {
   FUNC_4(VAR_11, VAR_8,
       "? (no info available)");
  }
  return (1);
 }
 if (VAR_16 && *VAR_16) {
  FUNC_5(VAR_16, &VAR_12);
  VAR_10->vn_mntdir = FUNC_6(VAR_12.f_mntonname);
 } else
  VAR_10->vn_mntdir = FUNC_6("-");
 VAR_10->vn_dev = VAR_20;
 if (VAR_22 == VAR_3) {
  VAR_15 = FUNC_2(VAR_20, VAR_6);
  if (VAR_15 != ((void*)0))
   FUNC_7(VAR_10->vn_devname, VAR_15,
       sizeof(VAR_10->vn_devname));
 } else if (VAR_22 == VAR_4) {
  VAR_15 = FUNC_2(VAR_10->vn_dev, VAR_7);
  if (VAR_15 != ((void*)0))
   FUNC_7(VAR_10->vn_devname, VAR_15,
       sizeof(VAR_10->vn_devname));
 }
 VAR_10->vn_fsid = VAR_19;
 VAR_10->vn_fileid = VAR_17;
 VAR_10->vn_size = VAR_18;
 VAR_10->vn_mode = VAR_21;
 return (0);
}
