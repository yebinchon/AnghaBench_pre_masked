
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef scalar_t__ u_int8_t ;
struct inostat {int dummy; } ;
struct inodesc {int id_func; } ;
struct cg {int cg_initediblk; } ;
struct TYPE_8__ {struct cg* b_cg; } ;
struct bufarea {TYPE_1__ b_un; } ;
typedef int ino_t ;
struct TYPE_10__ {int il_numalloced; struct inostat* il_stat; } ;
struct TYPE_9__ {int fs_ncg; scalar_t__ fs_csaddr; int fs_ipg; scalar_t__ fs_magic; int fs_fsize; int fs_cssize; } ;


 int VAR_0 ;
 struct inostat* FUNC_0 (unsigned int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__* FUNC_2 (struct cg*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct bufarea*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 struct bufarea* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int,struct bufarea*) ;
 scalar_t__ FUNC_9 (int,struct inodesc*,int) ;
 int VAR_6 ;
 int FUNC_10 (int ,char*,unsigned int) ;
 int FUNC_11 (struct inostat*) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ VAR_9 ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (struct inostat*,struct inostat*,int) ;
 int FUNC_16 (struct inodesc*,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (char*,int ,int,int,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_18 (char*,char*,int,int,int) ;
 int FUNC_19 (char*,int,int,...) ;
 void* FUNC_20 (int,int) ;
 TYPE_2__ VAR_16 ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (int) ;
 int FUNC_23 (char*,char*,int) ;
 scalar_t__ VAR_17 ;

void
FUNC_24(void)
{
 struct inostat *VAR_18;
 struct inodesc VAR_19;
 struct bufarea *VAR_20;
 struct cg *VAR_21;
 ino_t VAR_22, VAR_23, VAR_24;
 ufs2_daddr_t VAR_25, VAR_26;
 u_int8_t *VAR_27;
 int VAR_28, VAR_29;

 VAR_4 = VAR_6 = VAR_11 = 0;




 for (VAR_28 = 0; VAR_28 < VAR_16.fs_ncg; VAR_28++) {
  VAR_26 = FUNC_5(&VAR_16, VAR_28);
  if (VAR_28 == 0) {
   VAR_25 = FUNC_3(&VAR_16, VAR_28);
  } else
   VAR_25 = FUNC_7(&VAR_16, VAR_28);
  for (; VAR_25 < VAR_26; VAR_25++)
   FUNC_21(VAR_25);
 }
 VAR_25 = VAR_16.fs_csaddr;
 VAR_26 = VAR_25 + FUNC_14(VAR_16.fs_cssize, VAR_16.fs_fsize);
 for (; VAR_25 < VAR_26; VAR_25++)
  FUNC_21(VAR_25);




 FUNC_16(&VAR_19, 0, sizeof(struct inodesc));
 VAR_19.id_func = VAR_14;
 VAR_13 = VAR_12 = 0;
 for (VAR_28 = 0; VAR_28 < VAR_16.fs_ncg; VAR_28++) {
  VAR_22 = VAR_28 * VAR_16.fs_ipg;
  FUNC_22(VAR_22);
  VAR_20 = FUNC_6(VAR_28);
  VAR_21 = VAR_20->b_un.b_cg;
  VAR_29 = 0;
  if (!FUNC_8(VAR_28, VAR_20))
   VAR_29 = 1;
  if (!VAR_29 && VAR_16.fs_magic == VAR_2) {
   VAR_23 = VAR_21->cg_initediblk;
   if (VAR_23 > VAR_16.fs_ipg) {
    FUNC_17(
"Too many initialized inodes (%ju > %d) in cylinder group %d\nReset to %d\n",
        (uintmax_t)VAR_23,
        VAR_16.fs_ipg, VAR_28, VAR_16.fs_ipg);
    VAR_23 = VAR_16.fs_ipg;
   }
  } else {
   VAR_23 = VAR_16.fs_ipg;
  }
  if (VAR_8) {
   FUNC_18("%s: phase 1: cyl group %d of %d (%d%%)\n",
       VAR_5, VAR_28, VAR_16.fs_ncg,
       VAR_28 * 100 / VAR_16.fs_ncg);
   VAR_8 = 0;
  }
  if (VAR_7) {
   FUNC_23("%s p1 %d%%", VAR_5,
        VAR_28 * 100 / VAR_16.fs_ncg);
   VAR_7 = 0;
  }







  if ((VAR_15 || VAR_9) && VAR_17 && !VAR_29) {
   VAR_27 = &FUNC_2(VAR_21)[(VAR_23 - 1) / VAR_0];
   for ( ; VAR_23 != 0; VAR_27--) {
    if (*VAR_27 == 0) {
     if (VAR_23 > VAR_0)
      VAR_23 -= VAR_0;
     else
      VAR_23 = 0;
     continue;
    }
    for (VAR_25 = 1 << (VAR_0 - 1); VAR_25 > 0; VAR_25 >>= 1) {
     if (*VAR_27 & VAR_25)
      break;
     VAR_23--;
    }
    break;
   }
  }



  VAR_10[VAR_28].il_numalloced = VAR_23;
  if (VAR_23 == 0) {
   VAR_10[VAR_28].il_stat = ((void*)0);
   continue;
  }
  VAR_18 = FUNC_0((unsigned)VAR_23, sizeof(struct inostat));
  if (VAR_18 == ((void*)0))
   FUNC_10(VAR_1, "cannot alloc %u bytes for inoinfo",
       (unsigned)(sizeof(struct inostat) * VAR_23));
  VAR_10[VAR_28].il_stat = VAR_18;



  for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++, VAR_22++) {
   if (VAR_22 < VAR_3) {
    (void)FUNC_13(VAR_22, VAR_29);
    continue;
   }






   if (FUNC_9(VAR_22, &VAR_19, VAR_29) == 0 &&
       VAR_25 > VAR_21->cg_initediblk)
    break;
  }






  VAR_24 = FUNC_20(VAR_23 + FUNC_1(&VAR_16), FUNC_1(&VAR_16));
  if (VAR_9 && !VAR_15 && !VAR_29 &&
      VAR_16.fs_magic == VAR_2 &&
      VAR_21->cg_initediblk > 2 * FUNC_1(&VAR_16) &&
      VAR_24 < VAR_21->cg_initediblk) {
   VAR_25 = VAR_21->cg_initediblk;
   if (VAR_24 < 2 * FUNC_1(&VAR_16))
    VAR_21->cg_initediblk = 2 * FUNC_1(&VAR_16);
   else
    VAR_21->cg_initediblk = VAR_24;
   FUNC_19("CYLINDER GROUP %d: RESET FROM %ju TO %d %s\n",
       VAR_28, VAR_25, VAR_21->cg_initediblk, "VALID INODES");
   FUNC_4(VAR_20);
  }
  if (VAR_23 < VAR_16.fs_ipg)
   continue;
  VAR_11 += 1;
  if (VAR_11 < (VAR_28 * VAR_16.fs_ipg))
   VAR_23 = 0;
  else
   VAR_23 = VAR_11 - (VAR_28 * VAR_16.fs_ipg);
  if (VAR_29 && VAR_23 > VAR_21->cg_initediblk &&
      VAR_16.fs_magic == VAR_2) {
   VAR_21->cg_initediblk = FUNC_20(VAR_23, FUNC_1(&VAR_16));
   FUNC_19("CYLINDER GROUP %d: FOUND %d VALID INODES\n", VAR_28,
       VAR_21->cg_initediblk);
  }






  if (VAR_22 == VAR_11)
   continue;
  VAR_10[VAR_28].il_numalloced = VAR_23;
  if (VAR_23 == 0) {
   FUNC_11(VAR_10[VAR_28].il_stat);
   VAR_10[VAR_28].il_stat = ((void*)0);
   continue;
  }
  VAR_18 = FUNC_0((unsigned)VAR_23, sizeof(struct inostat));
  if (VAR_18 == ((void*)0))
   FUNC_10(VAR_1, "cannot alloc %u bytes for inoinfo",
       (unsigned)(sizeof(struct inostat) * VAR_23));
  FUNC_15(VAR_18, VAR_10[VAR_28].il_stat, VAR_23 * sizeof(*VAR_18));
  FUNC_11(VAR_10[VAR_28].il_stat);
  VAR_10[VAR_28].il_stat = VAR_18;
 }
 FUNC_12();
}
