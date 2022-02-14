
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_bpcluster; scalar_t__ pm_fatmask; int pm_devvp; scalar_t__ pm_rootdirblk; int pm_rootdirsize; } ;
struct denode {scalar_t__ de_StartCluster; int de_Attributes; scalar_t__ de_FileSize; struct msdosfsmount* de_pmp; } ;
struct buf {scalar_t__ b_data; } ;
typedef scalar_t__ daddr_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct denode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct msdosfsmount*) ;
 scalar_t__ FUNC_3 (struct msdosfsmount*) ;
 scalar_t__ FUNC_4 (struct msdosfsmount*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct msdosfsmount*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ,struct buf**) ;
 int FUNC_8 (struct buf*) ;
 scalar_t__ FUNC_9 (struct msdosfsmount*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct msdosfsmount*,int ) ;
 scalar_t__ FUNC_11 (struct msdosfsmount*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_13 (struct msdosfsmount*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_14 (struct denode*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_15 (struct denode*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (int,scalar_t__) ;

int
FUNC_19(struct denode *VAR_8, u_long VAR_9, daddr_t *VAR_10, u_long *VAR_11, int *VAR_12)
{
 int VAR_13;
 u_long VAR_14;
 u_long VAR_15;
 u_long VAR_16 = 0;
 u_long VAR_17;
 u_long VAR_18;
 u_long VAR_19;
 struct buf *VAR_20 = ((void*)0);
 u_long VAR_21 = -1;
 struct msdosfsmount *VAR_22 = VAR_8->de_pmp;
 u_long VAR_23;

 FUNC_5(VAR_10 != ((void*)0) || VAR_11 != ((void*)0) || VAR_12 != ((void*)0),
     ("pcbmap: extra call"));
 FUNC_0(FUNC_1(VAR_8), "pcbmap");

 VAR_15 = VAR_8->de_StartCluster;






 if (VAR_15 == VAR_6) {
  if (VAR_8->de_Attributes & VAR_0) {
   if (FUNC_12(VAR_22, VAR_9) >= VAR_8->de_FileSize) {
    if (VAR_11)
     *VAR_11 = FUNC_10(VAR_22, VAR_22->pm_rootdirsize);
    return (VAR_2);
   }
   if (VAR_10)
    *VAR_10 = VAR_22->pm_rootdirblk + FUNC_11(VAR_22, VAR_9);
   if (VAR_11)
    *VAR_11 = VAR_6;
   if (VAR_12)
    *VAR_12 = FUNC_18(VAR_22->pm_bpcluster,
        VAR_8->de_FileSize - FUNC_12(VAR_22, VAR_9));
   return (0);
  } else {
   if (VAR_11)
    *VAR_11 = 0;
   return (VAR_2);
  }
 }




 if (VAR_12)
  *VAR_12 = VAR_22->pm_bpcluster;






 VAR_14 = 0;
 FUNC_14(VAR_8, VAR_9, &VAR_14, &VAR_15);




 for (; VAR_14 < VAR_9; VAR_14++) {



  if ((VAR_15 | ~VAR_22->pm_fatmask) >= VAR_1)
   goto hiteof;
  VAR_17 = FUNC_4(VAR_22, VAR_15);
  FUNC_13(VAR_22, VAR_17, &VAR_18, &VAR_23, &VAR_19);
  if (VAR_18 != VAR_21) {
   if (VAR_20)
    FUNC_8(VAR_20);
   VAR_13 = FUNC_7(VAR_22->pm_devvp, VAR_18, VAR_23, VAR_7, &VAR_20);
   if (VAR_13) {
    return (VAR_13);
   }
   VAR_21 = VAR_18;
  }
  VAR_16 = VAR_15;
  if (VAR_19 >= VAR_23) {
   if (VAR_20)
    FUNC_8(VAR_20);
   return (VAR_3);
  }
  if (FUNC_3(VAR_22))
   VAR_15 = FUNC_16(VAR_20->b_data + VAR_19);
  else
   VAR_15 = FUNC_17(VAR_20->b_data + VAR_19);
  if (FUNC_2(VAR_22) && (VAR_16 & 1))
   VAR_15 >>= 4;
  VAR_15 &= VAR_22->pm_fatmask;







  if ((VAR_15 | ~VAR_22->pm_fatmask) >= VAR_1)
   VAR_15 |= ~VAR_22->pm_fatmask;
 }

 if (!FUNC_6(VAR_22, VAR_15)) {
  if (VAR_20)
   FUNC_8(VAR_20);
  if (VAR_10)
   *VAR_10 = FUNC_9(VAR_22, VAR_15);
  if (VAR_11)
   *VAR_11 = VAR_15;
  FUNC_15(VAR_8, VAR_5, VAR_14, VAR_15);
  return (0);
 }

hiteof:;
 if (VAR_11)
  *VAR_11 = VAR_14;
 if (VAR_20)
  FUNC_8(VAR_20);

 FUNC_15(VAR_8, VAR_4, VAR_14 - 1, VAR_16);
 return (VAR_2);
}
