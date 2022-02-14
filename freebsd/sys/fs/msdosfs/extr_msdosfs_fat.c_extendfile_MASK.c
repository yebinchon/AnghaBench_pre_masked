
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_bpcluster; int pm_devvp; } ;
struct denode {scalar_t__ de_StartCluster; int de_Attributes; TYPE_1__* de_fc; struct msdosfsmount* de_pmp; } ;
struct buf {int b_lblkno; int b_blkno; } ;
typedef int daddr_t ;
struct TYPE_2__ {scalar_t__ fc_frcn; scalar_t__ fc_fsrcn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct denode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct buf*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct msdosfsmount*,scalar_t__,scalar_t__,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct msdosfsmount*,scalar_t__,int *) ;
 int FUNC_6 (struct msdosfsmount*,int ) ;
 int FUNC_7 (int ,struct msdosfsmount*,scalar_t__,int ,scalar_t__) ;
 int FUNC_8 (struct denode*,size_t,scalar_t__,scalar_t__) ;
 struct buf* FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct denode*,int,int*,scalar_t__*,int ) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ,int ) ;

int
FUNC_15(struct denode *VAR_11, u_long VAR_12, struct buf **VAR_13, u_long *VAR_14,
    int VAR_15)
{
 int VAR_16;
 u_long VAR_17;
 u_long VAR_18, VAR_19;
 struct msdosfsmount *VAR_20 = VAR_11->de_pmp;
 struct buf *VAR_21;
 daddr_t VAR_22;




 if (VAR_11->de_StartCluster == VAR_10
     && (VAR_11->de_Attributes & VAR_0)) {



  return (VAR_4);
 }





 if (VAR_11->de_fc[VAR_7].fc_frcn == VAR_6 &&
     VAR_11->de_StartCluster != 0) {
  VAR_16 = FUNC_11(VAR_11, 0xffff, 0, &VAR_18, 0);

  if (VAR_16 != VAR_3)
   return (VAR_16);
 }

 VAR_11->de_fc[VAR_8].fc_frcn =
     VAR_11->de_fc[VAR_7].fc_frcn;
 VAR_11->de_fc[VAR_8].fc_fsrcn =
     VAR_11->de_fc[VAR_7].fc_fsrcn;
 while (VAR_12 > 0) {
  if (VAR_11->de_StartCluster == 0)
   VAR_18 = 0;
  else
   VAR_18 = VAR_11->de_fc[VAR_7].fc_fsrcn + 1;
  VAR_16 = FUNC_4(VAR_20, VAR_18, VAR_12, VAR_1, &VAR_18, &VAR_19);
  if (VAR_16)
   return (VAR_16);

  VAR_12 -= VAR_19;





  if (VAR_14) {
   *VAR_14 = VAR_18;
   VAR_14 = ((void*)0);
  }

  if (VAR_11->de_StartCluster == 0) {
   VAR_11->de_StartCluster = VAR_18;
   VAR_17 = 0;
  } else {
   VAR_16 = FUNC_7(VAR_5, VAR_20,
      VAR_11->de_fc[VAR_7].fc_fsrcn,
      0, VAR_18);
   if (VAR_16) {
    FUNC_5(VAR_20, VAR_18, ((void*)0));
    return (VAR_16);
   }
   VAR_17 = VAR_11->de_fc[VAR_7].fc_frcn + 1;
  }





  FUNC_8(VAR_11, VAR_7, VAR_17 + VAR_19 - 1, VAR_18 + VAR_19 - 1);

  if (VAR_15 & VAR_2) {
   while (VAR_19-- > 0) {



    if (VAR_11->de_Attributes & VAR_0)
     VAR_21 = FUNC_9(VAR_20->pm_devvp,
         FUNC_6(VAR_20, VAR_18++),
         VAR_20->pm_bpcluster, 0, 0, 0);
    else {
     VAR_21 = FUNC_9(FUNC_0(VAR_11),
         VAR_17++,
         VAR_20->pm_bpcluster, 0, 0, 0);



     if (FUNC_11(VAR_11,
         VAR_21->b_lblkno,
         &VAR_22, 0, 0))
      VAR_21->b_blkno = -1;
     if (VAR_21->b_blkno == -1)
      FUNC_10("extendfile: pcbmap");
     else
      VAR_21->b_blkno = VAR_22;
    }
    FUNC_3(VAR_21);
    if (VAR_13) {
     *VAR_13 = VAR_21;
     VAR_13 = ((void*)0);
    } else {
     FUNC_1(VAR_21);
    }
    if (FUNC_13() ||
        FUNC_2())
     FUNC_14(FUNC_0(VAR_11), VAR_9);
   }
  }
 }

 return (0);
}
