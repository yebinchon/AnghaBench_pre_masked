
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_15__ {int di_extsize; scalar_t__* di_extb; scalar_t__ di_size; scalar_t__ di_mode; int di_ib; int di_db; } ;
struct TYPE_16__ {scalar_t__ di_size; scalar_t__ di_mode; int di_ib; int di_db; } ;
union dinode {TYPE_11__ dp2; TYPE_1__ dp1; } ;
typedef long long uintmax_t ;
typedef int ufs2_daddr_t ;
typedef int ufs1_daddr_t ;
typedef int u_long ;
struct inodesc {scalar_t__ id_blkno; int (* id_func ) (struct inodesc*) ;int id_entryno; scalar_t__ id_lballoc; void* id_number; int id_numfrags; void* id_type; } ;
typedef int off_t ;
typedef int mode_t ;
typedef void* ino_t ;
typedef scalar_t__ dev_t ;
struct TYPE_21__ {int ino_linkcnt; void* ino_state; int ino_type; } ;
struct TYPE_20__ {scalar_t__ fs_magic; int fs_bsize; int fs_maxfilesize; long long fs_fsize; int fs_frag; scalar_t__ fs_maxsymlinklen; } ;
struct TYPE_19__ {int size; void* value; } ;
struct TYPE_18__ {int di_ib; int di_db; } ;
struct TYPE_17__ {int di_ib; int di_db; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,long long) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (long long) ;
 int FUNC_6 (union dinode*,void*) ;
 int FUNC_7 (union dinode*,struct inodesc*) ;
 int FUNC_8 (union dinode*) ;
 TYPE_4__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int * VAR_34 ;
 int VAR_35 ;
 int * VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_9 (struct inodesc*,TYPE_11__*) ;
 int FUNC_10 (TYPE_5__*,int) ;
 scalar_t__ FUNC_11 (union dinode*) ;
 union dinode* FUNC_12 (void*,int) ;
 union dinode* FUNC_13 (void*) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (union dinode*) ;
 TYPE_9__* FUNC_16 (void*) ;
 void* VAR_42 ;
 scalar_t__ FUNC_17 (TYPE_5__*,int) ;
 long long FUNC_18 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_19 (int ,int ,int) ;
 int VAR_43 ;
 int FUNC_20 (TYPE_5__*,int ) ;
 int FUNC_21 (char*,int ) ;
 scalar_t__ VAR_44 ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (char*,int ,long long,long long) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*,void*) ;
 TYPE_5__ VAR_45 ;
 int VAR_46 ;
 int FUNC_26 (struct inodesc*) ;
 int FUNC_27 (int ,int ,int ,int ,TYPE_4__*,int) ;
 TYPE_3__ VAR_47 ;
 TYPE_2__ VAR_48 ;

__attribute__((used)) static int
FUNC_28(ino_t VAR_49, struct inodesc *VAR_50, int VAR_51)
{
 union dinode *VAR_52;
 off_t VAR_53;
 ufs2_daddr_t VAR_54;
 mode_t VAR_55;
 uintmax_t VAR_56;
 int VAR_57, VAR_58, VAR_59;

 if ((VAR_52 = FUNC_12(VAR_49, VAR_51)) == ((void*)0))
  goto unknown;
 VAR_55 = FUNC_0(VAR_52, VAR_37) & VAR_14;
 if (VAR_55 == 0) {
  if ((VAR_45.fs_magic == VAR_6 &&
       (FUNC_19(VAR_52->dp1.di_db, VAR_47.di_db,
   VAR_23 * sizeof(ufs1_daddr_t)) ||
        FUNC_19(VAR_52->dp1.di_ib, VAR_47.di_ib,
   VAR_24 * sizeof(ufs1_daddr_t)) ||
        VAR_52->dp1.di_mode || VAR_52->dp1.di_size)) ||
      (VAR_45.fs_magic == VAR_7 &&
       (FUNC_19(VAR_52->dp2.di_db, VAR_48.di_db,
   VAR_23 * sizeof(ufs2_daddr_t)) ||
        FUNC_19(VAR_52->dp2.di_ib, VAR_48.di_ib,
   VAR_24 * sizeof(ufs2_daddr_t)) ||
        VAR_52->dp2.di_mode || VAR_52->dp2.di_size))) {
   FUNC_21("PARTIALLY ALLOCATED INODE I=%lu",
       (u_long)VAR_49);
   if (FUNC_24("CLEAR") == 1) {
    VAR_52 = FUNC_13(VAR_49);
    FUNC_8(VAR_52);
    FUNC_15(VAR_52);
   }
  }
  FUNC_16(VAR_49)->ino_state = VAR_26;
  return (1);
 }
 VAR_42 = VAR_49;

 if (VAR_45.fs_magic == VAR_6)
  VAR_53 = (off_t)0x40000000 * VAR_45.fs_bsize - 1;
 else
  VAR_53 = VAR_45.fs_maxfilesize;
 if (FUNC_0(VAR_52, VAR_40) > VAR_53 ||
     FUNC_0(VAR_52, VAR_40) > VAR_45.fs_maxfilesize ||
     (VAR_55 == VAR_11 && FUNC_0(VAR_52, VAR_40) > VAR_17)) {
  if (VAR_32)
   FUNC_22("bad size %ju:", (uintmax_t)FUNC_0(VAR_52, VAR_40));
  goto unknown;
 }
 if (!VAR_44 && VAR_55 == VAR_14 && FUNC_24("HOLD BAD BLOCK") == 1) {
  VAR_52 = FUNC_13(VAR_49);
  FUNC_1(VAR_52, VAR_40, VAR_45.fs_fsize);
  FUNC_1(VAR_52, VAR_37, VAR_15|0600);
  FUNC_15(VAR_52);
 }
 if ((VAR_55 == VAR_9 || VAR_55 == VAR_10 || VAR_55 == VAR_12 ||
      VAR_55 == VAR_16) && FUNC_0(VAR_52, VAR_40) != 0) {
  if (VAR_32)
   FUNC_22("bad special-file size %ju:",
       (uintmax_t)FUNC_0(VAR_52, VAR_40));
  goto unknown;
 }
 if ((VAR_55 == VAR_9 || VAR_55 == VAR_10) &&
     (dev_t)FUNC_0(VAR_52, VAR_39) == VAR_19) {
  if (VAR_32)
   FUNC_22("bad special-file rdev NODEV:");
  goto unknown;
 }
 VAR_54 = FUNC_14(FUNC_0(VAR_52, VAR_40), VAR_45.fs_bsize);
 if (VAR_54 < 0) {
  if (VAR_32)
   FUNC_22("bad size %ju ndb %ju:",
    (uintmax_t)FUNC_0(VAR_52, VAR_40), (uintmax_t)VAR_54);
  goto unknown;
 }
 if (VAR_55 == VAR_9 || VAR_55 == VAR_10)
  VAR_54++;
 if (VAR_55 == VAR_13) {




  if (FUNC_0(VAR_52, VAR_40) < (off_t)VAR_45.fs_maxsymlinklen) {
   if (VAR_45.fs_magic == VAR_6)
    VAR_54 = FUNC_14(FUNC_0(VAR_52, VAR_40),
        sizeof(ufs1_daddr_t));
   else
    VAR_54 = FUNC_14(FUNC_0(VAR_52, VAR_40),
        sizeof(ufs2_daddr_t));
   if (VAR_54 > VAR_23) {
    VAR_57 = VAR_54 - VAR_23;
    for (VAR_54 = 1; VAR_57 > 1; VAR_57--)
     VAR_54 *= FUNC_3(&VAR_45);
    VAR_54 += VAR_23;
   }
  }
 }
 for (VAR_57 = VAR_54; VAR_54 < VAR_23 && VAR_57 < VAR_23; VAR_57++)
  if (FUNC_0(VAR_52, VAR_34[VAR_57]) != 0) {
   if (VAR_32)
    FUNC_22("bad direct addr[%d]: %ju\n", VAR_57,
        (uintmax_t)FUNC_0(VAR_52, VAR_34[VAR_57]));
   goto unknown;
  }
 for (VAR_57 = 0, VAR_54 -= VAR_23; VAR_54 > 0; VAR_57++)
  VAR_54 /= FUNC_3(&VAR_45);
 for (; VAR_57 < VAR_24; VAR_57++)
  if (FUNC_0(VAR_52, VAR_36[VAR_57]) != 0) {
   if (VAR_32)
    FUNC_22("bad indirect addr: %ju\n",
        (uintmax_t)FUNC_0(VAR_52, VAR_36[VAR_57]));
   goto unknown;
  }
 if (FUNC_11(VAR_52) == 0)
  goto unknown;
 VAR_43++;
 FUNC_16(VAR_49)->ino_linkcnt = FUNC_0(VAR_52, VAR_38);
 if (VAR_55 == VAR_11) {
  if (FUNC_0(VAR_52, VAR_40) == 0)
   FUNC_16(VAR_49)->ino_state = VAR_1;
  else if (FUNC_0(VAR_52, VAR_38) <= 0)
   FUNC_16(VAR_49)->ino_state = VAR_3;
  else
   FUNC_16(VAR_49)->ino_state = VAR_2;
  FUNC_6(VAR_52, VAR_49);
  VAR_31++;
 } else if (FUNC_0(VAR_52, VAR_38) <= 0)
  FUNC_16(VAR_49)->ino_state = VAR_8;
 else
  FUNC_16(VAR_49)->ino_state = VAR_5;
 FUNC_16(VAR_49)->ino_type = FUNC_2(VAR_55);
 VAR_28 = VAR_41 = 0;
 VAR_50->id_number = VAR_49;
 if (FUNC_0(VAR_52, VAR_35) & VAR_20)
  VAR_50->id_type = VAR_21;
 else
  VAR_50->id_type = VAR_0;
 (void)FUNC_7(VAR_52, VAR_50);
 if (VAR_45.fs_magic == VAR_7 && VAR_52->dp2.di_extsize > 0) {
  VAR_50->id_type = VAR_0;
  VAR_54 = FUNC_14(VAR_52->dp2.di_extsize, VAR_45.fs_bsize);
  for (VAR_57 = 0; VAR_57 < VAR_25; VAR_57++) {
   if (--VAR_54 == 0 &&
       (VAR_59 = FUNC_4(&VAR_45, VAR_52->dp2.di_extsize)) != 0)
    VAR_50->id_numfrags = FUNC_20(&VAR_45,
        FUNC_10(&VAR_45, VAR_59));
   else
    VAR_50->id_numfrags = VAR_45.fs_frag;
   if (VAR_52->dp2.di_extb[VAR_57] == 0)
    continue;
   VAR_50->id_blkno = VAR_52->dp2.di_extb[VAR_57];
   VAR_58 = (*VAR_50->id_func)(VAR_50);
   if (VAR_58 & VAR_22)
    break;
  }
 }
 if (VAR_45.fs_magic == VAR_7)
  FUNC_9(VAR_50, &VAR_52->dp2);
 VAR_50->id_entryno *= FUNC_5(VAR_45.fs_fsize);
 if (FUNC_0(VAR_52, VAR_33) != VAR_50->id_entryno) {
  FUNC_23("INCORRECT BLOCK COUNT I=%lu (%ju should be %ju)",
      (u_long)VAR_49, (uintmax_t)FUNC_0(VAR_52, VAR_33),
      (uintmax_t)VAR_50->id_entryno);
  if (VAR_44)
   FUNC_22(" (CORRECTED)\n");
  else if (FUNC_24("CORRECT") == 0)
   return (1);
  if (VAR_29 == 0) {
   VAR_52 = FUNC_13(VAR_49);
   FUNC_1(VAR_52, VAR_33, VAR_50->id_entryno);
   FUNC_15(VAR_52);
  } else {
   VAR_30.value = VAR_50->id_number;
   VAR_30.size = VAR_50->id_entryno - FUNC_0(VAR_52, VAR_33);
   if (VAR_32)
    FUNC_22("adjblkcnt ino %ju amount %lld\n",
        (uintmax_t)VAR_30.value, (long long)VAR_30.size);
   if (FUNC_27(VAR_27, VAR_18, 0, 0,
       &VAR_30, sizeof VAR_30) == -1)
    FUNC_25("ADJUST INODE BLOCK COUNT", VAR_30.value);
  }
 }
 if (FUNC_0(VAR_52, VAR_40) > VAR_23 * VAR_45.fs_bsize &&
     VAR_50->id_lballoc < FUNC_17(&VAR_45, FUNC_0(VAR_52, VAR_40) - 1)) {
  VAR_56 = FUNC_18(&VAR_45, VAR_50->id_lballoc + 1);
  FUNC_23("INODE %lu: FILE SIZE %ju BEYOND END OF ALLOCATED FILE, "
        "SIZE SHOULD BE %ju", (u_long)VAR_49,
        (uintmax_t)FUNC_0(VAR_52, VAR_40), VAR_56);
  if (VAR_44)
   FUNC_22(" (ADJUSTED)\n");
  else if (FUNC_24("ADJUST") == 0)
   return (1);
  if (VAR_29 == 0) {
   VAR_52 = FUNC_13(VAR_49);
   FUNC_1(VAR_52, VAR_40, VAR_56);
   FUNC_15(VAR_52);
  } else {
   VAR_30.value = VAR_50->id_number;
   VAR_30.size = VAR_56;
   if (VAR_32)
    FUNC_22("setsize ino %ju size set to %ju\n",
        (uintmax_t)VAR_30.value, (uintmax_t)VAR_30.size);
   if (FUNC_27(VAR_46, VAR_18, 0, 0,
       &VAR_30, sizeof VAR_30) == -1)
    FUNC_25("SET INODE SIZE", VAR_30.value);
  }

 }
 return (1);
unknown:
 FUNC_21("UNKNOWN FILE TYPE I=%lu", (u_long)VAR_49);
 FUNC_16(VAR_49)->ino_state = VAR_4;
 if (FUNC_24("CLEAR") == 1) {
  FUNC_16(VAR_49)->ino_state = VAR_26;
  VAR_52 = FUNC_13(VAR_49);
  FUNC_8(VAR_52);
  FUNC_15(VAR_52);
 }
 return (1);
}
