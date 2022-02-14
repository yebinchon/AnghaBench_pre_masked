
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct smbmount {int sm_caseopt; int sm_uid; int sm_gid; int sm_file_mode; int sm_dir_mode; struct smb_dev* sm_dev; int sm_flags; int * sm_root; struct smb_share* sm_share; } ;
struct smb_vc {int vc_srvname; int vc_username; int vc_txmax; } ;
struct smb_share {int ss_name; } ;
struct smb_dev {int dummy; } ;
struct smb_cred {int dummy; } ;
struct TYPE_2__ {char* f_mntfromname; int f_iosize; } ;
struct mount {int mnt_flag; TYPE_1__ mnt_stat; int mnt_optnew; struct smbmount* mnt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,struct mount*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct smb_vc* FUNC_4 (struct smb_share*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct vnode*,int ) ;
 int FUNC_6 (char*,int ) ;
 struct thread* VAR_16 ;
 int FUNC_7 (struct smbmount*,int ) ;
 struct smbmount* FUNC_8 (int,int ,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (struct smb_dev*) ;
 int FUNC_11 (int,int ,struct smb_cred*,struct smb_share**,struct smb_dev**) ;
 int FUNC_12 (struct smb_cred*,struct thread*,int ) ;
 int FUNC_13 (struct smb_share*,struct smb_cred*) ;
 int FUNC_14 (struct smb_share*) ;
 int FUNC_15 (struct smb_cred*) ;
 struct smb_cred* FUNC_16 () ;
 int VAR_17 ;
 int FUNC_17 (struct mount*,int ,struct vnode**) ;
 char* FUNC_18 (int ,int ) ;
 int FUNC_19 (char*,int ,int) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,char*,int *,int ) ;
 int FUNC_22 (struct mount*) ;
 int FUNC_23 (struct mount*,char*,...) ;
 int FUNC_24 (int ,char*,char*,int*) ;
 int FUNC_25 (struct vnode*) ;

__attribute__((used)) static int
FUNC_26(struct mount *VAR_18)
{
 struct smbmount *VAR_19 = ((void*)0);
 struct smb_vc *VAR_20;
 struct smb_share *VAR_21 = ((void*)0);
 struct vnode *VAR_22;
 struct thread *VAR_23;
 struct smb_dev *VAR_24;
 struct smb_cred *VAR_25;
 int VAR_26, VAR_27;
 char *VAR_28, *VAR_29;

 VAR_24 = ((void*)0);
 VAR_23 = VAR_16;
 if (VAR_18->mnt_flag & (VAR_5 | VAR_4))
  return VAR_1;

 if (FUNC_20(VAR_18->mnt_optnew, VAR_17)) {
  FUNC_23(VAR_18, "%s", "Invalid option");
  return (VAR_0);
 }

 VAR_25 = FUNC_16();
 FUNC_12(VAR_25, VAR_23, VAR_23->td_ucred);


 if (1 != FUNC_24(VAR_18->mnt_optnew, "fd", "%d", &VAR_27)) {
  FUNC_23(VAR_18, "No fd option");
  FUNC_15(VAR_25);
  return (VAR_0);
 }
 VAR_26 = FUNC_11(VAR_27, VAR_10, VAR_25, &VAR_21, &VAR_24);
 VAR_19 = FUNC_8(sizeof(*VAR_19), VAR_6, VAR_7 | VAR_8);
 if (VAR_26) {
  FUNC_9("invalid device handle %d (%d)\n", VAR_27, VAR_26);
  FUNC_23(VAR_18, "invalid device handle %d %d\n", VAR_27, VAR_26);
  FUNC_15(VAR_25);
  FUNC_7(VAR_19, VAR_6);
  return VAR_26;
 }
 VAR_20 = FUNC_4(VAR_21);
 FUNC_14(VAR_21);
 VAR_18->mnt_stat.f_iosize = FUNC_4(VAR_21)->vc_txmax;
 VAR_18->mnt_data = VAR_19;
 VAR_19->sm_share = VAR_21;
 VAR_19->sm_root = ((void*)0);
 VAR_19->sm_dev = VAR_24;
 if (1 != FUNC_24(VAR_18->mnt_optnew,
     "caseopt", "%d", &VAR_19->sm_caseopt)) {
  FUNC_23(VAR_18, "Invalid caseopt");
  VAR_26 = VAR_0;
  goto bad;
 }
 if (1 != FUNC_24(VAR_18->mnt_optnew, "uid", "%d", &VAR_27)) {
  FUNC_23(VAR_18, "Invalid uid");
  VAR_26 = VAR_0;
  goto bad;
 }
 VAR_19->sm_uid = VAR_27;

 if (1 != FUNC_24(VAR_18->mnt_optnew, "gid", "%d", &VAR_27)) {
  FUNC_23(VAR_18, "Invalid gid");
  VAR_26 = VAR_0;
  goto bad;
 }
 VAR_19->sm_gid = VAR_27;

 if (1 != FUNC_24(VAR_18->mnt_optnew, "file_mode", "%d", &VAR_27)) {
  FUNC_23(VAR_18, "Invalid file_mode");
  VAR_26 = VAR_0;
  goto bad;
 }
 VAR_19->sm_file_mode = (VAR_27 & (VAR_15|VAR_13|VAR_14)) | VAR_12;

 if (1 != FUNC_24(VAR_18->mnt_optnew, "dir_mode", "%d", &VAR_27)) {
  FUNC_23(VAR_18, "Invalid dir_mode");
  VAR_26 = VAR_0;
  goto bad;
 }
 VAR_19->sm_dir_mode = (VAR_27 & (VAR_15|VAR_13|VAR_14)) | VAR_11;

 FUNC_21(VAR_18->mnt_optnew,
     "nolong", &VAR_19->sm_flags, VAR_9);

 VAR_28 = VAR_18->mnt_stat.f_mntfromname;
 VAR_29 = VAR_28 + sizeof(VAR_18->mnt_stat.f_mntfromname);
 FUNC_6(VAR_28, VAR_3);
 *VAR_28++ = '/';
 *VAR_28++ = '/';
 VAR_28 = FUNC_18(FUNC_19(VAR_28, VAR_20->vc_username, VAR_29 - VAR_28 - 2), 0);
 if (VAR_28 < VAR_29-1) {
  *(VAR_28++) = '@';
  VAR_28 = FUNC_18(FUNC_19(VAR_28, VAR_20->vc_srvname, VAR_29 - VAR_28 - 2), 0);
  if (VAR_28 < VAR_29 - 1) {
   *(VAR_28++) = '/';
   FUNC_19(VAR_28, VAR_21->ss_name, VAR_29 - VAR_28 - 2);
  }
 }
 FUNC_22(VAR_18);
 VAR_26 = FUNC_17(VAR_18, VAR_2, &VAR_22);
 if (VAR_26) {
  FUNC_23(VAR_18, "smbfs_root error: %d", VAR_26);
  goto bad;
 }
 FUNC_5(VAR_22, 0);
 FUNC_1("root.v_usecount = %d\n", FUNC_25(VAR_22));




 FUNC_15(VAR_25);
 return VAR_26;
bad:
 if (VAR_21)
  FUNC_13(VAR_21, VAR_25);
 FUNC_15(VAR_25);
 FUNC_2();
 if (VAR_26 && VAR_19->sm_dev == VAR_24) {
  VAR_19->sm_dev = ((void*)0);
  FUNC_10(VAR_24);
 }
 FUNC_3();
 FUNC_7(VAR_19, VAR_6);
 return VAR_26;
}
