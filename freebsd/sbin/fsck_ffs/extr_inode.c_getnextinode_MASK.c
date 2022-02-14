
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ di_size; scalar_t__ di_mode; int di_ib; int di_db; } ;
union dinode {TYPE_2__ dp2; } ;
typedef int uintmax_t ;
typedef int ufs2_daddr_t ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ ino_t ;
typedef char* caddr_t ;
struct TYPE_13__ {char* b_buf; } ;
struct TYPE_17__ {TYPE_1__ b_un; } ;
struct TYPE_16__ {scalar_t__ fs_magic; int fs_bsize; scalar_t__ fs_maxsymlinklen; } ;
struct TYPE_15__ {int di_ib; int di_db; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (union dinode*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (TYPE_4__*,struct ufs2_dinode*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,struct ufs2_dinode*) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int VAR_14 ;
 int FUNC_7 (union dinode*) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (TYPE_5__*,int,long) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (TYPE_4__*,scalar_t__) ;
 TYPE_5__ VAR_16 ;
 long VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_11 (int ,int ,int) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 long VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (scalar_t__,union dinode*) ;
 int FUNC_14 (char*) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_15 (char*) ;
 TYPE_4__ VAR_26 ;
 TYPE_3__ VAR_27 ;

union dinode *
FUNC_16(ino_t VAR_28, int VAR_29)
{
 int VAR_30;
 long VAR_31;
 mode_t VAR_32;
 ufs2_daddr_t VAR_33, VAR_34;
 union dinode *VAR_35;
 static caddr_t VAR_36;

 if (VAR_28 != VAR_20++ || VAR_28 > VAR_19)
  FUNC_3(VAR_1, "bad inode number %ju to nextinode",
      (uintmax_t)VAR_28);
 if (VAR_28 >= VAR_18) {
  VAR_24++;
  VAR_34 = FUNC_10(&VAR_26, VAR_18);
  if (VAR_24 % VAR_25 == 0) {
   VAR_31 = VAR_22;
   VAR_18 += VAR_21;
  } else {
   VAR_31 = VAR_17;
   VAR_18 += VAR_15;
  }





  FUNC_6(VAR_14, &VAR_16);
  FUNC_8(&VAR_16, VAR_34, VAR_31);
  VAR_36 = VAR_16.b_un.b_buf;
 }
 VAR_35 = (union dinode *)VAR_36;
 if (VAR_26.fs_magic == VAR_2)
  VAR_36 += sizeof(struct ufs1_dinode);
 else
  VAR_36 += sizeof(struct ufs2_dinode);
 if ((VAR_9 & VAR_0) != 0) {
  FUNC_4(&VAR_26, (struct ufs2_dinode *)VAR_35);
  FUNC_2(&VAR_16);
 }
 if (FUNC_5(&VAR_26, (struct ufs2_dinode *)VAR_35) != 0) {
  FUNC_14("INODE CHECK-HASH FAILED");
  FUNC_13(VAR_28, VAR_35);
  if (VAR_23 || FUNC_15("FIX") != 0) {
   if (VAR_23)
    FUNC_12(" (FIXED)\n");
   FUNC_4(&VAR_26,
       (struct ufs2_dinode *)VAR_35);
   FUNC_2(&VAR_16);
  }
 }
 if (VAR_29 && (char *)VAR_35 == VAR_16.b_un.b_buf) {




  VAR_32 = FUNC_0(VAR_35, VAR_12) & VAR_6;
  if (VAR_32 == 0) {
   if (FUNC_11(VAR_35->dp2.di_db, VAR_27.di_db,
    VAR_7 * sizeof(ufs2_daddr_t)) ||
         FUNC_11(VAR_35->dp2.di_ib, VAR_27.di_ib,
    VAR_8 * sizeof(ufs2_daddr_t)) ||
         VAR_35->dp2.di_mode || VAR_35->dp2.di_size)
    return (((void*)0));
   return (VAR_35);
  }
  if (!FUNC_7(VAR_35))
   return (((void*)0));
  VAR_33 = FUNC_9(FUNC_0(VAR_35, VAR_13), VAR_26.fs_bsize);
  if (VAR_33 < 0)
   return (((void*)0));
  if (VAR_32 == VAR_3 || VAR_32 == VAR_4)
   VAR_33++;
  if (VAR_32 == VAR_5) {




   if (FUNC_0(VAR_35, VAR_13) < (off_t)VAR_26.fs_maxsymlinklen) {
    VAR_33 = FUNC_9(FUNC_0(VAR_35, VAR_13),
        sizeof(ufs2_daddr_t));
    if (VAR_33 > VAR_7) {
     VAR_30 = VAR_33 - VAR_7;
     for (VAR_33 = 1; VAR_30 > 1; VAR_30--)
      VAR_33 *= FUNC_1(&VAR_26);
     VAR_33 += VAR_7;
    }
   }
  }
  for (VAR_30 = VAR_33; VAR_33 < VAR_7 && VAR_30 < VAR_7; VAR_30++)
   if (FUNC_0(VAR_35, VAR_10[VAR_30]) != 0)
    return (((void*)0));
  for (VAR_30 = 0, VAR_33 -= VAR_7; VAR_33 > 0; VAR_30++)
   VAR_33 /= FUNC_1(&VAR_26);
  for (; VAR_30 < VAR_8; VAR_30++)
   if (FUNC_0(VAR_35, VAR_11[VAR_30]) != 0)
    return (((void*)0));
 }
 return (VAR_35);
}
