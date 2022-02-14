
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct smbmount {scalar_t__ sm_didrele; struct smb_dev* sm_dev; int sm_share; } ;
struct smb_dev {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mount {int mnt_flag; int * mnt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct smbmount* FUNC_5 (struct mount*) ;
 struct thread* VAR_5 ;
 int FUNC_6 (struct smbmount*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct smb_dev*) ;
 int FUNC_9 (struct smb_cred*,struct thread*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct smb_cred*) ;
 int FUNC_12 (struct smb_cred*) ;
 struct smb_cred* FUNC_13 () ;
 int FUNC_14 (struct mount*,int,int,struct thread*) ;

__attribute__((used)) static int
FUNC_15(struct mount *VAR_6, int VAR_7)
{
 struct thread *VAR_8;
 struct smbmount *VAR_9 = FUNC_5(VAR_6);
 struct smb_cred *VAR_10;
 struct smb_dev *VAR_11;
 int VAR_12, VAR_13;

 FUNC_2("smbfs_unmount: flags=%04x\n", VAR_7);
 VAR_8 = VAR_5;
 VAR_13 = 0;
 if (VAR_7 & VAR_2)
  VAR_13 |= VAR_1;
 do {
  VAR_9->sm_didrele = 0;

  VAR_12 = FUNC_14(VAR_6, 1, VAR_13, VAR_8);
 } while (VAR_12 == VAR_0 && VAR_9->sm_didrele != 0);
 if (VAR_12)
  return VAR_12;
 VAR_10 = FUNC_13();
 FUNC_9(VAR_10, VAR_8, VAR_8->td_ucred);
 VAR_12 = FUNC_10(VAR_9->sm_share);
 if (VAR_12)
  goto out;
 FUNC_11(VAR_9->sm_share, VAR_10);
 FUNC_3();
 VAR_11 = VAR_9->sm_dev;
 if (!VAR_11)
  FUNC_7("No private data for mount point");
 FUNC_8(VAR_11);
 VAR_6->mnt_data = ((void*)0);
 FUNC_4();
 FUNC_6(VAR_9, VAR_4);
 FUNC_0(VAR_6);
 VAR_6->mnt_flag &= ~VAR_3;
 FUNC_1(VAR_6);
out:
 FUNC_12(VAR_10);
 return VAR_12;
}
