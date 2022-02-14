
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vop_mkdir_args {int * a_vpp; int a_dvp; struct componentname* a_cnp; } ;
struct timespec {int dummy; } ;
struct msdosfsmount {int pm_bpcluster; int pm_rootdirblk; int pm_devvp; } ;
struct direntry {int deHighClust; int deMTime; int deMDate; int deADate; int deCHundredth; int deCTime; int deCDate; int deStartCluster; } ;
struct denode {scalar_t__ de_StartCluster; scalar_t__ de_fndoffset; scalar_t__ de_FileSize; int de_flag; int de_CDate; int de_CTime; int de_ADate; int de_MDate; int de_MTime; scalar_t__ de_LowerCase; int de_Attributes; int de_Name; int de_CHun; struct msdosfsmount* de_pmp; } ;
struct componentname {int cn_flags; } ;
struct buf {struct denode* b_data; } ;
typedef int ndirent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct denode*,struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_1 (struct denode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct msdosfsmount*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct denode* FUNC_4 (int ) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct msdosfsmount*,int ,int,int ,int*,int *) ;
 int FUNC_8 (struct msdosfsmount*,int,int *) ;
 int FUNC_9 (struct msdosfsmount*,int) ;
 int FUNC_10 (struct denode*,struct denode*,struct denode**,struct componentname*) ;
 int VAR_8 ;
 struct buf* FUNC_11 (int ,int,int,int ,int ,int ) ;
 int FUNC_12 (struct denode*,int *,int) ;
 int FUNC_13 (struct denode*,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct denode*,struct componentname*,int ) ;
 int FUNC_17 (struct timespec*) ;

__attribute__((used)) static int
FUNC_18(struct vop_mkdir_args *VAR_9)
{
 struct componentname *VAR_10 = VAR_9->a_cnp;
 struct denode *VAR_11;
 struct denode *VAR_12 = FUNC_4(VAR_9->a_dvp);
 struct direntry *VAR_13;
 struct msdosfsmount *VAR_14 = VAR_12->de_pmp;
 struct buf *VAR_15;
 u_long VAR_16, VAR_17;
 int VAR_18;
 int VAR_19;
 struct denode VAR_20;
 struct timespec VAR_21;






 if (VAR_12->de_StartCluster == VAR_7
     && VAR_12->de_fndoffset >= VAR_12->de_FileSize) {
  VAR_19 = VAR_5;
  goto bad2;
 }




 VAR_19 = FUNC_7(VAR_14, 0, 1, VAR_1, &VAR_16, ((void*)0));
 if (VAR_19)
  goto bad2;

 FUNC_13(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.de_pmp = VAR_14;
 VAR_20.de_flag = VAR_2 | VAR_3 | VAR_4;
 FUNC_17(&VAR_21);
 FUNC_0(&VAR_20, &VAR_21, &VAR_21, &VAR_21);






 VAR_18 = FUNC_9(VAR_14, VAR_16);

 VAR_15 = FUNC_11(VAR_14->pm_devvp, VAR_18, VAR_14->pm_bpcluster, 0, 0, 0);
 FUNC_13(VAR_15->b_data, 0, VAR_14->pm_bpcluster);
 FUNC_12(VAR_15->b_data, &VAR_8, sizeof VAR_8);
 VAR_13 = (struct direntry *)VAR_15->b_data;
 FUNC_15(VAR_13[0].deStartCluster, VAR_16);
 FUNC_15(VAR_13[0].deCDate, VAR_20.de_CDate);
 FUNC_15(VAR_13[0].deCTime, VAR_20.de_CTime);
 VAR_13[0].deCHundredth = VAR_20.de_CHun;
 FUNC_15(VAR_13[0].deADate, VAR_20.de_ADate);
 FUNC_15(VAR_13[0].deMDate, VAR_20.de_MDate);
 FUNC_15(VAR_13[0].deMTime, VAR_20.de_MTime);
 VAR_17 = VAR_12->de_StartCluster;





 if (FUNC_3(VAR_14) && VAR_17 == VAR_14->pm_rootdirblk)
  VAR_17 = VAR_7;
 FUNC_15(VAR_13[1].deStartCluster, VAR_17);
 FUNC_15(VAR_13[1].deCDate, VAR_20.de_CDate);
 FUNC_15(VAR_13[1].deCTime, VAR_20.de_CTime);
 VAR_13[1].deCHundredth = VAR_20.de_CHun;
 FUNC_15(VAR_13[1].deADate, VAR_20.de_ADate);
 FUNC_15(VAR_13[1].deMDate, VAR_20.de_MDate);
 FUNC_15(VAR_13[1].deMTime, VAR_20.de_MTime);
 if (FUNC_3(VAR_14)) {
  FUNC_15(VAR_13[0].deHighClust, VAR_16 >> 16);
  FUNC_15(VAR_13[1].deHighClust, VAR_17 >> 16);
 }

 if (FUNC_2(VAR_9->a_dvp))
  FUNC_5(VAR_15);
 else if ((VAR_19 = FUNC_6(VAR_15)) != 0)
  goto bad;
 VAR_19 = FUNC_16(VAR_12, VAR_10, VAR_20.de_Name);
 if (VAR_19)
  goto bad;

 VAR_20.de_Attributes = VAR_0;
 VAR_20.de_LowerCase = 0;
 VAR_20.de_StartCluster = VAR_16;
 VAR_20.de_FileSize = 0;
 VAR_19 = FUNC_10(&VAR_20, VAR_12, &VAR_11, VAR_10);
 if (VAR_19)
  goto bad;
 *VAR_9->a_vpp = FUNC_1(VAR_11);
 return (0);

bad:
 FUNC_8(VAR_14, VAR_16, ((void*)0));
bad2:
 return (VAR_19);
}
