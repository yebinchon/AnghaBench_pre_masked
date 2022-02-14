
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int u_long ;
struct inodesc {scalar_t__ id_type; int (* id_func ) (struct inodesc*) ;int id_level; scalar_t__ id_number; scalar_t__ id_lbn; scalar_t__ id_blkno; int id_numfrags; } ;
struct bufarea {int b_flags; } ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ fs_bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct bufarea*,int) ;
 int FUNC_3 (struct bufarea*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct inodesc*) ;
 int FUNC_7 (struct bufarea*) ;
 scalar_t__ FUNC_8 (struct inodesc*,char*) ;
 int FUNC_9 (int ,struct bufarea*) ;
 int VAR_8 ;
 struct bufarea* FUNC_10 (scalar_t__,scalar_t__,int) ;
 int FUNC_11 (char*,scalar_t__,scalar_t__) ;
 union dinode* FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (union dinode*) ;
 int FUNC_15 (struct inodesc*) ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_19 (char*,char*,int ) ;
 int FUNC_20 (struct inodesc*) ;
 int FUNC_21 (struct inodesc*) ;

__attribute__((used)) static int
FUNC_22(struct inodesc *VAR_12, off_t VAR_13, int VAR_14)
{
 struct bufarea *VAR_15;
 int VAR_16, VAR_17, (*VAR_18)(struct inodesc *), VAR_19;
 off_t VAR_20;
 char VAR_21[VAR_0];
 char VAR_22[VAR_4 + 1];
 union dinode *VAR_23;

 if (VAR_12->id_type != VAR_2) {
  VAR_18 = VAR_12->id_func;
  if (((VAR_17 = (*VAR_18)(VAR_12)) & VAR_3) == 0)
   return (VAR_17);
 } else
  VAR_18 = FUNC_6;
 if (FUNC_5(VAR_12->id_blkno, VAR_12->id_numfrags))
  return (VAR_5);
 VAR_15 = FUNC_10(VAR_12->id_blkno, VAR_11.fs_bsize, VAR_14);
 VAR_12->id_level--;
 for (VAR_20 = VAR_11.fs_bsize, VAR_16 = 0; VAR_16 < VAR_12->id_level; VAR_16++)
  VAR_20 *= FUNC_4(&VAR_11);
 if (FUNC_13(VAR_13, VAR_20) > FUNC_4(&VAR_11))
  VAR_19 = FUNC_4(&VAR_11);
 else
  VAR_19 = FUNC_13(VAR_13, VAR_20);
 if (VAR_12->id_func == FUNC_15 && VAR_19 < FUNC_4(&VAR_11)) {
  for (VAR_16 = VAR_19; VAR_16 < FUNC_4(&VAR_11); VAR_16++) {
   if (FUNC_2(VAR_15, VAR_16) == 0)
    continue;
   (void)FUNC_19(VAR_21, "PARTIALLY TRUNCATED INODE I=%lu",
       (u_long)VAR_12->id_number);
   if (VAR_9) {
    FUNC_16("%s", VAR_21);
   } else if (FUNC_8(VAR_12, VAR_21)) {
    FUNC_3(VAR_15, VAR_16, 0);
    FUNC_7(VAR_15);
   }
  }
  FUNC_9(VAR_8, VAR_15);
 }
 for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++) {
  if (FUNC_2(VAR_15, VAR_16)) {
   VAR_12->id_blkno = FUNC_2(VAR_15, VAR_16);
   if (VAR_12->id_level == 0) {
    VAR_12->id_lbn++;
    VAR_17 = (*VAR_18)(VAR_12);
   } else {
    VAR_17 = FUNC_22(VAR_12, VAR_13, VAR_14);
    VAR_12->id_level++;
   }
   if (VAR_17 & VAR_6) {
    VAR_15->b_flags &= ~VAR_1;
    return (VAR_17);
   }
  } else {
   VAR_12->id_lbn += VAR_20 / VAR_11.fs_bsize;
   if (VAR_12->id_type == VAR_2 && VAR_13 > 0) {

    FUNC_11(VAR_22, VAR_12->id_number,
      VAR_12->id_number);
    FUNC_16("DIRECTORY %s: CONTAINS EMPTY BLOCKS",
     VAR_22);
    if (FUNC_18("ADJUST LENGTH") == 1) {
     VAR_23 = FUNC_12(VAR_12->id_number);
     FUNC_1(VAR_23, VAR_7,
         FUNC_0(VAR_23, VAR_7) - VAR_13);
     VAR_13 = 0;
     FUNC_17(
         "YOU MUST RERUN FSCK AFTERWARDS\n");
     VAR_10 = 1;
     FUNC_14(VAR_23);
     VAR_15->b_flags &= ~VAR_1;
     return(VAR_6);
    }
   }
  }
  VAR_13 -= VAR_20;
 }
 VAR_15->b_flags &= ~VAR_1;
 return (VAR_3);
}
