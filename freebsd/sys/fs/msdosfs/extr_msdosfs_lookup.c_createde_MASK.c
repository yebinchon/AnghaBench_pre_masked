
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_long ;
typedef int u_char ;
struct winentry {int dummy; } ;
struct msdosfsmount {scalar_t__ pm_crbomask; scalar_t__ pm_rootdirblk; int pm_devvp; } ;
struct direntry {int deName; } ;
struct denode {scalar_t__ de_fndoffset; scalar_t__ de_FileSize; scalar_t__ de_fndcnt; int de_Attributes; scalar_t__ de_StartCluster; struct msdosfsmount* de_pmp; } ;
struct componentname {int cn_namelen; scalar_t__ cn_nameptr; } ;
struct buf {int dummy; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct denode*) ;
 int VAR_1 ;
 int FUNC_1 (struct direntry*,struct denode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct msdosfsmount*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct buf*) ;
 struct direntry* FUNC_5 (struct msdosfsmount*,struct buf*,scalar_t__) ;
 int FUNC_6 (int ,int ,int,int ,struct buf**) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct buf*) ;
 scalar_t__ FUNC_9 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_10 (struct msdosfsmount*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct msdosfsmount*,scalar_t__) ;
 int FUNC_12 (struct msdosfsmount*,scalar_t__,scalar_t__,struct denode**) ;
 int FUNC_13 (struct denode*,scalar_t__,int ,int ) ;
 int FUNC_14 (struct denode*,scalar_t__,int ,int ,int ) ;
 int FUNC_15 (struct denode*,int ,int *,scalar_t__*,int*) ;
 int FUNC_16 (char*,struct denode*,struct denode*,struct denode**,struct componentname*) ;
 int FUNC_17 (int const*,int,struct winentry*,int ,int ,struct msdosfsmount*) ;
 int FUNC_18 (int ) ;

int
FUNC_19(struct denode *VAR_5, struct denode *VAR_6, struct denode **VAR_7,
    struct componentname *VAR_8)
{
 int VAR_9;
 u_long VAR_10, VAR_11;
 struct direntry *VAR_12;
 struct msdosfsmount *VAR_13 = VAR_6->de_pmp;
 struct buf *VAR_14;
 daddr_t VAR_15;
 int VAR_16;
 if (VAR_6->de_fndoffset >= VAR_6->de_FileSize) {
  VAR_11 = VAR_6->de_fndoffset + sizeof(struct direntry)
      - VAR_6->de_FileSize;
  VAR_10 = FUNC_9(VAR_13, VAR_11);
  VAR_9 = FUNC_14(VAR_6, VAR_10, 0, 0, VAR_1);
  if (VAR_9) {
   (void)FUNC_13(VAR_6, VAR_6->de_FileSize, 0, VAR_4);
   return VAR_9;
  }




  VAR_6->de_FileSize += FUNC_11(VAR_13, VAR_10);
 }






 VAR_9 = FUNC_15(VAR_6, FUNC_10(VAR_13, VAR_6->de_fndoffset),
         &VAR_15, &VAR_10, &VAR_16);
 if (VAR_9)
  return VAR_9;
 VAR_11 = VAR_6->de_fndoffset;
 if (VAR_10 != VAR_2)
  VAR_11 &= VAR_13->pm_crbomask;
 if ((VAR_9 = FUNC_6(VAR_13->pm_devvp, VAR_15, VAR_16, VAR_4, &VAR_14)) != 0) {
  FUNC_7(VAR_14);
  return VAR_9;
 }
 VAR_12 = FUNC_5(VAR_13, VAR_14, VAR_6->de_fndoffset);

 FUNC_1(VAR_12, VAR_5);




 if (VAR_6->de_fndcnt > 0) {
  uint8_t VAR_17 = FUNC_18(VAR_12->deName);
  const u_char *VAR_18 = (const u_char *)VAR_8->cn_nameptr;
  int VAR_19 = VAR_8->cn_namelen;
  int VAR_20 = 1;

  while (--VAR_6->de_fndcnt >= 0) {
   if (!(VAR_6->de_fndoffset & VAR_13->pm_crbomask)) {
    if (FUNC_2(FUNC_0(VAR_6)))
     FUNC_4(VAR_14);
    else if ((VAR_9 = FUNC_8(VAR_14)) != 0)
     return VAR_9;

    VAR_6->de_fndoffset -= sizeof(struct direntry);
    VAR_9 = FUNC_15(VAR_6,
            FUNC_10(VAR_13,
         VAR_6->de_fndoffset),
            &VAR_15, 0, &VAR_16);
    if (VAR_9)
     return VAR_9;

    VAR_9 = FUNC_6(VAR_13->pm_devvp, VAR_15, VAR_16,
           VAR_4, &VAR_14);
    if (VAR_9) {
     return VAR_9;
    }
    VAR_12 = FUNC_5(VAR_13, VAR_14, VAR_6->de_fndoffset);
   } else {
    VAR_12--;
    VAR_6->de_fndoffset -= sizeof(struct direntry);
   }
   if (!FUNC_17(VAR_18, VAR_19, (struct winentry *)VAR_12,
     VAR_20++, VAR_17, VAR_13))
    break;
  }
 }

 if (FUNC_2(FUNC_0(VAR_6)))
  FUNC_4(VAR_14);
 else if ((VAR_9 = FUNC_8(VAR_14)) != 0)
  return VAR_9;




 if (VAR_7) {
  if (VAR_5->de_Attributes & VAR_0) {
   VAR_10 = VAR_5->de_StartCluster;
   if (FUNC_3(VAR_13) && VAR_10 == VAR_13->pm_rootdirblk)
    VAR_10 = VAR_2;
   if (VAR_10 == VAR_2)
    VAR_11 = VAR_3;
   else
    VAR_11 = 0;
  }
  return FUNC_12(VAR_13, VAR_10, VAR_11, VAR_7);
 }

 return 0;
}
