
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


union dinode {int dp2; int dp1; } ;
typedef scalar_t__ ufs2_daddr_t ;
struct inodesc {scalar_t__ id_fix; int id_lbn; int id_lballoc; int id_level; int id_filesize; scalar_t__ id_type; int id_blkno; int (* id_func ) (struct inodesc*) ;int id_number; int id_numfrags; scalar_t__ id_entryno; } ;
typedef int off_t ;
typedef int mode_t ;
struct TYPE_6__ {scalar_t__ fs_magic; int fs_bsize; int fs_frag; scalar_t__ fs_maxsymlinklen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int * VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct inodesc*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,int ,int ) ;
 union dinode* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (struct inodesc*,int,scalar_t__) ;
 int FUNC_10 (union dinode*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_15 (struct inodesc*) ;

int
FUNC_16(union dinode *VAR_20, struct inodesc *VAR_21)
{
 off_t VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 union dinode VAR_27;
 ufs2_daddr_t VAR_28;
 mode_t VAR_29;
 char VAR_30[VAR_10 + 1];

 if (VAR_21->id_fix != VAR_8)
  VAR_21->id_fix = VAR_2;
 VAR_21->id_lbn = -1;
 VAR_21->id_lballoc = -1;
 VAR_21->id_level = 0;
 VAR_21->id_entryno = 0;
 VAR_21->id_filesize = FUNC_0(VAR_20, VAR_17);
 VAR_29 = FUNC_0(VAR_20, VAR_16) & VAR_7;
 if (VAR_29 == VAR_4 || VAR_29 == VAR_5 || (VAR_29 == VAR_6 &&
     FUNC_0(VAR_20, VAR_17) < (unsigned)VAR_19.fs_maxsymlinklen))
  return (VAR_9);
 if (VAR_19.fs_magic == VAR_3)
  VAR_27.dp1 = VAR_20->dp1;
 else
  VAR_27.dp2 = VAR_20->dp2;
 VAR_28 = FUNC_8(FUNC_0(&VAR_27, VAR_17), VAR_19.fs_bsize);
 for (VAR_24 = 0; VAR_24 < VAR_12; VAR_24++) {
  VAR_21->id_lbn++;
  if (--VAR_28 == 0 &&
      (VAR_25 = FUNC_3(&VAR_19, FUNC_0(&VAR_27, VAR_17))) != 0)
   VAR_21->id_numfrags =
    FUNC_11(&VAR_19, FUNC_5(&VAR_19, VAR_25));
  else
   VAR_21->id_numfrags = VAR_19.fs_frag;
  if (FUNC_0(&VAR_27, VAR_14[VAR_24]) == 0) {
   if (VAR_21->id_type == VAR_1 && VAR_28 >= 0) {

    FUNC_6(VAR_30, VAR_21->id_number,
      VAR_21->id_number);
    FUNC_12("DIRECTORY %s: CONTAINS EMPTY BLOCKS",
     VAR_30);
    if (FUNC_14("ADJUST LENGTH") == 1) {
     VAR_20 = FUNC_7(VAR_21->id_number);
     FUNC_1(VAR_20, VAR_17,
         VAR_24 * VAR_19.fs_bsize);
     FUNC_13(
         "YOU MUST RERUN FSCK AFTERWARDS\n");
     VAR_18 = 1;
     FUNC_10(VAR_20);

    }
   }
   continue;
  }
  VAR_21->id_blkno = FUNC_0(&VAR_27, VAR_14[VAR_24]);
  if (VAR_21->id_type != VAR_1)
   VAR_26 = (*VAR_21->id_func)(VAR_21);
  else
   VAR_26 = FUNC_4(VAR_21);
  if (VAR_26 & VAR_11)
   return (VAR_26);
 }
 VAR_21->id_numfrags = VAR_19.fs_frag;
 VAR_22 = FUNC_0(&VAR_27, VAR_17) - VAR_19.fs_bsize * VAR_12;
 VAR_23 = VAR_19.fs_bsize;
 for (VAR_24 = 0; VAR_24 < VAR_13; VAR_24++) {
  VAR_23 *= FUNC_2(&VAR_19);
  VAR_21->id_level = VAR_24 + 1;
  if (FUNC_0(&VAR_27, VAR_15[VAR_24])) {
   VAR_21->id_blkno = FUNC_0(&VAR_27, VAR_15[VAR_24]);
   VAR_26 = FUNC_9(VAR_21, VAR_22, VAR_0 + VAR_24);
   if (VAR_26 & VAR_11)
    return (VAR_26);
  } else if (VAR_22 > 0) {
   VAR_21->id_lbn += VAR_23 / VAR_19.fs_bsize;
   if (VAR_21->id_type == VAR_1) {

    FUNC_6(VAR_30, VAR_21->id_number,
      VAR_21->id_number);
    FUNC_12("DIRECTORY %s: CONTAINS EMPTY BLOCKS",
     VAR_30);
    if (FUNC_14("ADJUST LENGTH") == 1) {
     VAR_20 = FUNC_7(VAR_21->id_number);
     FUNC_1(VAR_20, VAR_17,
         FUNC_0(VAR_20, VAR_17) - VAR_22);
     VAR_22 = 0;
     FUNC_13(
         "YOU MUST RERUN FSCK AFTERWARDS\n");
     VAR_18 = 1;
     FUNC_10(VAR_20);
     break;
    }
   }
  }
  VAR_22 -= VAR_23;
 }
 return (VAR_9);
}
