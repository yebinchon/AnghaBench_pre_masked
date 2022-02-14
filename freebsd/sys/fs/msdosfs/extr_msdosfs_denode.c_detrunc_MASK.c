
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct ucred {int dummy; } ;
struct msdosfsmount {int pm_crbomask; scalar_t__ pm_bpcluster; TYPE_1__* pm_devvp; } ;
struct denode {int de_Attributes; char* de_Name; int de_FileSize; int de_StartCluster; int de_flag; int de_diroffset; int de_dirclust; struct msdosfsmount* de_pmp; } ;
struct buf {scalar_t__ b_data; } ;
typedef int daddr_t ;
struct TYPE_6__ {int v_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct denode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (struct msdosfsmount*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct msdosfsmount*,int) ;
 struct ucred* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__,struct ucred*,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct msdosfsmount*,int) ;
 scalar_t__ FUNC_8 (struct msdosfsmount*,int) ;
 int FUNC_9 (struct msdosfsmount*,int) ;
 int FUNC_10 (struct denode*,int,struct ucred*) ;
 int FUNC_11 (struct denode*,int) ;
 int FUNC_12 (int ,struct msdosfsmount*,int,int*,int ) ;
 int FUNC_13 (struct denode*,scalar_t__) ;
 int FUNC_14 (struct denode*,int ,int ,int) ;
 int FUNC_15 (struct msdosfsmount*,int) ;
 int FUNC_16 (scalar_t__,int ,scalar_t__) ;
 int FUNC_17 (struct denode*,scalar_t__,int ,int*,int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (TYPE_1__*,int,scalar_t__) ;

int
FUNC_21(struct denode *VAR_10, u_long VAR_11, int VAR_12, struct ucred *VAR_13)
{
 int VAR_14;
 int VAR_15;
 u_long VAR_16;
 u_long VAR_17;
 daddr_t VAR_18;
 int VAR_19;
 int VAR_20 = VAR_10->de_Attributes & VAR_0;
 struct buf *VAR_21;
 struct msdosfsmount *VAR_22 = VAR_10->de_pmp;
 if ((FUNC_0(VAR_10)->v_vflag & VAR_9) && !FUNC_2(VAR_22)) {




  return (VAR_4);
 }

 if (VAR_10->de_FileSize < VAR_11) {
  FUNC_19(FUNC_0(VAR_10), VAR_11);
  return FUNC_10(VAR_10, VAR_11, VAR_13);
 }
 if (VAR_11 == 0) {
  VAR_17 = VAR_10->de_StartCluster;
  VAR_10->de_StartCluster = 0;
  VAR_16 = ~0;
 } else {
  VAR_14 = FUNC_17(VAR_10, FUNC_8(VAR_22, VAR_11) - 1, 0,
          &VAR_16, 0);
  if (VAR_14) {



   return (VAR_14);
  }
 }

 FUNC_13(VAR_10, FUNC_8(VAR_22, VAR_11));






 if ((VAR_19 = VAR_11 & VAR_22->pm_crbomask) != 0) {
  if (VAR_20) {
   VAR_18 = FUNC_7(VAR_22, VAR_16);
   VAR_14 = FUNC_5(VAR_22->pm_devvp, VAR_18, VAR_22->pm_bpcluster,
       VAR_8, &VAR_21);
  } else {
   VAR_14 = FUNC_5(FUNC_0(VAR_10), FUNC_9(VAR_22, VAR_11),
       VAR_22->pm_bpcluster, VAR_13, &VAR_21);
  }
  if (VAR_14) {



   return (VAR_14);
  }
  FUNC_16(VAR_21->b_data + VAR_19, 0, VAR_22->pm_bpcluster - VAR_19);
  if ((VAR_12 & VAR_7) != 0)
   FUNC_6(VAR_21);
  else
   FUNC_4(VAR_21);
 }





 VAR_10->de_FileSize = VAR_11;
 if (!VAR_20)
  VAR_10->de_flag |= VAR_3 | VAR_2;
 VAR_15 = FUNC_20(FUNC_0(VAR_10), VAR_11, VAR_22->pm_bpcluster);




 VAR_14 = FUNC_11(VAR_10, !FUNC_1((FUNC_0(VAR_10))));
 if (VAR_14 != 0 && VAR_15 == 0)
  VAR_15 = VAR_14;
 if (VAR_16 != ~0) {
  VAR_14 = FUNC_12(VAR_5, VAR_22, VAR_16,
     &VAR_17, VAR_1);
  if (VAR_14) {



   return (VAR_14);
  }
  FUNC_14(VAR_10, VAR_6, FUNC_9(VAR_22, VAR_11 - 1),
       VAR_16);
 }





 if (VAR_17 != 0 && !FUNC_3(VAR_22, VAR_17))
  FUNC_15(VAR_22, VAR_17);

 return (VAR_15);
}
